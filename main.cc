
#include <iostream>
#include "Blah.hh"
#include "foo.hh"
#include "bar.hh"

using namespace std;

enum class EmployeeType : uint8_t {ENGINEER, SALESMAN, MANAGER};

class Employee
{
public:
  Employee(EmployeeType t) :m_EmployeeType(t){}

  int getPayAmount() {
    int ret;
    switch (m_EmployeeType) {
    case EmployeeType::ENGINEER: {
      ret = m_Salary;
      break;
    }
    case EmployeeType::SALESMAN: {
      ret = m_Salary + m_Commission;
      break;
    }
    case EmployeeType::MANAGER: {
      ret = m_Salary + m_Bonus;
      break;
    }
    default: {
      // default
      break;
    }
    }
    return ret;
  }

private:
  EmployeeType m_EmployeeType;
  int m_Salary;
  int m_Commission;
  int m_Bonus;
};

class Engineer : Employee
{
public:
  Engineer();
  virtual ~Engineer();
};

//class EmployeeType
//{
//public:
//  EmployeeType();
//  virtual ~EmployeeType();
//};



int main(int argc, char *argv[])
{
  cout << "환경시제" << endl;

  Blah().boo();
  Blah().boo();
  CFoo().foo();
  CBar().bar();

  Employee *pEng = new Employee(EmployeeType::ENGINEER);
  cout << "ENGINEER: "<< pEng->getPayAmount() << endl;

  Employee *pMan = new Employee(EmployeeType::MANAGER);
  cout << "MANAGER: "<< pMan->getPayAmount() << endl;

  delete pEng;
  delete pMan;

  
return 0;
}
