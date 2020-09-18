/*Projektni zadatak iz Programiranja 
Iva Matetiæ, politehnika
projektni zadatak br.4,zadatak 1
*/

#include <iostream>
#include <string>
using namespace std;

void promjena_niza(string &niz);
//funkcija koja mijenja mala slova niza u velika


int main(){
	string niz;
	cout << "Upisi niz:" << endl;
	
	//unos znakovnog niza koji sadrži praznine
	getline(cin, niz);

	promjena_niza(niz);
	cout << "Promjenjeni niz: " << niz<<endl;

	system("pause");
	return 0;
}

void promjena_niza(string &niz){
	int i = 0;

	while (niz[i] != '\0'){
	//provjera svakog znaka niza dok ne dodemo do nul znaka
		if (islower(niz[i]))
		{
			niz[i] = toupper(niz[i]);
		}
	
		i++;
	}
	

}