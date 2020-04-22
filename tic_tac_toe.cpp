#include<iostream>
#include<vector>
#define row 3
#define column 3
static int pos = 0;

using namespace std;
class Game{
		public:
				void display(vector< vector<char>  > &a );
				bool game_over(vector< vector<char>  > &a,char &turn);
				void board(vector< vector<char>  > &a,char &choice,char &turn);


};

void Game :: display(vector< vector<char>  > &a)
{
		for(int i = 0; i<row;i++)
		{
				cout<< "\t";
				for(int j = 0;j<column;j++)
				{

						cout<< "\t"<<a[i][j] << "|  ";

				}
				cout<<endl;
				cout<< "\t\t__________________"<<endl;
		}
		cout<< endl;
}

bool Game :: game_over(vector< vector<char>  > &a,char &turn) {

		// Condition checking for horizontal line and vertical  line 
		for(int i = 0;i<row;i++)
		{
				if(((a[i][0] == a[i][1] and a[i][1] == a[i][2]) and a[i][2] == 'X') or ((a[0][i] == a[1][i] and a[2][i] == a[1][i]) and a[2][i] == 'X') or ((a[0][0] == a[1][1] and a[1][1] == a[2][2]) and a[2][2] == 'X') or ((a[0][2] == a[1][1] and a[1][1] == a[2][0]) and a[2][0] == 'X'))

				{
						cout<< " Congratulation!!, TURN[X] WINS..." << endl;						
						return true;
				}
				else if(((a[i][0] == a[i][1] and a[i][1] == a[i][2]) and a[i][2] == 'O') or ((a[0][i] == a[1][i] and a[2][i] == a[1][i]) and a[2][i] == 'O') or ((a[0][0] == a[1][1] and a[1][1] == a[2][2]) and a[2][2] == 'O') or ((a[0][2] == a[1][1] and a[1][1] == a[2][0]) and a[2][0] == 'O'))  
				{
						cout<< " Congratulation!!, TURN[O] WINS..." << endl;						
						return true;


				}
		}
		// Condition for game draw;
		if(pos >= 9)
		{
				cout<<    " OOPS... GAME DRAW " << endl;
				return true;
		}


		return false;
}

void Game :: board(vector< vector<char>  > &a,char &choice,char &turn  )
{
		while(!game_over(a,turn))
		{
				if(turn == 'X')
						cout<< " Turn [X] => ";
				else
						cout<< " Turn [0] => ";
				cin >> choice;
				switch(choice)
				{
						case '1':if(a[0][0] != 'X' and a[0][0] != 'O'){
										 a[0][0] = turn; pos++; if(turn =='X')
												 turn = 'O';else
												 turn = 'X';
								 }
								 else
										 cout<< "Already filled, Try diffrent Position"<<endl;
								 break;
						case '2':
								 if(a[0][1] != 'X' and a[0][1] != 'O'){
										 a[0][1] = turn; pos++; if(turn =='X')
												 turn = 'O';else
												 turn = 'X';
								 }
								 else
										 cout<< "Already filled, Try diffrent Position"<<endl;
								 break;

						case '3':
								 if(a[0][2] != 'X' and a[0][2] != 'O'){
										 a[0][2] = turn; pos++; if(turn =='X')
												 turn = 'O';else
												 turn = 'X';
								 }
								 else
										 cout<< "Already filled, Try diffrent Position"<<endl;
								 break;
						case '4':
								 if(a[1][0] != 'X' and a[1][0] != 'O'){
										 a[1][0] = turn; pos++; if(turn =='X')
												 turn = 'O';else
												 turn = 'X';
								 }
								 break;
						case '5':
								 if(a[1][1] != 'X' and a[1][1] != 'O'){
										 a[1][1] = turn; pos++; if(turn =='X')
												 turn = 'O';else
												 turn = 'X';
								 }
								 break;
						case '6':
								 if(a[1][2] != 'X' and a[1][2] != 'O'){
										 a[1][2] = turn; pos++; if(turn =='X')
												 turn = 'O';else
												 turn = 'X';
								 }
								 else
										 cout<< "Already filled, Try diffrent Position"<<endl;
								 break;
						case '7':
								 if(a[2][0] != 'X' and a[2][0] != 'O'){
										 a[2][0] = turn; pos++; if(turn =='X')
												 turn = 'O';else
												 turn = 'X';
								 }
								 else
										 cout<< "Already filled, Try diffrent Position"<<endl;
								 break;
						case '8':
								 if(a[2][1] != 'X' and a[2][1] != 'O')
								 {
										 a[2][1] = turn; pos++; if(turn =='X')
												 turn = 'O';else
												 turn = 'X';
								 }
								 else
										 cout<< "Already filled, Try diffrent Position"<<endl;
								 break;
						case '9':
								 if(a[2][2] != 'X' and a[2][2] != 'O')
								 {
										 a[2][2] = turn; pos++; if(turn =='X')
												 turn = 'O';else
												 turn = 'X';
								 }
								 else
										 cout<< "Already filled, Try diffrent Position"<<endl;
								 break;
						default:
								 cout<< "Invalid Choice Enter Again" <<endl; 
				}
				display(a);
		}
}

int main()
{
		char choice;
		char turn;
		turn = 'X';
		cout << "\t\t WELCOME TO TIC TAC TOE " << endl; 

		vector< vector<char>  > a = { {'1', '2', '3'}, {'4','5','6'}, {'7','8','9'}}; 
		Game g;
		g.display(a);
		g.board(a,choice,turn);

		return 0;


}
