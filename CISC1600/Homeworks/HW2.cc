#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string name;
	cout << "What's your name? " << endl;
	cin >> name;

	string age;
	cout << "What's your age? " << endl;
	cin >> age;

	string stuff;
	cout << "What's your favorite thing? " << endl;
	cin >> stuff;

	string done;
	cout << "Hi, " << name << ". " << endl
		<< "I know you are " << age << " years old and like " << stuff << ". " <<endl;

	return 0;
}
	
	
