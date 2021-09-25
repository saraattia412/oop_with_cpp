#include <iostream>
#include<string>
using namespace std;

class date {
private:
  string  date_ ="20-5-2019";
  public:
    string get_date()
    {
    return date_;
    }
};


class time: public date {
private:
    string time_ ="11:41:5";
  public:
    string get_time(){
    return time_;
    }
};

int main() {

  time t;
   cout<<"  time: "<<t.get_time()<<"\n date: "<<t.get_date()<<endl;
    return 0;
}
