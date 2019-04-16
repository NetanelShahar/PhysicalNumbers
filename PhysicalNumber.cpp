
#include <iostream>
#include <string.h>
#include <sstream>
#include "PhysicalNumber.h"
#include "Unit.h"

using namespace std;
using namespace ariel;

const string name[9] = {"cm", "m", "km", "sec", "min", "hour", "g", "kg", "ton"};

PhysicalNumber ariel::PhysicalNumber ::operator+(const PhysicalNumber &other)
{
    if (!this->sameFamily(other))
        throw string("this tree does alredy contains ");

    PhysicalNumber temp(other.data, other.num_unit);
    PhysicalNumber *Ptemp = &temp;

    makeITsimple(*this);
    makeITsimple(*Ptemp);

    double result = this->data + temp.data;

    PhysicalNumber new_number(result, this->num_unit);
    PhysicalNumber *pnew_number = &new_number;

    letsGOback(*pnew_number);
    letsGOback(*this);

    return new_number;
}

PhysicalNumber PhysicalNumber::operator-(const PhysicalNumber &other)
{
    if (!this->sameFamily(other))
        throw string("this tree does alredy contains ");

    PhysicalNumber temp(other.data, other.num_unit);
    PhysicalNumber *Ptemp = &temp;

    makeITsimple(*this);
    makeITsimple(*Ptemp);

    double result = this->data - temp.data;

    PhysicalNumber new_number(result, this->num_unit);
    PhysicalNumber *pnew_number = &new_number;

    letsGOback(*pnew_number);
    letsGOback(*this);

    return new_number;
}

PhysicalNumber &PhysicalNumber::operator+=(const PhysicalNumber &other)
{
    if (!this->sameFamily(other))
        throw string("this tree does alredy contains ");

    PhysicalNumber temp(other.data, other.num_unit);
    PhysicalNumber *Ptemp = &temp;

    makeITsimple(*this);
    makeITsimple(*Ptemp);

    this->data += Ptemp->data;

    letsGOback(*this);
    return *this;
}
PhysicalNumber &PhysicalNumber::operator-=(const PhysicalNumber &other)
{
    if (!this->sameFamily(other))
        throw string("this tree does alredy contains ");

    PhysicalNumber temp(other.data, other.num_unit);
    PhysicalNumber *Ptemp = &temp;

    makeITsimple(*this);
    makeITsimple(*Ptemp);

    this->data -= Ptemp->data;

    letsGOback(*this);
    return *this;
}

const PhysicalNumber PhysicalNumber::operator+() //////////////////      CHECK ABOUT THE UNARY!!!!!       //////////
{
    return PhysicalNumber(this->data, this->num_unit); ///////////////////////////////////////////////////////////////////
}
const PhysicalNumber PhysicalNumber::operator-() ///////////////////////////////////////////////////////////////////
{
    return PhysicalNumber(-1 * this->data, this->num_unit); //////////////////      CHECK ABOUT THE UNARY!!!!!       //////////
}

const bool PhysicalNumber::operator>(const PhysicalNumber &other)
{
    if (!this->sameFamily(other))
        throw string("this tree does alredy contains ");

    PhysicalNumber temp(other.data, other.num_unit);
    PhysicalNumber *Ptemp = &temp;

    makeITsimple(*this);
    makeITsimple(*Ptemp);

    bool ans = this->data > Ptemp->data;

    letsGOback(*this);

    return ans;
}
const bool PhysicalNumber::operator<(const PhysicalNumber &other)
{
    if (!this->sameFamily(other))
        throw string("this tree does alredy contains ");

    PhysicalNumber temp(other.data, other.num_unit);
    PhysicalNumber *Ptemp = &temp;

    makeITsimple(*this);
    makeITsimple(*Ptemp);

    bool ans = this->data < Ptemp->data;

    letsGOback(*this);

    return ans;
}
const bool PhysicalNumber::operator<=(const PhysicalNumber &other)
{
    if (!this->sameFamily(other))
        throw string("this tree does alredy contains ");

    PhysicalNumber temp(other.data, other.num_unit);
    PhysicalNumber *Ptemp = &temp;

    makeITsimple(*this);
    makeITsimple(*Ptemp);

    bool ans = this->data <= Ptemp->data;

    letsGOback(*this);

    return ans;
}
const bool PhysicalNumber::operator>=(const PhysicalNumber &other)
{
    if (!this->sameFamily(other))
        throw string("this tree does alredy contains ");

    PhysicalNumber temp(other.data, other.num_unit);
    PhysicalNumber *Ptemp = &temp;

    makeITsimple(*this);
    makeITsimple(*Ptemp);

    bool ans = this->data >= Ptemp->data;

    letsGOback(*this);

    return ans;
}
const bool PhysicalNumber::operator==(const PhysicalNumber &other)
{
    if (!this->sameFamily(other))
        throw string("this tree does alredy contains ");

    PhysicalNumber temp(other.data, other.num_unit);
    PhysicalNumber *Ptemp = &temp;

    makeITsimple(*this);
    makeITsimple(*Ptemp);
    
    cout << this->data << " " << Ptemp->data << endl;
    if (this->data == Ptemp->data)
    {
        letsGOback(*this);
        return true;
    }

    letsGOback(*this);
    return false;

  
}
const bool PhysicalNumber::operator!=(const PhysicalNumber &other)
{
    if (!this->sameFamily(other))
        throw string("this tree does alredy contains ");

    PhysicalNumber temp(other.data, other.num_unit);
    PhysicalNumber *Ptemp = &temp;

    makeITsimple(*this);
    makeITsimple(*Ptemp);

    bool ans = (this->data > Ptemp->data) || (this->data < Ptemp->data);

    letsGOback(*this);

    return ans;
}

PhysicalNumber &PhysicalNumber::operator++()
{
    this->data += 1;
    return *this;
}
PhysicalNumber &PhysicalNumber::operator--()
{
    this->data -= 1;
    return *this;
}

ostream &ariel::operator<<(ostream &os, const PhysicalNumber &pn)
{
    string type = "NO type";
    switch (pn.num_unit)
    {
    case 1:
        type = "cm";
        break;
    case 2:
        type = "m";
        break;
    case 3:
        type = "km";
        break;
    case 4:
        type = "sec";
        break;
    case 5:
        type = "min";
        break;
    case 6:
        type = "hour";
        break;
    case 7:
        type = "g";
        break;
    case 8:
        type = "kg";
        break;
    case 9:
        type = "ton";
        break;

    default:
        cout << "default case=0";
        break;
    }

    return (os << pn.data << '[' << type << ']');
}
////////////////////////////////////////////////////             REWRITE!!!!!!!!!!            /////////////////////////////////////
bool is_number(const std::string &s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it))
        ++it;
    return !s.empty() && it == s.end();
}

istream &ariel::operator>>(istream &is, PhysicalNumber &pn)
{
    string str;
    is >> str;
    string number = str.substr(0, str.find('['));
    if (str.find(']') == 0 || str.find('[') == 0 || str.find('[') == string::npos || str.find(']') == string::npos || str.find('[') > str.find(']') || str.find('[') + 1 == str.find(']'))
        return is;

    string input = str.substr(str.find('[') + 1, str.find(']') - str.find('[') - 1);

    if (input.compare("cm") == 0)
        pn.num_unit = Unit::CM;
    else if (input.compare("m") == 0)
        pn.num_unit = Unit::M;
    else if (input.compare("km") == 0)
        pn.num_unit = Unit::KM;
    else if (input.compare("sec") == 0)
        pn.num_unit = Unit::SEC;
    else if (input.compare("min") == 0)
        pn.num_unit = Unit::MIN;
    else if (input.compare("hour") == 0)
        pn.num_unit = Unit::HOUR;
    else if (input.compare("g") == 0)
        pn.num_unit = Unit::G;
    else if (input.compare("kg") == 0)
        pn.num_unit = Unit::KG;
    else if (input.compare("ton") == 0)
        pn.num_unit = Unit::TON;
    else
        return is;

    if (stod(number) >= 0)
        pn.data = (stod(number));
    else
        return is;

    return is;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

void PhysicalNumber::makeITsimple(PhysicalNumber &num)
{
    switch (num.num_unit)
    {
    case 1:
        num.data = num.data; //cm
        break;
    case 2:
        num.data = num.data * 100; //m
        break;
    case 3:
        num.data = num.data * 1000 * 100; //km
        break;
    case 4:
        num.data = num.data; //sec
        break;
    case 5:
        num.data = num.data * 60; //min
        break;
    case 6:
        num.data = num.data * 60 * 60; //hour
        break;
    case 7:
        num.data = num.data; //g
        break;
    case 8:
        num.data = num.data * 1000; //kg
        break;
    case 9:
        num.data = num.data * 1000 * 1000; //ton
        break;

    default:
        cout << "default case=0";
        break;
    }
}

void PhysicalNumber::letsGOback(PhysicalNumber &num)
{
    switch (num.num_unit)
    {
    case 1:
        num.data = num.data; //cm
        break;
    case 2:
        num.data = num.data / 100; //m
        break;
    case 3:
        num.data = num.data / 1000 / 100; //km
        break;
    case 4:
        num.data = num.data; //sec
        break;
    case 5:
        num.data = num.data / 60; //min
        break;
    case 6:
        num.data = num.data / 60 / 60; //hour
        break;
    case 7:
        num.data = num.data; //g
        break;
    case 8:
        num.data = num.data / 1000; //kg
        break;
    case 9:
        num.data = num.data / 1000 / 1000; //ton
        break;

    default:
        cout << "default case=0";
        break;
    }
}
