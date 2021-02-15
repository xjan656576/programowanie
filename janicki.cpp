#include <iostream>
#include <fstream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class one{
	string jw;
	int licznik;
	ifstream plik;
	
 public:

	void wczytaj(){
	
	plik.open("ciagi.txt");
	
	while(!plik.eof()){
	
	plik >> jw;	
	for (int i = 1; i<jw.size(); i++) 
   if (jw[i-1]=='1' && jw[i] == '1') {
   	licznik++;
   }
		
	}
	
	}
	
	void wypisz(){
		
	cout<<licznik;
	plik.close();
	
	}
};


int main(int argc, char** argv) {
	
	
	 one jeden;
	 jeden.wczytaj();
	 jeden.wypisz();

	
	return 0;
}
