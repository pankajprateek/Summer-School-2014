#include <iostream>
using namespace std;

class train
{
private :
  int trainNo;
  int journeyHours;
  int berths;

  int * array;
public :
  train() { cout<<"Default constructor call\n";}
  train(train& c); // copy constructor
  train(int num, int hrs, int b); // normal constructor
		
  void printAddress(); // printing some values

  //train(train c);
  //train(void) { cout<<"void constructor called; different from the default constructor\n";}
		
  void longer(train& c);
  void moreBoring(train d);
};


//Creating a new train
train::train(int num, int hrs, int b)
{
  trainNo = num;
  journeyHours = hrs;
  berths = b;
	
  array = new int[berths];
  array[0] = 100;
  cout<<"Normal constructor call\n";
}

//copying the structure of an already existing train
train::train(train& c)
{
  trainNo = c.trainNo;
  journeyHours = c.journeyHours;
  berths = c.berths;
  array = new int[berths];
  cout<<"Copy Constructor call.\n";
}


//printing address of the array and first value in it
void train::printAddress()
{
  cout<<"Address of beginning of the array is : "<<array<<"\n";
  cout<<"Printing the first value in the array : "<<array[0]<<"\n";
}

//checking which is the longer train
//proof that public, private keywords work only at the class level
void train::longer(train& c)
{
  if(c.berths > berths)
    cout<<"This train is not the longer one\n";
  else
    cout<<"This train is the longer train\n";
}


//not passing the object as a reference
//Here a "copy" of the object will be passed. The proof is copy constructor call.
void train::moreBoring(train d)
{
  if(d.journeyHours > journeyHours)
    cout<<"This train is less boring\n";
  else
    cout<<"The other train is more boring\n";
}

int main()
{
	
  cout<<"Creating train 1\n";
  train t1(12001, 15, 10);
  cout<<"\n\n";
	
  cout<<"Creating train 2\n";
  train t2(t1);
  cout<<"\n\n";

  cout<<"Creating train 3\n";
  train t3 = t1;
  cout<<"\n\n";

  cout<<"Creating train 4\n";
  train t4;
  t4 = t1;
  cout<<"\n\n";

  cout<<"Printing train 1\n";
  t1.printAddress();
  cout<<"\n\n";
	
  cout<<"Printing train 2\n";
  t2.printAddress();
  cout<<"\n\n";
	
  cout<<"Printing train 3\n";
  t3.printAddress();
  cout<<"\n\n";

  cout<<"Printing train 4\n";
  t4.printAddress();
  cout<<"\n\n";

  train t5(12003,100,100);
  cout<<"Call to longer\n";
  t5.longer(t1);
  cout<<"Call to moreBoring\n";
  t5.moreBoring(t1);
	
  return 0;
}
