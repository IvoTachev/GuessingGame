#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
	srand(time(0));
	int userNumber=0, programNumber=0,userGuess=0,programGuess=0,a=0,b=100; //[a,b]
	programNumber = rand() % 99 + 1;
	cout << "Vuvedete chislo v intervala[0,100], koeto komputara da poznae:";
	cin >> userNumber;
	cout << "Opitaite da poznaete chislo na komputara, predi tq da poznae vasheto:";
	cin >> userGuess;
	programGuess = rand() % 99 + 1;
	while ((userGuess != programNumber) && (programGuess != userNumber))
	{
		if (userGuess < programNumber)
		{
			cout << "Chisloto na komputara e po-golqmo ot posochenoto ot vas\n";
		}
		else
		{
			cout << "Chisloto na komputara e po-malko ot posochenoto ot vas\n";
		}
		cout << "Komputara izbra:" << programGuess << " i ne pozna vasheto chislo\n";
		if (programGuess > userNumber)
		{
			b = programGuess;
			programGuess = rand() % (b - a) + a;
			while (programGuess == b)
			{
				programGuess = rand() % (b - a) + a;
			}
		}
		else
		{
			a = programGuess;
			programGuess = rand() % (b - a) + a;
			while (programGuess == a)
			{
				programGuess = rand() % (b - a) + a;
			}
		}
		cout << "Opitaite se da poznaete chisloto na komputara otnovo:";
		cin >> userGuess;
	}
	if ((programGuess == userNumber)&&(userGuess != programNumber))	
	{
		cout << "Komputara pecheli!\n";
	}
	if ((userGuess == programNumber) && (programGuess != userNumber))
	{
		cout << "Bravo vie pechelite!\n";
	}
	if ((programGuess == userNumber) && (userGuess == programNumber))
	{
		cout << "I dvamata poznahte ednovremenno.\n";
	}
	system("pause");
	return 0;
}