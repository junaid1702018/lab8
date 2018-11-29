#include <iostream>
#include <math.h>
using namespace std;

class TwoD
{

public:
TwoD(double i, double j)
{
  x=i;
  y=j;
}
void setX(double NewX)
{
  x = NewX;
}
 void setY(double NewY)
{
  y = NewY;
}
double getX()
 const {
  return x;
}
double getY()
const {
  return y;
}

protected:
double x, y;
};
class ThreeD:public TwoD{

protected:
double z;
public:
ThreeD(double h, double i, double k):TwoD(h,i), z(k)
{

}

void setZ(double NewZ){
  z = NewZ;}

double getZ() const {return z;}

};
int main()
 {

  ThreeD obj1(2,3,9);
ThreeD obj2(4,5,9);
  double i,j,k;
  cout<<"object1 inputs=";
  cout<<"x=";
  cin>>i;
obj1.setX(i);
  cout<<"y=";
  cin>>j;
obj1.setY(j);
  cout<<"z=";
  cin>>k;
obj1.setZ(k);
cout<<"output  of x and y and z of object1"<<endl;
  cout<<obj1.getX()<<endl;
  cout<<obj1.getY()<<endl;
  cout<<obj1.getZ()<<endl;
  cout<<"object2 inputs =";
  cout<<"x=";
  cin>>i;
  obj2.setX(i);
  cout<<"y=";
  cin>>j;
  obj2.setY(j);
  cout<<"z=";
  cin>>k;
  obj2.setZ(k);
cout<<"output  of x and y and z of object2 "<<endl;
  cout<<obj2.getX()<<endl;
  cout<<obj2.getY()<<endl;
  cout<<obj2.getZ()<<endl;



 }
