#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string name;
	cout << "What is your name? " << endl;
	cin >> name;

	int x;
	cout << "Enter an integer. " << endl;
	cin >> x;

	double y;
	cout << "Enter a number. " <<  endl;
	cin >> y;

	double sum;
	sum = x + y;

	double difference;
	difference = x - y;

	string output;
	cout << "Hi "<< name <<", I've calculated that "<< x <<" + "<< y <<" is "<< sum <<", and "<< x <<" - "<< y <<" = "<< difference <<"."; 

	return 0;	
}
