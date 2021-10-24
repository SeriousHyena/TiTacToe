
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
string row = "-";
string col = "|";

//declare variables here



//declare functions here
string printBoard(string row, string col);




int main()
{
	string printBoard(string row, string col);												//call the main function to start the game
	string foo = printBoard(row, col);
	cout << foo << endl;
	
	return 0;
}

//place functions here
string printBoard(string row, string col)

{
	int count = 0;
	while (count < 6) {

		for (int i = 0; i < 3; i++)
		{
			cout << row ;				
		}
		
		cout << col;
	
		for (int i = 0; i < 3; i++)
		{
			cout << row;			
		}

		cout << col;

		for (int i = 0; i < 3; i++)
		{
			cout << row;
		}
		return 0;
		count++;
	}
}