#include<iostream>
using namespace std;
class Myclass{ 
public :
	//methodes
Myclass() ;
~Myclass() ;
};

   // Implementer les methodes existés !
Myclass::Myclass() {
	cout<<"the <<\"Myclass\">> class is detected succeful !"<<endl ;
}

Myclass::~Myclass() {
   cout<<"the <<\"Myclass\">> class is detected succeful !"<<endl ; 	
}

int main(void){ 
 // to show the destrictor we have doing all the instructions that's here 
 {
  //creer un objet "obj"
Myclass obj ;
 }
return 0 ; 
}
