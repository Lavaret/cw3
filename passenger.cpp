#include <iostream>
#include "passenger.h"
using namespace std;

Passenger::Passenger() {
 //
}

string Passenger::getFirstname() {
    return _firstname;
}

void Passenger::setFirstname(string firstname) {
    _firstname = firstname;
}

string Passenger::getLastname() {
    return _lastname;
}

void Passenger::setLastname(string lastname) {
    _lastname = lastname;
}

double Passenger::getCost() {
  return _cost;
}

void Passenger::setCost(double cost) {
  _cost = cost;
}
