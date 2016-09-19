#include <iostream>
using namespace std;

//PROGRAM: GetInput
//AUTHOR: Tyler Timmins
//COURSE: ITSE 1307 2002
//DESCRIPTION: Create a program that accepts the length and
//				width of a rectangle and then display the area


int main()
{
	//declare variables
	double dLength, dWidth, dArea;

	//get input
	cout << "Enter Rectangle Length: ";
	cin >> dLength;
	cout << "Enter Rectange Width: ";
	cin >> dWidth;

	//calculate (proccesing)
	dArea = dLength * dWidth;

	//display output
	cout << "The Area is: " << dArea << endl;

	return 0;
}