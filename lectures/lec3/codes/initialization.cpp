#include<iostream>
#include <string>
using namespace std;

class Person {
public:
  std::string m_strName;
  int m_nAge;
  bool m_bIsMale;
 
  std::string GetName() { return m_strName; }
  int GetAge() { return m_nAge; }
  bool IsMale() { return m_bIsMale; }
 
  Person(std::string strName = "", int nAge = 0, bool bIsMale = false)
    : m_strName(strName), m_nAge(nAge), m_bIsMale(bIsMale) {}
};

// BaseballPlayer publicly inheriting Person
class BaseballPlayer : public Person {
public:
  double m_dBattingAverage;
  int m_nHomeRuns;
 
  BaseballPlayer(std::string strName = "", int nAge = 0, bool bIsMale = false,
		 double dBattingAverage = 0.0, int nHomeRuns = 0)
    : Person(strName, nAge, bIsMale), // call Person(std::string, int, bool) to initialize these fields
      m_dBattingAverage(dBattingAverage), m_nHomeRuns(nHomeRuns) {}
};

int main() {
  BaseballPlayer cPlayer("Pedro Cerrano", 32, true, 0.342, 42);
 
  cout << cPlayer.m_strName << endl;
  cout << cPlayer.m_nAge << endl;
  cout << cPlayer.m_nHomeRuns << endl;
 
  return 0;
}
