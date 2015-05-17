#include <string>
#include <sstream>
#include <iostream>

using namespace std;

string szoforgato(string eredeti)
{
	stringstream uj;
	string eredmeny;
	uj << eredeti[0];

	for (int i = eredeti.length() - 2; i > 0; i--)
		uj << eredeti[i];

	uj << eredeti[eredeti.length() - 1];
	uj >> eredmeny;

	return eredmeny;
}

void szovegatrendezes(string szoveg)
{
	string szo;
	
	for (int i = 0; i < szoveg.length(); i++)
	{
		stringstream uj;
		while (szoveg[i] != ' ' && szoveg[i] != '.' && szoveg[i] != '!' && szoveg[i] != '?')
		{
			uj << szoveg[i];
			i++;

		}
		
		uj >> szo;
		if ((i + 1) < szoveg.length() && szoveg[i + 1] != ' ' && szoveg[i+1] != '.' && szoveg[i+1] != '!' && szoveg[i+1] != '?')
		{
			uj >> szo;
			cout << szoforgato(szo);
		} 

		if (i == szoveg.length() - 1)
		{
			uj >> szo;
			cout << szoforgato(szo);
		}
		cout << szoveg[i];

	}
	
}


int main() 
{

	szovegatrendezes("Ezaz en hazifeladatom.Megfeleloen mukodik.");
	cout << endl;

}