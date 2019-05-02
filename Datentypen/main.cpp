#include <iostream>
#include <string>

using namespace std;

int main()
{
	// ganze Zahl
	unsigned int GanzeZahl = 23;

	// Fliesskomma
	float KommaZahl = 4.4;

	// einzelne Zeichen
	char Zeichen = 'A'; // oder char(0) für NULL Init

	// boolsche Variable
	bool Wahrheitswert = true; // TRUE oder FALSE

	cout << "Name"			<< "\t\t"	<< "Wert"			<< "\t"	<< "Groesse"				<< endl;
	
	cout << "GanzeZahl"		<< "\t"		<< GanzeZahl		<< "\t" << sizeof(GanzeZahl)		<< endl;
	cout << "KommaZahl"		<< "\t"		<< KommaZahl		<< "\t" << sizeof(KommaZahl)		<< endl;
	cout << "Zeichen"		<< "\t\t"	<< Zeichen			<< "\t" << sizeof(Zeichen)			<< endl;
	cout << "Wahrheitswert" << "\t"		<< Wahrheitswert	<< "\t" << sizeof(Wahrheitswert)	<< endl << endl;;
	
	int result = 0;
	result = 8 % 7;	// 7*1 = 7 rest 1
	result = 8 % 3;	// 3*2 = 6 rest 2
	cout << "Modulo: " << result << endl;

	string wort1 = "Hello";
	string wort2 = "World!";
	string wort3 = "";

	wort3 = wort1 + " " + wort2;
	cout << wort3 << endl;


	system("pause");
	return 0;
}


