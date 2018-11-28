
// actually a fibonacci series
#include <iostream>

using namespace std;

int64_t subtree[41] = { 0,1 };


int fibTree(int i)
{
	if (subtree[i]) return subtree[i];

	else if (i == 2) return (1 + 1);

	return (subtree[i] = fibTree(i - 1) + fibTree(i - 2));
}

int main()
{
	int n = 0;

	while (cin >> n && n)
	{
		cout << fibTree(n) << endl;
	}

	return 0;
}
