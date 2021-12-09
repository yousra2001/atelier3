#include<iostream>
using namespace std; 
//declarationde la classe mere
class Mere 
{
	//declaration des methodes  qui sont sous forme de constructeurs et destructeur 
	public :
		Mere();
		~Mere() ;
		//une methode display qui affiche un msg 
		virtual void display() ;	
} ;
//declaration de la classe fille hérite du classe mere
class Fille : public Mere {
	public :
		//declaration des methodes  qui sont sous forme de constructeurs et destructeur 	
		Fille() ;
		~Fille() ;
		//une methode display qui affiche un msg 
		void display() ;
};
//appel du methodes pour chaque classe mere et fille 
Mere::Mere() { } ;
Mere::~Mere() { } ;
Fille::Fille() { } ;
Fille::~Fille() { } ;
void Mere :: display() {
	//le message affiché apres appel du mthd display pour la class mere 
	cout<<"C'est un msg pour la mere";
};
void Fille :: display () {
	//le message affiché apres appel du mthd display pour la class mere 
	cout <<"C'est un msg pour la fille" ;
};
//dans le main on declare un objet fille1 pour la classe fille puis on l'appel la methode display affin d afficher le message convenu 
main() {
	Fille fille1;
	fille1.display();
};

