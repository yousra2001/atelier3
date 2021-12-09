#include <iostream>
#include<math.h>
using namespace std;
//declaration de la class
class complexe
{
	//declaration des attribut 
protected:
	float rel;
	float img;
public:
	//cononstructeur a 2 parametres
	complexe(float, float);
	void afficher();
	friend void egalite(complexe, complexe);
	friend void addiction(complexe, complexe);
	friend void moins(complexe, complexe);
	friend void multiplication(complexe, complexe);
	friend void division(complexe, complexe);
};
complexe::complexe(float rel, float img)//constructeur
{
	this->rel = rel;
	this->img = img;
}
void complexe::afficher()//on a utiliser cette methode pour afficher la resultats des oprations dans les fonctions amis
{
	//faire tous les posibilte de L'ecriture d'in nombre complexe
	if (rel == 0 && img != 0)
	{
		cout << "votre nombre complexe est => Z=i(" << img<<")"<< endl;
	}else if (rel != 0 && img == 0)
	{
		cout << "votre nombre complexe est => Z=" << rel << endl;
	}else
	{
		cout << "votre nombre complexe est => Z=(" << rel <<")"<< "+i(" << img<<")"<< endl;
	}
	}
void egalite(complexe a, complexe b){
	if (a.rel==b.rel && a.img==b.img)
	{
		cout<<"les deux nombre complexe sont egaux"<<endl;
	}else
	{
		cout<<"les deux nombre complexe ne sont pas egaux"<<endl;	
	}
}
void addiction(complexe a, complexe b)
{
	complexe c3(a.rel + b.rel,a.img + b.img);
	cout<<"Addition => ";
	c3.afficher();
}
void moins(complexe a, complexe b)
{

	complexe c3(a.rel - b.rel,a.img - b.img);
	cout<<"Subtraction => ";
	c3.afficher();
}
void multiplication(complexe a, complexe b)
{
	complexe c3((a.rel * b.rel) - (a.img * b.img),(a.rel * b.img) + (a.img * b.rel));
	cout<<"Mulpiplication => ";
	c3.afficher();
}
void division(complexe a, complexe b)
{
	complexe c3(((a.rel * b.rel) + (a.img * b.img))/(pow(b.rel,2)+pow(b.img,2)),((a.img * b.rel) - (a.rel * b.img))/((pow(b.rel,2)+pow(b.img,2))));
	cout<<"Division => ";
	c3.afficher();
}
int main(int argc, char const *argv[])
{
	int a, b, c, d, choix;
	cout << "Entrer un nombre reelle de premier nombre complexe: ";
	cin >> a;
	cout << "Entrer un nombre imaginaire de premier nombre complexe: ";
	cin >> b;
	cout<<endl;
	cout<<endl;
	cout << "Entrer un nombre reelle de deuxieme nombre complexe: ";
	cin >> c;
	cout << "Entrer un nombre imaginaire de deuxieme nombre complexe: ";
	cin >> d;
	complexe c1(a, b);
	complexe c2(c, d);
	do //on a fait la boucle do while pour verifie si l'utilisateur a entrer un choix valable
	{
		cout<<"Choisir une operation pour les nombre complexe:"<<endl;
		cout<<"1-  egalite"<<endl;
		cout<<"2-  addition"<<endl;
		cout<<"3-  soustraction"<<endl;
		cout<<"4-  multiplication"<<endl;
		cout<<"5-  division"<<endl;
		cout<<"Votre choix => ";
		cin>>choix;
		if (choix<1 || choix>5)
		{
			cout<<"-----------------------------------------------------------------------------"<<endl;
			cout<<"            ATTENTION! Tu dois choisir un nombre Entre 1 et 5"<<endl;
			cout<<"-----------------------------------------------------------------------------"<<endl;
		}
	} while (choix<1 || choix>5);
if (choix == 1)
	egalite(c1,c2);
if (choix == 2)
	addiction(c1,c2);
if (choix == 3)
	moins(c1,c2);
if (choix == 4)
	multiplication(c1,c2);
if (choix == 5)
	division(c1,c2);
	return 0;
}
