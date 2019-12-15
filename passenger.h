#include <iostream>
using namespace std;
#pragma once

class Passenger {
private:
  string _firstname, _lastname;
  double _cost;

public:
  Passenger();
  string getFirstname();
  void setFirstname(string firstname);
  string getLastname();
  void setLastname(string lastname);
  double getCost();
  void setCost(double cost);
};
