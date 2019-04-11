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
 long double data;
 
  //constructor
  PhysicalNumber(double data, Unit unit_type)
  {
    this->num_unit = unit_type;
    this->data = data;
  }

  ~PhysicalNumber() {}

  // (+) and (-) operators
  PhysicalNumber operator+(const PhysicalNumber &other);
  PhysicalNumber operator-(const PhysicalNumber &other);

  // (+=) and (-=) operators
  PhysicalNumber &operator+=(const PhysicalNumber &other);
  PhysicalNumber &operator-=(const PhysicalNumber &other);

  // onary (+) and (-) operators
  const PhysicalNumber operator+();
  const PhysicalNumber operator-();

  const bool operator>(const PhysicalNumber &other);
  const bool operator<(const PhysicalNumber &other);
  const bool operator<=(const PhysicalNumber &other);
  const bool operator>=(const PhysicalNumber &other);
  const bool operator==(const PhysicalNumber &other);
  const bool operator!=(const PhysicalNumber &other);

  PhysicalNumber &operator++();
  PhysicalNumber &operator--();

  friend ostream &operator<<(ostream &os, const PhysicalNumber &c);
  friend istream &operator>>(istream &is, PhysicalNumber &c);

  string whichUnit();
  bool sameFamily(const PhysicalNumber &other);
  void makeITsimple(PhysicalNumber &num);
  void letsGOback(PhysicalNumber &num);
};
ostream &operator<<(ostream &os, const PhysicalNumber &c);
istream &operator>>(istream &is, PhysicalNumber &c);

} // namespace ariel