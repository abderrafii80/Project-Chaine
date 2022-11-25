#ifndef CHAINE_H
#define CHAINE_H
#include<string>
class CHAINE{
	public:
		int taille;
		char* mot;
	public:
		CHAINE();
		CHAINE(int);
		CHAINE(std::string);
		CHAINE(char);
		CHAINE(CHAINE &);
		~CHAINE();
		int getTaille();
		void SetTaille(int);
		char getMot();
		void SetMot(char*);
		void affiche();
		CHAINE& operator=(const CHAINE &);
		CHAINE operator+(const CHAINE &);
		bool operator==(const CHAINE &);
		bool operator>(const CHAINE &);
		bool operator<(const CHAINE &);
		char operator[](int);

};

#endif
