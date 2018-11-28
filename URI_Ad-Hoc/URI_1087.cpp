//https://www.urionlinejudge.com.br/judge/en/problems/view/1087

#include <iostream>

using namespace std;


struct Point
{
	int x;
	int y;

	int changeX(Point nextPos)
	{
		return (this->x > nextPos.x ? (this->x - nextPos.x) : (nextPos.x - this->x));
	}

	int changeY(Point nextPos)
	{
		return (this->y > nextPos.y ? (this->y - nextPos.y) : (nextPos.y - this->y));
	}

} currentPos, nextPos;

int main()
{

	while (cin >> currentPos.x >> currentPos.y >> nextPos.x >> nextPos.y && currentPos.x != 0)
	{
		int totalMoves = 0;

		if (currentPos.changeX(nextPos) == 0 && currentPos.changeY(nextPos) == 0) totalMoves = 0;

		else if (currentPos.changeX(nextPos) == currentPos.changeY(nextPos)) totalMoves = 1;

		else if (currentPos.changeX(nextPos) == 0 || currentPos.changeY(nextPos) == 0) totalMoves = 1;

		else { totalMoves = 2; }

		cout << totalMoves << endl;
	}

	return 0;
}