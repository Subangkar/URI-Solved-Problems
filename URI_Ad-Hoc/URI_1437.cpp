//https://www.urionlinejudge.com.br/judge/en/problems/view/1437

#include <iostream>

using namespace std;

enum Direction
{
	North, East, South,  West
};

class Plane
{
public:

	int currentDir = North;

	void move(char dir);
private:
	
};

void Plane::move(char dir)
{
	if (dir == 'D')
		currentDir = ((currentDir + 1) & 3); // currentDir%4
	else
		currentDir += (currentDir != 0) ? (-1) : (4 - 1);
}

int main()
{
	int charDigits = 0;
	char *commands = NULL;
	char lastPos = 'x';

	while (cin >> charDigits && charDigits != 0)
	{
		Plane Sergeant;

		commands = new char[charDigits+1];

		cin >> commands;

		for (register int i = 0; i < charDigits;i++) Sergeant.move(commands[i]);

		switch (Sergeant.currentDir)
		{
		case North:
			lastPos = 'N';
			break;
		case East:
			lastPos = 'L';
			break;
		case South:
			lastPos = 'S';
			break;
		case West:
			lastPos = 'O';
			break;
		}

		cout << lastPos << endl;
	}

	return 0;
}
