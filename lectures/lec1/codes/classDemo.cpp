#include <iostream>
using namespace std;

class person
{
	private :
		char firstName[20];
		char lastName[20];
		int idNo;
		int n_age;
	public :
		char currLoc[20];
		bool married;
		void displayInfo();
  void setAge(int n) {
    n_age = n;
  }
  void prAge(void) {
    cout<<n_age<<endl;
  }
};

int main() {
  person p1;
  p1.setAge(20);
  p1.prAge();
}
