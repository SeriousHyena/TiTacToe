
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
	while (count < 3) {

		for (int i = 0; i < 3; i++)			//print the first 3 horiz bars
		{
			cout << row ;				
		}
		
		cout << col;						//print the first vert bar
	
		for (int i = 0; i < 3; i++)
		{
			cout << row;					//print the second 3 horiz bars
		}

		cout << col;						//print the second vert bar

		for (int i = 0; i < 3; i++)
		{
			cout << row;					//print the last 3 horiz bars
		}
		cout << endl;
		
		count++;
	}
	return 0;
}