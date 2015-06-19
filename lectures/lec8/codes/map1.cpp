#include <iostream>
#include <map>
#include <string>
using namespace std;
int main ()
{
  map<char,string> mymap;

  mymap['a']="an element";
  mymap['b']="another element";
  mymap['c']=mymap['b'];

  cout << "mymap['a'] is " << mymap['a'] << '\n';
  cout << "mymap['b'] is " << mymap['b'] << '\n';
  cout << "mymap['c'] is " << mymap['c'] << '\n';
  cout << "mymap['d'] is " << mymap['d'] << '\n';

  cout << "mymap now contains " << mymap.size() << " elements.\n";

  return 0;
}
