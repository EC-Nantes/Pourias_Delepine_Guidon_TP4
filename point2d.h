#include <iostream>
#include <vector>
using namespace std;

class point2D{
private:
  int x;
  int y;

public:

//constructeurs
  point2D();
  point2D(Tx, Ty);
  Point2D (Point2D<T> p);

//accesseurs en lecture
  int getX() {return x;}
  int getY() {return y;}

//accesseurs en écriture
  void setX(int Tx) {this->x = Tx};
  void setY(int Ty) {this->y = Ty};
  void translate (int Tx, int T);




  
  




}


  
  




}