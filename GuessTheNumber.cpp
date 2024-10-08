#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class Game
{

public:
	int Level;
	int attempt;
	int answer;
	int objective = (rand() % 100)+1;
	Game()
	{
		cout <<"Welcome To Guess The Number (1-50)"<<endl<<endl<< "Enter Difficulty: " << endl << "1 = Easy(5 tries)" << endl << "2 = Medium(3 tries)" << endl << "3 = Hard(1 try)" << endl;
		cin >> Level;
		if (Level == 1)
		{
			attempt = 5;
			for (int i = 0; i < 5; i++)
			{
				cout << "Guess The Number (" << attempt << " Tries Left)" << endl;
				cin >> answer;
				if (answer == objective)
				{
					cout << "You Win " << endl;
					return;
				}
				else
				{
					if (answer < objective)
						cout << "Wrong Answer Try Higher" << endl;
					else
						cout << "Wrong Answer Try Lower" << endl;


					attempt--;
				}
			}
		}
		else if (Level == 2)
		{
			attempt = 3;
			for (int i = 0; i < 3; i++)
			{
				cout << "Guess The Number (" << attempt << " Tries Left)" << endl;
				cin >> answer;
				if (answer == objective)
				{
					cout << "You Win " << endl;
					return;
				}
				else
				{
					if (answer < objective)
						cout << "Wrong Answer Try Higher" << endl;
					else
						cout << "Wrong Answer Try Lower" << endl;


				}
				attempt--;
			}
		}
		else if (Level == 3)
		{
			attempt = 1;
			for (int i = 0; i < 1; i++)
			{
				cout << "Guess The Number (" << attempt << " Tries Left)" << endl;
				cin >> answer;
				if (answer == objective)
				{
					cout << "You Win " << endl;
					return;
				}
				else
				{
					if (answer<objective)
					cout << "Wrong Answer Try Higher" << endl;
					else
						cout << "Wrong Answer Try Lower" << endl;


				}
				attempt--;
			}
		}
		else cout << "Invalid" << endl;


	}


};
int main()
{
	srand(time(0));
	Game play;
	if (play.attempt == 0)
	{
		cout << "Game Over" << endl;
	}
	cout << "The Right Answer Was " << play.objective << endl;

}
