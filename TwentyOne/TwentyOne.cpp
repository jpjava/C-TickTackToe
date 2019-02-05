#include "stdafx.h"
int winORLose(int [][3]);
int main()
{
	int theGame[3][3] = { { 2,3,4 },
	{ 5,6,7 },
	{ 2,9,8 } };
		char move;
	int wheres;
	int t = 1;
	int p = 1; 
	int v = 0;
	int i = 0; 

	cout << "Welcome to Benjamin Van Vliet's wonderful game of Tic-Tac-Toe" << endl;
	cout << "      |      |     " << endl << endl;
	cout << "___1__|__2___|___3__" << endl;
	cout << "      |      |     " << endl << endl;
	cout << "___4__|__5___|___6__" << endl;
	cout << "      |      |     " << endl << endl;
	cout << "   7  |  8   |   9  " << endl;
	do
	{
		
		if(t == 3 || t == 1 || t == 5 || t == 7 || t == 9)
		{
			move = 'X';
			p = 1; 
		}
		else if (t == 2 || t == 4 || t == 6 || t == 8 || t == 10)
		{
			move = 'O'; 
			p = 2; 
		}
		 
		cout << "Player "<< p<< " Where do you want " << move << " placed? " << endl;
		cin >> wheres;

		if (move == 'X')
		{
			switch (wheres)
			{
			case 1:
				if (theGame[0][0] != 1 || theGame[0][0] != 0)
				{
					theGame[0][0] = 1;
					break;
				}
			case 2:
				if (theGame[0][1] != 1 || theGame[0][1] != 0)
				{
					theGame[0][1] = 1;
					break;
				}
			case 3:
				if (theGame[0][2] != 1 || theGame[0][2] != 0)
				{
					theGame[0][2] = 1;
					break;
				}				 
			case 4:
				if (theGame[1][0] != 1 || theGame[1][0] != 0)
				{
					theGame[1][0] = 1;
					break;
				}				
			case 5:
				if (theGame[1][1] != 1 || theGame[1][1] != 0)
				{
					theGame[1][1] = 1;
					break;
				}
			case 6:
				if (theGame[1][2] != 1 || theGame[1][2] != 0)
				{
					theGame[1][2] = 1;
					break;
				}
			case 7:
				if (theGame[2][0] != 1 || theGame[2][0] != 0)
				{
					theGame[2][0] = 1;
					break;
				}
			case 8:
				if (theGame[2][1] != 1 || theGame[2][1] != 0)
				{
					theGame[2][1] = 1;
					break;
				}
			case 9:
				if (theGame[2][2] != 1 || theGame[2][2] != 0)
				{
					theGame[2][2] = 1;
					break; 
				}
			}
		}
		else if (move == 'O')
		{
			switch (wheres)
			{
			case 1:
				if (theGame[0][0] != 1 || theGame[0][0] != 0)
				{
					theGame[0][0] = 0;
					break;
				}
			case 2:
				if (theGame[0][1] != 1 || theGame[0][1] != 0)
				{
					theGame[0][1] = 0;
					break;
				}
			case 3:
				if (theGame[0][2] != 1 || theGame[0][2] != 0)
				{
					theGame[0][2] = 0;
					break;
				}
			case 4:
				if (theGame[1][0] != 1 || theGame[1][0] != 0)
				{
					theGame[1][0] = 0;
					break;
				}
			case 5:
				if (theGame[1][1] != 1 || theGame[1][1] != 0)
				{
					theGame[1][1] = 0;
					break;
				}
			case 6:
				if (theGame[1][2] != 1 || theGame[1][2] != 0)
				{
					theGame[1][2] = 0;
					break;
				}
			case 7:
				if (theGame[2][0] != 1 || theGame[2][0] != 0)
				{
					theGame[2][0] = 0;
					break;
				}
			case 8:
				if (theGame[2][1] != 1 || theGame[2][1] != 0)
				{
					theGame[2][1] = 0;
					break;
				}
			case 9:
				if (theGame[2][2] != 1 || theGame[2][2] != 0)
				{
					theGame[2][2] = 0;
					break;
				}
			}
		}		

		i = winORLose(theGame);
		t++; 
	} while (i == 2);
	return 0;
}
	
int winORLose(int theGame[][3])
{
	int u;
	int y=0;
		
	if (theGame[0][0] == theGame[0][1] && theGame[0][1] == theGame[0][2])
	{		
		cout << "Game over" << endl;
		for (int u = 0; u<3; u++)
		 				cout << theGame[u][0] << " " << theGame[u][1] << " " << theGame[u][2] << " " << endl;
		return 1;
	}
	else if (theGame[1][0] == theGame[1][1] && theGame[1][1] == theGame[1][2])
	{
		cout << "Game over" << endl;
		for (int u = 0; u<3; u++)
 				cout << theGame[u][0] << " " << theGame[u][1] << " " << theGame[u][2] << " " << endl;
		return 1;
	}
	else if (theGame[2][0] == theGame[2][1] && theGame[2][1] == theGame[2][2])
	{
		cout << "Game over" << endl;
		for (int u = 0; u<3; u++)
			
					cout << theGame[u][0] << " " << theGame[u][1] << " " << theGame[u][2] << " " << endl;
		return 1;		
	}
	else if (theGame[0][1] == theGame[1][0] && theGame[1][0] == theGame[2][0])
	{
		cout << "Game over" << endl;
		for (int u = 0; u<3; u++)
		
				cout << theGame[u][0] << " " << theGame[u][1] << " " << theGame[u][2] << " " << endl;
		return 1;
	}
	else if (theGame[0][1] == theGame[1][1] && theGame[1][1] == theGame[2][1])
	{
		cout << "Game over" << endl;
		for (int u = 0; u<3; u++)		 
				cout << theGame[u][0] << " " << theGame[u][1] << " " << theGame[u][2] << " " << endl;
		return 1;
		
	}
	else if (theGame[0][2] == theGame[1][2] && theGame[1][2] == theGame[2][2])
	{
		cout << "Game over" << endl;
		for (int u = 0; u<3; u++)	 
				cout << theGame[u][0] << " " << theGame[u][1] << " " << theGame[u][2] << " " << endl;
		return 1;
	}
	else if (theGame[0][0] == theGame[1][1] && theGame[1][1] == theGame[2][2])
	{
		cout << "Game over" << endl;
		for (int u = 0; u<3; u++)
 				cout << theGame[u][0] << " " << theGame[u][1] << " " << theGame[u][2] << " " << endl;
		return 1;
	}
	else if (theGame[0][2] == theGame[1][1] && theGame[1][1] == theGame[2][0])
	{
		cout << "Game over" << endl; 
		for (int u = 0; u<3; u++)
 			cout << theGame[u][0] << " " << theGame[u][1] << " " << theGame[u][2] << " " << endl;
		return 1;	}
	else
	{			
		return 2;
	}
}

	


