#include <iostream>
#include "passenger.h"
#include "pass.h"

using namespace std;

int main ()
{
  Passenger passenger1;
  Passenger passengers[10];
  Pass pass1;
  Pass pass2 = {passengers};
  Pass pass3 = pass2;

  cout << "ID: " << pass1.getId() << endl << "Licznik: " << pass1.getCount() << endl;
  cout << "ID: " << pass2.getId() << endl << "Licznik: " << pass2.getCount() << endl;
  cout << "ID: " << pass3.getId() << endl << "Licznik: " << pass3.getCount() << endl;

  //create array with passengers
  Passenger pass1Arr[4];
  pass1Arr[1] = passenger1;
  pass1.setPassengers(pass1Arr);

  Passenger pass2passengers[] = pass2.getPassengers();
  cout << pass2passengers[0] << endl;

  // for(int i = 0; i < 4; i++) {
  //   // pass2passengers[i].setCost(10.);
  //   // cout << pass2passengers[i].getCost() << endl;
  //   cout << pass2passengers[i] << endl;
  // }


}
