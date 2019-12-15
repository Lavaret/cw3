#include <iostream>
#include "passenger.h"
using namespace std;
#pragma once

class Pass
{
private:
  int ID;
  Passenger* _passengers[];
public:
  const int limit = 4;
  static int IID;
  static int _count;
  Pass();
  Pass(Passenger* passenger[]);
  Pass(const Pass &pass);
  int getId();
  Passenger* getPassengers();
  void setPassengers(Passenger* passengers[]);
  int getCount();
  void setCount(int count);
};
