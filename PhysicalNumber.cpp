
#include <iostream>
#include <string.h>
#include <sstream>
#include "PhysicalNumber.h"
#include "Unit.h"

using namespace std;
using namespace ariel;

PhysicalNumber ariel::PhysicalNumber ::operator+(const PhysicalNumber &other)
{
    double result = this->data + other.data;
    return PhysicalNumber(result, this->num_unit);
}

// PhysicalNumber PhysicalNumber::operator-(PhysicalNumber &other)
// {
//     return other;
// }

// PhysicalNumber &PhysicalNumber::operator+=(const PhysicalNumber &other)
// {
//     return *this;
// }
// PhysicalNumber &PhysicalNumber::operator-=(const PhysicalNumber &other)
// {
//     return *this;
// }

// const PhysicalNumber PhysicalNumber::operator+()
// {
//     return PhysicalNumber(0, Unit::M);
// }
// const PhysicalNumber PhysicalNumber::operator-()
// {
//     return PhysicalNumber(0, Unit::M);
// }

// const bool PhysicalNumber::operator>(const PhysicalNumber &other)
// {
//     return false;
// }
// const bool PhysicalNumber::operator<(const PhysicalNumber &other)
// {
//     return false;
// }
// const bool PhysicalNumber::operator<=(const PhysicalNumber &other)
// {
//     return false;
// }
// const bool PhysicalNumber::operator>=(const PhysicalNumber &other)
// {
//     return false;
// }
// const bool PhysicalNumber::operator==(const PhysicalNumber &other)
// {
//     return false;
// }
// const bool PhysicalNumber::operator!=(const PhysicalNumber &other)
// {

//     return false;
// }

// PhysicalNumber &PhysicalNumber::operator++()
// {
//     return *this;
// }
// PhysicalNumber &PhysicalNumber::operator--()
// {
//     return *this;
// }

// ostream &ariel::operator<<(ostream &os, const PhysicalNumber &pn)
// {
//     return os;
// }

// istream &ariel::operator>>(istream &is, PhysicalNumber &pn)
// {
//     return is;
// }

// bool PhysicalNumber::unitCheck(PhysicalNumber first, PhysicalNumber second)
// {
//     if (first.num_unit == second.num_unit)
//         return true;
//     return false;
// }

// int PhysicalNumber::whichNum(Unit unit)      ////////////   NOT USEFULL FOR NOW, MAYBE I WILL USE IT LATER    ///////////////////
// {
//     int result = 0;
//     switch (this->num_unit)
//     {
//     case Unit::CM:
//         result = 1;
//         break;
//     case Unit::M:
//         result = 2;
//         break;
//     case Unit::KM:
//         result = 3;
//         break;
//     case Unit::SEC:
//         result = 4;
//         break;
//     case Unit::MIN:
//         result = 5;
//         break;
//     case Unit::HOUR:
//         result = 6;
//         break;
//     case Unit::G:
//         result = 7;
//         break;
//     case Unit::KG:
//         result = 8;
//         break;
//     case Unit::TON:
//         result = 9;
//         break;

//     default:
//         cout << "default case=0";
//         break;
//     }
//     return result;
// }

string PhysicalNumber::whichUnit()
{
    string result = "NO RESULT";
    switch (this->num_unit)
    {
    case 1:
        result = "CM";
        break;
    case 2:
        result = "M";
        break;
    case 3:
        result = "KM";
        break;
    case 4:
        result = "SEC";
        break;
    case 5:
        result = "MIN";
        break;
    case 6:
        result = "HOUR";
        break;
    case 7:
        result = "G";
        break;
    case 8:
        result = "KG";
        break;
    case 9:
        result = "TON";
        break;

    default:
        cout << "default case=0";
        break;
    }
    return result;
}

bool PhysicalNumber::sameFamily(const PhysicalNumber &other)
{
    if (this->num_unit == 1 || this->num_unit == 2 || this->num_unit == 3)
    {
        if (other.num_unit == 1 || other.num_unit == 2 || other.num_unit == 3)
            return true;
        return false;
    }

    else if (this->num_unit == 4 || this->num_unit == 5 || this->num_unit == 6)
    {
        if (other.num_unit == 4 || other.num_unit == 5 || other.num_unit == 6)
            return true;
        return false;
    }

    else if (this->num_unit == 7 || this->num_unit == 8 || this->num_unit == 9)
    {
        if (other.num_unit == 7 || other.num_unit == 8 || other.num_unit == 9)
            return true;
        return false;
    }
    return false;
}
