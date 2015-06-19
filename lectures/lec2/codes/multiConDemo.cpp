#include <iostream>
#include <string>
using namespace std;

class dog
{
  string name;
  string breed;
  int licence;
	
public:
  dog(){};
  dog(string title, string type, int lic);
  dog(string type, int lic);
  dog(int lic);
  void showDetails();
};

dog::dog(string title, string type, int lic)
{
  name = title;
  breed = type;
  licence = lic;
  cout<<"Constructor 1"<<endl;
}

dog::dog(string type, int lic)
{
  name = "Tommy";
  breed = type;
  licence = lic;
  cout<<"Constructor 2"<<endl;
}

dog::dog(int lic)
{
  name = "Tommy";
  breed = "Stray Dog";
  licence = lic;
  cout<<"Constructor 3"<<endl;
}

void dog::showDetails()
{
  cout<<"=====================\n";
  cout<<"Name :"<<name<<endl;
  cout<<"Breed : "<<breed<<endl;
  cout<<"Licence No : "<<licence<<endl;
  cout<<"=====================\n\n\n";
}
int main()
{
  dog strayDog(123);
  dog killer("Killer","Greyhound",124);
  dog puppy("Pug",125);
	
  strayDog.showDetails();
  killer.showDetails();
  puppy.showDetails();
  return 0;
}
