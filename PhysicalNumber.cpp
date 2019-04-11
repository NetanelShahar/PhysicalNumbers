
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

    bool ans = this->data == Ptemp->data;

    letsGOback(*this);

    return ans;
}
const bool PhysicalNumber::operator!=(const PhysicalNumber &other)
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
    string num, s, type;
    bool flag = false;
    is >> s;
    num = s.substr(0, s.find("["));
    if (is_number(num))
    {
        printf("iiii");
        flag = true;
        pn.data = stod(num);
    }

    type = s.substr(s.find("[") + 1, s.length() - s.find("[") - 2);
    for (size_t i = 0; i < 9; i++)
    {
        if (name[i] == type)
        {
            pn.data = (Unit)i;
            flag = true;
        }
    }

    if (flag == false)
    {
        __throw_invalid_argument("syntaxt not good");
    }
    return is;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

void PhysicalNumber::makeITsimple(PhysicalNumber &num)
{
    // cout << "in makeITsimple" << endl;

    // int result=0;
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
        // cout << num.data << endl;
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
    // cout << "out makeITsimple" << endl;

    //return result;
}

void PhysicalNumber::letsGOback(PhysicalNumber &num)
{
    // cout << "in letsGOback" << endl;

    // int result=0;
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
    //return result;
    // cout << "out letsGOback" << endl;
}
