#include <iostream>
using namespace std;

class person
{
	private :
		char firstName[20];
		char lastName[20];
		int idNo;
		int age;
	public :
		char currLoc[20];
		bool married;
		void displayInfo();
		void assignDetails();
};

void person::assignDetails()
{
	cout<<"Enter first name : \n";
	cin>>firstName;
	cout<<"Enter last name : \n";
	cin>>lastName;
	cout<<"Enter id number : \n";
	cin>>idNo;
	cout<<"Age : \n";
	cin>>age;
	cout<<"Is this person married? (1/0) \n";
	cin>>married;
	cout<<"Enter the current location :\n";
	cin>>currLoc;
	cout<<endl<<endl;
}

void person::displayInfo()
{
	cout<<"Name : "<<firstName<<" "<<lastName<<endl;
	cout<<"Age : "<<age<<"   ";
	
	if(married)
	cout<<"Married."<<endl;
	else
	cout<<"Unmarried."<<endl;
	cout<<"ID No : "<<idNo<<"\nCurrent Location : "<<currLoc<<endl<<endl<<endl;
}

int main()
{
	person Teacher, Student;
	
	Teacher.assignDetails();
	Student.assignDetails();
	
	
	Teacher.displayInfo();
	Student.displayInfo();
	
	Student.age = 25;
	Student.displayInfo();
	
	return 0;
}
