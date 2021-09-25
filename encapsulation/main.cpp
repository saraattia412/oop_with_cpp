#include <iostream>

using namespace std;

class Employee {
  private:

    int salary;

  public:

    void setSalary(int s) {
      salary = s;
    }

    int getSalary() {
      return salary;
    }
};

int main() {
  Employee empl_1;
  empl_1.setSalary(2500);
  cout<<"salary = " << empl_1.getSalary()<<endl;
  return 0;
}
