#include <iostream>
#include <iomanip>
using namespace std;

class item
{
private:
  int num;
  float price;
  int batchNo;
public :
  item(int itemNo, float cost, int batch);
  item() { };
  void displayItem();
};

item::item(int itemNo, float cost, int batch)
{
  num = itemNo;
  price = cost;
  batchNo = batch;
}

void item::displayItem()
{
  cout<<"=====================\n";
  cout<<"Item no :"<<num<<endl;
  cout<<"Cost : Rs. "<<fixed<<showpoint<<setprecision(2)<<price<<"/- only"<<endl;
  cout<<"Batch No : "<<batchNo<<endl;
  cout<<"=====================\n\n\n";
}
int main()
{
  item pen(123, 10.50, 555), pencil(124, 5.00, 444);
  item GalaxyS4(999, 39999.99, 7);
	
  item i1,i2;
  GalaxyS4.displayItem();
  pen.displayItem();
  pencil.displayItem();
  return 0;
}
