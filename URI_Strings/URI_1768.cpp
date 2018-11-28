//https://www.urionlinejudge.com.br/judge/en/problems/view/1768

/* DONE :: */

#include <iostream>

using namespace std;

void drawTree(int lastRow)
{
	int maxSpacesInThisFirstPiramidRow = 0;
	int maxSpacesInThisSecondPiramidRow = 0;

	if ((lastRow&1)==0)
	{
		lastRow -= 1; // to fullfill the cond.
		maxSpacesInThisFirstPiramidRow += 1;
		maxSpacesInThisSecondPiramidRow += 1;
	}

	int stars = 1;
	int spaces = 1;

	int firstPiramidLastRow = (lastRow>>1) + 1;

	maxSpacesInThisFirstPiramidRow += (firstPiramidLastRow - 1);
	int maxStarsInThisRow = 1;

	/* Draws The First Piramid */
	for (int row = 1; row <= firstPiramidLastRow; row++)
	{
		for (spaces = 1; spaces <= maxSpacesInThisFirstPiramidRow; spaces++)
			cout << " ";
		for (stars = 1; stars <= maxStarsInThisRow; stars++)
			cout << "*";

		cout << endl;

		maxSpacesInThisFirstPiramidRow--;
		maxStarsInThisRow += 2;
	}

	int secondPiramidLastRow = 2; // here Last Row = 2

	maxSpacesInThisSecondPiramidRow += (firstPiramidLastRow - 1);
	maxStarsInThisRow = 1;

	/* Draws The Second Piramid */
	for (int row = 1; row <= secondPiramidLastRow; row++)
	{
		for (spaces = 1; spaces <= maxSpacesInThisSecondPiramidRow; spaces++)
			cout << " ";
		for (stars = 1; stars <= maxStarsInThisRow; stars++)
			cout << "*";

		cout << endl;

		maxSpacesInThisSecondPiramidRow--;
		maxStarsInThisRow += 2;
	}

}


int main()
{
	int Row = 0;

	while (cin>> Row)
	{
		drawTree(Row);
		cout << endl;
	}

	return 0;
}