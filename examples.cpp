#include <iostream>
using namespace std;

int main()
{
	bool loopController = true;
	char question = 'y';
	int roomLength, roomWidth;


	while (loopController) {
		cout << "Enter your length: ";
		cin >> roomLength;


		if (roomLength > roomWidth)
		{
			cout << "Length is greater than width" << endl;
		}
		else
		{
			cout << "Width is greater than length" << endl;
		}

		cout << "run again (y/n)";

		cin >> question;

		if ((question != 'y') && (question != 'Y'))
		{
			keepRunning = false;
		}


	}

	return 0;
}