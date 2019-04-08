#include <iostream>
#include "Unit.h"
using namespace std;

namespace ariel
{

class PhysicalNumber
{
  private:
    Unit unit;
    double data;

  public:
    //
    //constructor
    PhysicalNumber(double data, Unit unit);
    //
    // (+) and (-) operators
    PhysicalNumber operator+(PhysicalNumber& other);
    PhysicalNumber operator-(PhysicalNumber& other);
    //
    //(+=) and (-=) operators
    PhysicalNumber& operator+=(const PhysicalNumber& other);
    PhysicalNumber& operator-=(const PhysicalNumber& other);
    //
    // onary (+) and (-) operators
    const PhysicalNumber operator+();
    const PhysicalNumber operator-();
    //
    const bool operator>(const PhysicalNumber& other);
    const bool operator<(const PhysicalNumber& other);
    const bool operator<=(const PhysicalNumber& other);
    const bool operator>=(const PhysicalNumber& other);
    const bool operator==(const PhysicalNumber& other);
    const bool operator!=(const PhysicalNumber& other);

    PhysicalNumber& operator++();
    PhysicalNumber& operator--();

    friend ostream& operator<<(ostream& os, const PhysicalNumber& c);
    friend istream& operator>>(istream& is, PhysicalNumber& c);
};
} // namespace ariel