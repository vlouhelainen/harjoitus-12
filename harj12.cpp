/*		Valtteri Louhelainen

Tee ohjelma, joka kysyy käyttäjältä kokonaisluvun väliltä 1 - 9 ja
tulostaa vastauksen perusteella seuraavan kuvion(jos vastaus on 6) :

1
22
333
4444
55555
666666

Jokainen numero tulee tulostaa toistorakenteen avulla erikseen lauseella :
cout << rivinro;*/

#include <iostream>
using namespace std;

void main()
{
	short luku;
	short i;
	short j;

	cout << "Sy\x94t\x84 kokonaisluku v\x84lilt\x84 1-9.\n";
	cin >> luku;
	cout << "\n";
	for (i = 1; i <= luku; i++)
	{
		for (j = 1; j <= i; j++)
			cout << i;
		cout << "\n";
	}
}