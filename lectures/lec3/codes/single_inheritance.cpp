#include<iostream>
#include<string>
using namespace std;

class pen {
private:
  int words;
public:
  int temp;
  pen() {
    temp = 0;
  }
  void setWords(int w) {
    words = w;
  }
  int getWords() {
    return words;
  }
};

class colPen: public pen {
private:
  string color;
public:
  void WriteWord(string str) {
    if(temp < getWords()) {
    // if(temp < words) {
      cout<<"Word "<<str<<" written in color "<<color<<endl;
      temp++;
    } else {
      cout<<"Word Limit exceeded"<<endl;
    }
  }
  void setColor(string col) {
    color = col;
    cout<<"Color set to "<<color<<endl;
  }
};

int main() {
  colPen ColorPen;
  ColorPen.setWords(3);

  ColorPen.setColor("blue");  
  ColorPen.WriteWord("Hello");
  ColorPen.WriteWord("Harry");

  ColorPen.setColor("red");
  ColorPen.WriteWord("Avada");
  ColorPen.WriteWord("Kedavra");
}
