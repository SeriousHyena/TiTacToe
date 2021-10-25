
/*
* Tic-Tac-Toe project
* Author: Ernest Mack
* Date: 10/23/21
* D E S C R I P T I O N
* -------------------------------------------------------------------------------------------------------------------------------
* the "void boardArray" function returns nothing and constructs the game board
* 
*/

#include <iostream>
#include <array>
#include <string>

using namespace std;

//declare constants here
string row = "-";									//a container for the string character in the row part of the array
string col = "|";									//a container for the string character in the column part of the array
const int ROW = 3;
const int COL = 3;
string userTurn;



//declare arrays here
string board[4][5]{
	{"___", "|", "___","|", "___"},
	{"___", "|", "___","|", "___"},					//construct the array to build the game board				
	{"___", "|", "___","|", "___"},
	{"   ", "|", "   ","|", "   "}
	
};

string playerBoard[3][3]{
	{" ", " ", " "},
	{" ", " ", " "},								//construct the array to build the PLAYER board				
	{" ", " ", " "}
};


//declare functions here
void boardArray(string row, string col);			//construct the board using 2-d array
void getUserInput(string userTurn, string playerBoard[ROW][COL]);

string fum = "";

int main()
{
	
	void getUserInput(string userTurn, string boardArray[ROW][COL]);
	void boardArray(string row, string col);		//call function to build the game board
	boardArray(row, col);

	getUserInput("x", 0);
	cout << userTurn;


	


	
	return 0;
}

//place functions here
void boardArray(string row, string col)				//simple function to print out the game board
{
	for (int row = 0; row < 4; row ++)
	{
		for (int col = 0; col < 5; col ++)
		{
			cout << board[row][col];
		}
		cout << endl;
	}
}

void getUserInput(string userTurn, string boardArray[ROW][COL])		//test
{
	cout << "Enter a move on the board in the form of row,col: ";
	cin >> userTurn;
	cout << userTurn;
}
