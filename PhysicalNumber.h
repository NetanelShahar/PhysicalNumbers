#include <iostream>
#include "Unit.h"
using namespace std;

namespace ariel
{

class PhysicalNumber
{
private:
public:
  Unit num_unit;
  double data;

  //
  //constructor
  PhysicalNumber(double data, Unit unit_type)
  {
    this->num_unit = unit_type;
    this->data = data;
  }

  ~PhysicalNumber() {}

  // PhysicalNumber(double data, Unit unit);    ///// I THINK TO REMOVE IT!!!   /////////
  // //
  // (+) and (-) operators
  PhysicalNumber operator+(const PhysicalNumber &other);
  PhysicalNumber operator-(PhysicalNumber &other);
  // //
  // //(+=) and (-=) operators
  PhysicalNumber &operator+=(const PhysicalNumber &other);
  PhysicalNumber &operator-=(const PhysicalNumber &other);
  // //
  // // onary (+) and (-) operators
  const PhysicalNumber operator+();
  const PhysicalNumber operator-();
  // //
  const bool operator>(const PhysicalNumber &other);
  // const bool operator<(const PhysicalNumber &other);
  // const bool operator<=(const PhysicalNumber &other);
  // const bool operator>=(const PhysicalNumber &other);
  // const bool operator==(const PhysicalNumber &other);
  // const bool operator!=(const PhysicalNumber &other);

  PhysicalNumber &operator++();
  PhysicalNumber &operator--();

  // friend ostream &operator<<(ostream &os, const PhysicalNumber &c);
  // friend istream &operator>>(istream &is, PhysicalNumber &c);

  // ///////////////////////////////////////////////////////////
  // bool unitCheck(PhysicalNumber first, PhysicalNumber second);
  // int whichNum();     ////  MAYBE I WILL USE IT LATER    ////
  string whichUnit();
  bool sameFamily(const PhysicalNumber &other);
};
// ostream &operator<<(ostream &os, const PhysicalNumber &c);
// istream &operator>>(istream &is, PhysicalNumber &c);

} // namespace ariel