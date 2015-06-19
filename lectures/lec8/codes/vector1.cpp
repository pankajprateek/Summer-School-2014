// constructing vectors
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int> first;                                // empty vector of ints
  vector<int> second (4,100);                       // four ints with value 100
  vector<int> third (second.begin(),second.end());  // iterating through second
  vector<int> fourth (third);                       // a copy of third

  // the iterator constructor can also be used to construct from arrays:
  int myints[] = {16,2,77,29};
  vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

  /*
  //Inserting an element into the vector in the beginning
  it = first.begin();
  it = first.insert ( it , 200 );
  
  //Inserting copies of an element
  it = second.end();
  it = second.insert(it,5,159);
  
  // erase the 3rd element
  it = third.begin() + 2;
  third.erase (it);

  // erase the first 3 elements:
  fourth.erase (fourth.begin(),fourth.begin()+3);

  */
  
  vector<int>::iterator it;
  cout << "The contents of first are:";
  for (it = first.begin(); it != first.end(); ++it)
    cout << ' ' << *it;
  cout << "\n\n\n";
  
    cout << "The contents of second are:";
  for (it = second.begin(); it != second.end(); ++it)
    cout << ' ' << *it;
  cout << "\n\n\n";
  
  cout << "The contents of third are:";
  for (it = third.begin(); it != third.end(); ++it)
    cout << ' ' << *it;
  cout << "\n\n\n";
  
  cout << "The contents of fourth are:";
  for (it = fourth.begin(); it != fourth.end(); ++it)
    cout << ' ' << *it;
  cout << "\n\n\n";
  
  cout << "The contents of fifth are:";
  for (it = fifth.begin(); it != fifth.end(); ++it)
    cout << ' ' << *it;
  cout << "\n\n\n";

  return 0;
}
