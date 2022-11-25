#include <iostream>
#include "CHAINE.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	CHAINE a1("bonjour") , a2("bonsoir") , b , a ;
	a = a1+a2;
	a.affiche();  // a = a1+a2 ( concatenation des 2 chaines  ==>  "bonjourbonsoir" )
	
	if(a1 == a2)  //  teste l egalite des 2 chaines
	   cout<<"les deux chaines sont egaux"<<endl;
	else
	   cout<<"les deux chaines sont different"<<endl;  
	   
	if(a1>a2)   // comparation de a1 et a2 ( "j" < "s" ==> a1 est inferieur a a2 )
		cout<<"a1 superieur a a"<<endl; 
	else
		cout<<"a1 inferieur a a"<<endl; 
		 
	cout<<a[2];    // a c est la concatenation de a1 et a2 || a="bonjourbonsoir" donc prend caractere " n "
		      
	
	return 0;
}
