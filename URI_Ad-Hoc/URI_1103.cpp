//https://www.urionlinejudge.com.br/judge/en/problems/view/1103

#include <iostream>

using namespace std;

class Event
{
public:
	int hour = 0;
	int min = 0;

	int operator -(Event SecondEvent)
	{
		Event temp;

		temp.hour = this->hour - SecondEvent.hour;
		temp.min = this->min - SecondEvent.min;

		if (temp.min < 0)
		{
			temp.min += 60;
			temp.hour -= 1;
		}
		if (temp.hour < 0) temp.hour += 24;

		return (temp.hour * 60 + temp.min);
	}
};

int main()
{
	Event Start, End;

	while (cin >> Start.hour >> Start.min >> End.hour >> End.min && (Start.hour != 0 || Start.min != 0 || End.hour != 0 || End.min != 0))
	{
		cout << (End - Start) << endl;
	}

	return 0;
}
