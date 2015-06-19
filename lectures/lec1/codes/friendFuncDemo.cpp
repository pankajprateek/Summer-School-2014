z#include <iostream>
using namespace std;

class temp
{
private :
  int x,y,z;
public :
  void setVal(int i, int j, int k)
  {	x = i; y = j; z = k; }
};

class example
{
private :
  int a,b,c;
public :
  friend class Y;
  void setVal(int i, int j, int k)
  {	a = i; b = j; c = k; }
  friend void sum(example e, temp t);
};

void sum(example e, temp t)
{
  cout<<"Sum is : "<< e.a + e.b + e.c<<endl ;
  cout<<"Sum is : "<< t.x + t.y + t.z<<endl;
}

int main()
{
  example eg1;
  temp te1;
	
  eg1.setVal(1,2,3);
  te1.setVal(10,20,30);
	
  sum(eg1, te1);
  return 0;
}
