#include <iostream>
using namespace std;

int main ()
{
	float total = 0;
	for (int count = 0; count < 3; count++)
	{
		double num = 0;
		cout << "Enter a number " << endl;
		cin >> num;
		total += num;
	}

	cout << "The sum of the above numbers is: " << total << endl;

	return(0);
}
