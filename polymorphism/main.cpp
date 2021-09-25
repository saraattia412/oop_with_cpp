#include <iostream>

using namespace std;

class Animal {
  public:
    void animal_Sound() {
    cout << "The animal makes a sound \n" ;
  }
};


class Pig : public Animal {
  public:
    void animal_Sound() {
    cout << "The pig says: wee wee \n" ;
   }
};


class Dog : public Animal {
  public:
    void animal_Sound() {
    cout << "The dog says: bow wow \n" ;
  }
};

int main() {
  Animal a1;
  Pig Pig_;
  Dog dog_;

  a1.animal_Sound();
  Pig_.animal_Sound();
  dog_.animal_Sound();
  return 0;
}
