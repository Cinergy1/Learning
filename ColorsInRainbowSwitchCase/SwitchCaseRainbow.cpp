// SwitchcaseRainbow.cpp : Defines the entry point for the console application.
//

#include <iostream>	
#include <string>
using namespace std;



int main()
{
	enum Color
	{
		Red=0,
		Orange,
		Yellow,
		Green,
		Blue,
		Indigo,
		Violet,
		Peach,
		Beige,
		Brown,
		Black,
		White,
		Pink,
		Turquiose,
		Teal,
		AlabasterMidnight,
		Crimson

	};

	char Redo = '\0';
	
	do
	{
	
	
	cout << "Type a colour and find out if it is a colour of the rainbow." <<  " Available Colors are:" <<  endl;
	cout << "Red: " << Red << endl;
	cout << "Orange: " << Orange << endl;
	cout << "Yellow: " << Yellow << endl;
	cout << "Green: " << Green << endl;
	cout << "Blue: " << Blue << endl;
	cout << "Indigo: " << Indigo << endl;
	cout << "Violet: " << Violet << endl;
	cout << "Peach: " << Peach << endl;
	cout << "Beige: " << Beige << endl;
	cout << "Brown: " << Brown << endl;
	cout << "Black: " << Black << endl;
	cout << "White: " << White << endl;
	cout << "Pink: " << Pink << endl;
	cout << "Turquiose: " << Turquiose << endl;
	cout << "Teal: " << Teal << endl;
	cout << "AlabasterMidnight: " << AlabasterMidnight << endl;
	cout << "Crimson: " << Crimson << endl;

	cout << "Please choose a code: ";
	int Choice = 0;
	cin >> Choice;

	switch (Choice)
	{

		case Red:
		case Orange:
		case Yellow:
		case Green:
		case Blue:
		case Indigo:
		case Violet:
			cout << "Your choice is in the rainbow" << endl;
			break;

	default:
		cout << "Your choice is not in the rainbow"<< endl;
		break;
	}
	cout << "would you like to try another colour? (y/n)"<< endl;
	cin >> Redo;

	} while (Redo == 'y'); // this method replays the couts all again so experiment with GIT branch to keep this version and try get them to not show on second time around with another verison


	return 0;
}

