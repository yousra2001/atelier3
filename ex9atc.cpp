// un atttribut statique ne peut pas etre initialiser a linterieru de la clase 
#include<iostream>
using namespace std;
//declaration du class test
class test{
	public:
		//declaration d un attribut static
		static int i;
		////declaration d une methode appele call
	void call(){
		//incrementation du compteur 
		i ++ ;
		//affiche du nbr
		cout <<i<<"\n";
	}
};
int test::i=0;//initialisation du compteur par 0
int main()
{
	test t1,t2,t3,t4,t5; //declaration de 5 variables
	//appeler ces variables d apres la fct call 
	t1.call();
	t2.call();
	t3.call();
	t4.call();
	t5.call();	
}
