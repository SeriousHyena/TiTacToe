
/*
* Tic-Tac-Toe project
* Author: Ernest Mack
* Date: 10/23/21
* 
* 
*/

#include <iostream>
#include <array>
#include <string>

using namespace std;

//declare constants here
string row = "-";									//a container for the string character in the row part of the array
string col = "|";									//a container for the string character in the column part of the array


//declare arrays here
string board[3][5]{
	{"---", "|", "---","|", "---",},
	{"---", "|", "---","|", "---"},					//construct the array to build the game board				
	{"---", "|", "---","|", "---"}
};




//declare functions here
void boardArray(string row, string col);			//construct the board using 2-d array

string fum = "";


int main()
{
	
	void boardArray(string row, string col);
	boardArray(row, col);

	
	return 0;
}

//place functions here

void boardArray(string row, string col)					//simple function to print out the game board
{
	for (int row = 0; row < 3; row ++)
	{
		for (int col = 0; col < 5; col ++)
		{
			cout << board[row][col];
		}
		cout << endl;
	}
}
