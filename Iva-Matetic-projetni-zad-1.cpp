#include <iostream>
#include <string>
using namespace std;

void promjena_niza(string &niz);

int main(){
	string niz;
	cout << "Upisi niz:" << endl;
	getline(cin, niz);
	promjena_niza(niz);
	cout << "Promjenjeni niz: " << niz<<endl;
	system("pause");
	return 0;
}

void promjena_niza(string &niz){
	int i = 0;
	while (niz[i] != '\0'){
		if (islower(niz[i]))
		{
			niz[i] = toupper(niz[i]);
		}
		i++;
	}
}
