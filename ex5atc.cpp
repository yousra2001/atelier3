#include<iostream>
using namespace std; 
//declararation du class animal 
class Animale{
	 //type protected car car nous somme dans le cas d'heritage
	protected: 
	//declaration des attribut
	string name ;
	float age ;
	public :
		//declaration du constructeur parametre 
		Animale(string name,float age){
	//utilusation du pointeur this agffin de montrer au programme la difference entre name autant qu un attribut et name autant qu un parametre du constructeur 
			this->name=name;
			this->age=age;}	
	//declaration du methode set-value de type void	qui permet d affecter une valeur
    void set_value(float age){
    	this->age=age;
		}
	//declaration du methode affiche de type void qui permet d afficher un msg		
	void affiche(){
		cout<<"je suis un animale , nom ="<<name<<"et age de :"<<age<<endl;
		}
	};
	//class zebra herite du class animal
    class Zebra : public Animale{
	private:
	//attribut supplementaire que class mere	
		string origine;
	public:
		Zebra(float age, string name , string origine):Animale(name,age)
		{
			this->origine=origine;
			}
	//fonction permettant d afficher un message 		
    void affiche(){
    	Animale::affiche();
    cout<<"ma race est : zebra "<<" d'origine"<< origine<<endl; 
	}	
};
//le programme main principal declarant des objets et fait appel a chaque fonction		
int main(){
	Zebra z(50,"n1","Asie");
	z.affiche();
	z.set_value(4);
	z.affiche();
};
