#include "Point.h"; 

Point& Point::operator=(const Point& p){
	X=p.X;
	Y=p.Y;
	return *this;
}

bool Point::operator==(const Point& p)
{
	return X==p.X && Y==p.Y;
}

bool Point::operator==(Point& p)
{
	return X==p.X && Y==p.Y;
}

bool Point::operator!=(const Point& p)
{
	return X!=p.X || Y!=p.Y;
}

bool Point::operator!=(Point& p)
{
	return X!=p.X || Y!=p.Y;
}

 
TwoPoint::TwoPoint():first(NULL),second(NULL),count(0){}

TwoPoint::~TwoPoint()
{
	Clear();
}

//���ӵ�
bool TwoPoint::AddPoint(const Point& p)
{
	if(count==2)
	{
		return false;
	}
	if(count==0)//���ӵ�һ����
	{
		first=new Point(p); 
	}else 
	{   //���ӵڶ�����
		if(*first==p)
		{
			return false;
		}
		second=new Point(p); 
	}
	count++;
	return true;
}

Point TwoPoint::First() const
{
	if(first!=NULL){
	  return Point(first->X,first->Y); 
	}
	return Point();
}

void TwoPoint::First(const Point& p)
{
	if(first!=NULL)
	{
		delete first;
	}
	first=new Point(p);
}

Point TwoPoint::Second() const
{
	if(second!=NULL){
	  return Point(second->X,second->Y); 
	}
	return Point();
}

//ʹfirst�ĺ�����С��second�ĺ�����
void TwoPoint::Sort()
{
	if(first->Y>second->Y)
	{
		Point* tmp=first;
		first=second;
		second=tmp;
	}
}

void TwoPoint::Clear()
{
	if(first!=NULL){
	  delete first; 
	  first=NULL;
	}
	if(second!=NULL){
	  delete second; 
	  second=NULL;
	}
	count=0;
}
 
//��ĸ���
int TwoPoint::Count() const
{
	return count;
} 
  