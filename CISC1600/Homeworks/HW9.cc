#include <iostream>
#include <string>
using namespace std;

void outputOne(string studentNames[], int studentScores[], int index)
{
	cout << "Student #" << index << ": Name-" << studentNames[index] << " Score-" << studentScores[index] << endl;
}

void outputAll(string studentNames[], int studentScores[], int arraySize)
{
	for(int i=0; i<arraySize; i++)
	{
		outputOne(studentNames, studentScores, i);
	}
}

int getAverage(int studentScores[], int arraySize)
{
	int sum = 0;
	for(int i=0; i<arraySize; i++)
	{
		sum = sum + studentScores[i];
	}

	int avg = sum / arraySize;
	return avg;
}

int main()
{
	string names[5] = {"Apple","Ben","Cathie","Denny","Elly"};
	int scores[5] = {60,70,80,90,100};
	int operation, index;
	int replacementScore;
	bool running = true;

	do{
		cout <<"==Menu==" << endl;
		cout << "1 - Output single student's name and score" << endl;
		cout << "2 - Output all students' name and scores" << endl;
		cout << "3 - Output average score" << endl;
		cout << "4 - Replace a score" << endl;
		cout << "Anything else - exit program" << endl;
		cout << "Please input menu item: ";
		cin >> operation;
		switch(operation)
		{
			case 1:
				cout << "Please input student #: ";
				cin >> index;
				if(index >= 0 && index < 5)
				{
					outputOne(names, scores, index);
				}
				else
				{
					cout << "Invalid index!" << endl;
				}
				break;

			case 2:
				outputAll(names, scores, 5);
				break;
			
			case 3:
				cout << "Average score = " << getAverage(scores, 5) << endl;
				break;
		
			case 4:
				cout << "Please input student #: ";
				cin >> index;
				if(index >= 0 && index < 5)
				{
					outputOne(names, scores, index);
				}
				else
				{
					cout << "Invalid index!" << endl;
				}
				cout << "Enter a replacement score: " << endl;
				cin >> replacementScore;
				scores[5] = replacementScore;
				cout << "The new score is " << replacementScore << endl;
				break;
					
			default:
				running = false;
				break;

		}
	}while(running);

	return 0;
}
