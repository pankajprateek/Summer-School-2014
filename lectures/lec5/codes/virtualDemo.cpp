#include <iostream>
using namespace std;

class grandParent
{
public :
  int var1;
};

class parent1 : /*virtual*/ public grandParent
{
public :
  int var2;
};

class parent2 : /*virtual*/ public grandParent
{
public :
  int var3;
};

class child : public parent1, public parent2
{
public :
  int var4;
};

int main()
{
  child temp1;
  cout<<sizeof(temp1)<<" is the size of temp1, but size of int is "<< sizeof(int)<<endl;
  cout<<"Clearly, there are "<<sizeof(temp1)/sizeof(int)<<" integers in temp1"<<endl; 
  temp1.var1 = 10;
  cout<<temp1.var1<<" is the value of var1"<<endl;
  return 0;
}
