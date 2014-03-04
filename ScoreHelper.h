class ScoreHelper
{
	public:
		ScoreHelper(int _score):curScore(_score){}

		~ScoreHelper()
		{
			//将curScore写入数据库
		}
		void AddScore(int score)
		{
			curScore+=score*scoreRank; 
		}

		int Score()
		{
			return curScore;
		}

	private:
	    const static int scoreRank=10;
		int curScore ;
};