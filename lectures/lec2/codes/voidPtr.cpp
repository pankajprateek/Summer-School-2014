#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	float b = 3.14;
	char c = 'a';
	int array[20];	
	
	void* ptr;
	

	ptr = &a;
	cout<<"Value of int "<<*(int*)ptr<<"\n";
	cout<<"Value of int "<<*ptr<<"\n";
	
	ptr = &b;
	cout<<"Value of float "<<*(float*)ptr<<"\n";
	//cout<<"Value of float "<<*ptr<<"\n";
	
	ptr = &c;
	cout<<"Value of char "<<*(char*)ptr<<"\n";
	//cout<<"Value of char "<<*ptr<<"\n";
	
	if(a>20)
		ptr = &a;
	else
		ptr = &b;
	
	ptr = array;
	cout<<"Value of array address "<<(int*)ptr<<"\n";
	//cout<<"Value of array address "<<*ptr<<"\n";
	return 0;
}
