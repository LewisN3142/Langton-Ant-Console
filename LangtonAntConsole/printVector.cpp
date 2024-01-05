#include "standardInc.h"

using namespace std;

void printMultiVector(vector< vector<char> >& vect)
{
	for (auto& row : vect)
	{
		for (auto& element : row)
		{
			cout << element << ' ';
		}
		cout << endl;
	}
	cout << ' ' << endl;
}

