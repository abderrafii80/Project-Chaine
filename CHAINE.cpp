#include "CHAINE.h"
#include<iostream>
#include<string>
using namespace std;
CHAINE::CHAINE(){
	taille = 0;
	mot = new char[1];
	mot[0] = '\0';
}

CHAINE::CHAINE(int t){
	taille = t;
	mot = new char[taille+1];
	mot[taille] = '\0';
}

CHAINE::CHAINE(string s){
	taille = s.size();
	mot = new char[taille+1];
	for(int i=0;i<taille;i++)
	    mot[i] = s[i] ;
	mot[taille] = '\0';    
}

CHAINE::CHAINE(char c){
	taille = 2;
	mot[0] = c;
	mot[1] = '\0';
}

CHAINE::CHAINE(CHAINE & A){
	taille = A.taille;
	mot = new char[taille];
	for(int i=0;i<taille;i++)
	    mot[i] = A.mot[i];
	    	
}

CHAINE::~CHAINE(){
	delete mot;
}

int CHAINE::getTaille(){
	return taille;
}

void CHAINE::SetTaille(int t){
	taille = t;
}

char CHAINE::getMot(){
	return *mot;
}

void CHAINE::SetMot(char* a){
	mot = a;
}

void CHAINE::affiche(){
	for(int i=0;i<taille;i++)
	    cout<<mot[i];
	cout<<endl;
}

CHAINE& CHAINE::operator=(const CHAINE & A){
	if(this != &A){
		taille = A.taille;
		delete mot;
		mot = new char[taille];
		for(int i=0;i<taille;i++)
		   mot[i] = A.mot[i];
		   
	return *this;	   
	}	
	
}

CHAINE CHAINE::operator+(const CHAINE & A){
		CHAINE B(taille+A.taille);
	
		for(int i=0;i<taille;i++)
		    B.mot[i] = mot[i] ;
		
		for(int i=taille;i<=B.taille;i++)
		   B.mot[i] = A.mot[i-taille] ;
		
		return B;
		
	
}

bool CHAINE::operator==(const CHAINE & C){
	if(taille == C.taille){
		for(int i=0;i<taille;i++){
			if(mot[i] != C.mot[i])
			     return false;
		}
		return true;
	}
	return false;
}

bool CHAINE::operator>(const CHAINE &C){
	int i=0;
	while(i<taille && i<C.taille && mot[i] == C.mot[i])
		i++;
		
		return (mot[i] > C.mot[i]);
}

bool CHAINE::operator<(const CHAINE &C){
	return( !((*this>C) || (*this == C)) );
}

char CHAINE::operator[](int i){
	
	if(i>=0 && i<taille)
	    return mot[i];
	else
	    return NULL;        
}






