#include <iostream>
using namespace std;
//declaration du class Shape
class Shape
{
	//declaration des attrubuts protected 
protected:
  float x, y;
public:
	//declaration du constructeur paramétré
  Shape(float _x, float _y)
  {
    x = _x;
    y = _y;
  }
};
//declaration du class rectangle hérité du class Shape
class Rectangle: public Shape
{
public:
	//constructeur parametrere
  Rectangle(float _x, float _y) : Shape(_x, _y) {}
  //la fonction area qui fait le calcul de la zonne du rectangle
  float area()
  {
    return (x * y);
  }
};
//declaration du class triangle hérité aussi du class Shape
class Triangle: public Shape
{
public:
	//constructeur parametrere
  Triangle(float _x, float _y) : Shape(_x, _y) {}
  //la fonction area qui fait le calcul de la zonne du triangle
  float area()
  {
    return (x * y / 2);
  }
};
//le programme principale main qui fait appel de fonction area pour chaque objet 
int main (){
  Rectangle rectangle(2,3);
  Triangle triangle(2,3);
  cout <<"la zonne de rectangle est :"<< rectangle.area() << endl;   //le resultat doit etre egal à 6
  cout <<"la zonne de triangle est :"<< triangle.area() << endl;    //le resultat doit etre egal à 3
  return 0;
}
