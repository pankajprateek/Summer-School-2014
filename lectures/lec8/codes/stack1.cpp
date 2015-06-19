#include <iostream>
#include <stack>
using namespace std;

int main ()
{
  stack<int> mystack;

  for (int i=0; i<5; ++i) mystack.push(i);

  cout << "Popping out elements...";
  while (!mystack.empty())
  {
     cout << " " << mystack.top();
     mystack.pop();
  }
  cout << endl;

  return 0;
}
