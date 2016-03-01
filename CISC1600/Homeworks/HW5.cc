#include <iostream>
using namespace std;

int main ()
{
	int guess = 0;

	 
	
		cout <<"Guess the number: "<< endl;
		cin >> guess;
		
		do
		{		
	
			if (guess < 10)
			{	
				cout << "Oops, too small! Guess again: "<< endl;
				cin >> guess;
			}
			else if (guess > 10)
			{
				cout << "Oops, too large! Guess again: "<< endl;
				cin >> guess;
			}
			else
			{
				cout << "Bingo! The number you guessed is correct. "<< endl;
				break;	 
			}
	
		}
		while (true);

	return(0);
}
