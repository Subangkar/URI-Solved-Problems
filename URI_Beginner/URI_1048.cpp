//https://www.urionlinejudge.com.br/judge/en/problems/view/1048
#include <iostream>

using namespace std;

class sal
{
public:
	sal();
	~sal();

private:
	double salary = 0;
	double currentSalary = 0;
	double increament = 0;
	int increaseper = 0;
};

sal::sal()
{
	cin >> salary;

	if (salary <= 400)
	{
		increaseper = 15;
	}
	else if (salary <= 800)
	{
		increaseper = 12;
	}
	else if (salary <= 1200)
	{
		increaseper = 10;
	}
	else if (salary <= 2000)
	{
		increaseper = 7;
	}
	else if (2000<salary)
	{
		increaseper = 4;
	}
}

sal::~sal()
{
	increament = salary * increaseper / 100;
	currentSalary = salary + increament;

	printf("Novo salario: %.2f\n", currentSalary);
	printf("Reajuste ganho: %.2f\n", increament);
	cout << "Em percentual: " << increaseper << " %" << endl;
}

int main() 
{
	sal employee;

	return 0;
}