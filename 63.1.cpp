#include <iostream>
#include <fstream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class porownanie{
	string ciag;
	ifstream plik;
	public:
	void wypisz(){
	
	plik.open("ciagi.txt");
	
	while(!plik.eof()){
		
			plik >> ciag;
			string s1 = ciag.substr(0 , ciag.length()/2 - 1);
			string s2 = ciag.substr(ciag.length()/2 , ciag.length()/2 - 1);
			
			if(s1 == s2){
				cout<<"Tak"<<"\n";
			}else{
				cout<<"Nie"<<"\n";
			}
		
		}
		plik.close();
		
	}

};


int main(int argc, char** argv) {

	porownanie l1;
	l1.wypisz();
	
	
	
	return 0;
}
