#ifndef __FILRHELPER_H__
#define __FILRHELPER_H__ 
class FileHelper
{
	public:
		void Append(const char* fileName,const string& content)
		{
			ofstream fout(fileName,ios::app);
			if(fout)
			{
				fout<<content<<endl;
				fout.close();
			}
		}

		void ReadLine(const char* fileName,char* buf,int size)
		{
			ifstream fin(fileName);
			if(fin)
			{
				fin.getline(buf,size); 
				fin.close();
			}
		}
 
};
#endif //__FILRHELPER_H__
