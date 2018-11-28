//https://www.urionlinejudge.com.br/judge/en/problems/view/1247

/* DONE */

/*
	(Int'l Water) <----------12---------> (fugitive with VF)
	  .										.
	    .									.
	        .								.
		       .							.
		         .							.
		         	 X						D
						 .					.
							.				.
								 .			.
									.		.
										.	.
										   (coast guard with VG)

If This is a valid triangle only then fugitive can be caught
for this X must be >= root(12^2+D^2)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int distFG = 0; // in nautical miles
	const int distFInt = 12; // in nautical miles

	int velocityF = 0;
	int velocityG = 0;

	while (cin >> distFG >> velocityF >> velocityG)
	{

		if (velocityF >= velocityG)
		{
			cout << 'N' << endl;
			continue;
		}

		cout << ( ( (distFInt * ((double)velocityG / velocityF)) >= sqrt(pow(distFInt, 2) + pow(distFG, 2)) ) ? 'S' : 'N' ) << endl;

	}

	return 0;
}
