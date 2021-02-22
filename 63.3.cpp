#include <iostream>
#include <cstdio>
#include <vector>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class klasa{
	
	void wpisz(){
		vector <int> factors(int liczba)
			{
				
			 vector <int> czynniki;
			 for (int i=2; i<liczba/2; i++)
			 {
			   while (liczba %i ==0)
			    {
			         liczba /=i;
			         czynniki.push_back(i);
			    }
			 }
			 return czynniki;
			}

	}
	void wypisz(){
			 for( size_t i = 0; i < czynniki16.size(); i++ ){
	    	 printf( "%d, ", czynniki16[ i ] );
		}
		if(czynniki16.size() <= 2){
			cout << " Jest polpierwsza";
		}else{
			cout<<"nie jest polpierwsza";
		}
	}
	
	
	
};




int main(int argc, char** argv) {
	
	klasa zmienna;
	
	
vector <int> czynniki16 = factors(16);
	  
	  zmienna.wpisz();
	  zmienna.wypisz();
   	
        
         
	return 0;
}
