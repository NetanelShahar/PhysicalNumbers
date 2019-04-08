
#include <iostream>
#include <string.h>
#include <sstream>
#include "PhysicalNumber.h"
#include "Unit.h"

using namespace std;
using namespace ariel;

PhysicalNumber::PhysicalNumber(double data, Unit unit)
{
    data = data;
    unit = unit;
}

PhysicalNumber PhysicalNumber::operator+(PhysicalNumber& other)
{
    return other;
}

PhysicalNumber PhysicalNumber::operator-(PhysicalNumber& other)
{
        return other;
}

PhysicalNumber& PhysicalNumber::operator+=(const PhysicalNumber& other)
{
return *this;
}
PhysicalNumber& PhysicalNumber::operator-=(const PhysicalNumber& other)
{
    return *this;
}

const PhysicalNumber PhysicalNumber::operator+()
{
     return PhysicalNumber(0, Unit::M);
}
const PhysicalNumber PhysicalNumber::operator-()
{
     return PhysicalNumber(0, Unit::M);
}

const bool PhysicalNumber::operator>(const PhysicalNumber &other)
{
    return false;
}
const bool PhysicalNumber::operator<(const PhysicalNumber &other)
{
    return false;
}
const bool PhysicalNumber::operator<=(const PhysicalNumber &other)
{
    return false;
}
const bool PhysicalNumber::operator>=(const PhysicalNumber &other)
{
    return false;
}
const bool PhysicalNumber::operator==(const PhysicalNumber &other)
{
    return false;
}
const bool PhysicalNumber::operator!=(const PhysicalNumber &other)
{

    return false;
}

PhysicalNumber& PhysicalNumber::operator++()
{
    return *this;
}
PhysicalNumber& PhysicalNumber::operator--()
{
    return *this;
}

ostream &ariel::operator<<(ostream &os, const PhysicalNumber &pn)
{
    return os;
}

istream &ariel::operator>>(istream &is, PhysicalNumber &pn)
{
    return is;
}

