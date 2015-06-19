#include <iostream>
using namespace std;

struct train
{
  int number;
  int journeyHrs;
  int berths;
	
  void displayInfo()
  {
    cout<<"Train no. "<<number<<endl;
    cout<<"Reservations available : "<<berths<<endl<<endl<<endl;
  }
	
	
  bool reserveSeat()
  {
    if(berths>0)
      {
	cout<<"Reservation Successful. Berth number : "<<berths<<endl<<endl<<endl;
	berths --;
	return true;
      }
    else
      {
	cout<<"Train full. Sorry for the inconvenience"<<endl<<endl<<endl;
	return false;
      }
  }
};

int main()
{
  struct train Rajdhani;
  Rajdhani.number = 21001;
  Rajdhani.journeyHrs = 15;
  Rajdhani.berths = 1;
	
  Rajdhani.displayInfo();
  Rajdhani.reserveSeat();
  Rajdhani.displayInfo();
  Rajdhani.reserveSeat();

  Rajdhani.number = 12000;
  return 0;
}
