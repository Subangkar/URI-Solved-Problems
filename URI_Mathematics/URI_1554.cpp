//https://www.urionlinejudge.com.br/judge/en/problems/view/1554

/* NOT DONE :: Wrong Ans = 10% */

#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
	int x, y;
};

class Pool
{
private:
	Point whiteBall;
	Point thisBall;

	int availableBalls = 0;

	double minDist = +9999999999999999999.999;
	int minDistBallNo = 1;

	double distance(Point p1, Point p2)
	{
		if (p1.x == p2.x) { return abs(p1.y - p2.y); }
		if (p1.y == p2.y) { return abs(p1.x - p2.x); }

		return sqrt( pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) );
	}
public:
	Pool() // scan White Ball's Position And Total PlayingBalls Number in each case
	{
		 availableBalls = 0;
		 minDist = +9999999999999999999.999;
		 minDistBallNo = 1;
	}
	~Pool()
	{
		cout << endl; // Print The Enter @ each test case's END
	}
	void getWhiteBallInfo()
	{
		cin >> availableBalls;
		cin >> whiteBall.x >> whiteBall.y;
	}

	void minDistantBallFinderInaCase()
	{
		for (int ballNo = 1; ballNo <= availableBalls; ballNo++) // finds the min distant ball in a single case;
		{
			cin >> thisBall.x >> thisBall.y;

			double currentBallDist = distance(whiteBall, thisBall);

			if (currentBallDist < minDist)
			{
				minDistBallNo = ballNo;
				minDist = currentBallDist;
			}
		}

		cout << minDistBallNo;
	}
};

int main()
{
	int testCase = 0;

	cin >> testCase;
	int counter = 1;

	while (counter <= testCase)
	{
		Pool player ;
		player.getWhiteBallInfo();
		player.minDistantBallFinderInaCase();

		counter++;
	}
	return 0;
}