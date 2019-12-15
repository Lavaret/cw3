#include <iostream>
#include "pass.h"
using namespace std;

Pass::Pass() {
  cout << endl << "Pass default constructor" << endl;
  ID = IID++;
  _count++;
}

Pass::Pass(Passenger* passengers[]) {
  cout << endl << "Pass parameterized constructor" << endl;
  Passenger* _passengers = new Passenger[limit];
  for (int i = 0; i < limit; i++) {
    _passengers[i] = passengers[i];
  }
  ID = IID++;
  _count++;
}

Pass::Pass(const Pass &pass) {
    ID = IID++;
    _count++;
    _passengers = pass._passengers;
    cout << endl << "Pass copy constructor" << endl;
}

int Pass::getId() {
  return ID;
}

void Pass::setCount(int count) {
  _count = count;
}

int Pass::getCount() {
  return _count;
}

void Pass::setPassengers(Passenger* passengers[]) {
  Passenger* _passengers = new Passenger[limit];
  for (int i = 0; i < limit; i++) {
    _passengers[i] = passengers[i];
  }
}

Passenger Pass::getPassengers() {
  return _passengers;
}

int Pass::IID = 1;

int Pass::_count = 0;
