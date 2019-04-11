/**
 * Examples of automatic tests for the exercise on physical numbers.
 *
 * @author Erel Segal-Halevi
 * @since 2019-02
 */

#include <iostream>
#include <sstream>
using std::cout, std::endl, std::istringstream;
#include "PhysicalNumber.h"
using ariel::PhysicalNumber, ariel::Unit;
#include "badkan.hpp"

int main()
{
  // badkan::TestCase testcase;
  // int grade = 0;
  // int signal = setjmp(badkan::longjmp_buffer);
  // if (signal == 0)
  // {

  //   // BASIC TESTS - DO NOT CHANGE
  //   PhysicalNumber a(2, Unit::KM);
  //   PhysicalNumber b(300, Unit::M);
  //   PhysicalNumber c(2, Unit::HOUR);
  //   PhysicalNumber d(30, Unit::MIN);
  //   ////////////////////////////////
  //   PhysicalNumber e(5, Unit::CM);
  //   PhysicalNumber f(10, Unit::SEC);
  //   PhysicalNumber g(15, Unit::G);
  //   PhysicalNumber h(20, Unit::KG);
  //   PhysicalNumber i(25, Unit::TON);
  //   ////////////////////////////////

  //   testcase
  //       .setname("Basic output")
  //       .CHECK_OUTPUT(a, "2[km]")
  //       .CHECK_OUTPUT(b, "300[m]")
  //       /////////start//////////////
  //       .CHECK_OUTPUT(c, "2[hour]")
  //       .CHECK_OUTPUT(d, "30[min]")
  //       .CHECK_OUTPUT(e, "5[cm]")
  //       .CHECK_OUTPUT(f, "10[sec]")
  //       .CHECK_OUTPUT(g, "15[g]")
  //       .CHECK_OUTPUT(h, "20[kg]")
  //       .CHECK_OUTPUT(i, "25[ton]")
  //       /////////end/////////////

  //       .setname("Compatible dimensions")
  //       .CHECK_OUTPUT(b + a, "2300[m]")
  //       .CHECK_OUTPUT((a += b), "2.3[km]")
  //       .CHECK_OUTPUT(a, "2.3[km]")
  //       .CHECK_OUTPUT(a + a, "4.6[km]")
  //       .CHECK_OUTPUT(b - b, "0[m]")
  //       .CHECK_OUTPUT(c, "2[hour]")
  //       .CHECK_OUTPUT(d, "30[min]")
  //       .CHECK_OUTPUT(d + c, "150[min]")
  //       ////////////start/////////////////
  //       .CHECK_OUTPUT(e + a, "230005[cm]")
  //       .CHECK_OUTPUT(e + b, "30005[cm]")
  //       .CHECK_OUTPUT(d + c, "150[min]")
  //       .CHECK_OUTPUT(f + c, "7210[sec]")
  //       .CHECK_OUTPUT(f + d, "1810[sec]")
  //       .CHECK_OUTPUT(g + h, "20015[g]")
  //       .CHECK_OUTPUT(h + i, "25020[kg]")
  //       .CHECK_OUTPUT(g + i, "25000015[g]")
  //       /////////////end/////////////////

  //       .setname("Incompatible dimensions")
  //       .CHECK_THROWS(a + c)
  //       .CHECK_THROWS(a + d)
  //       .CHECK_THROWS(b + c)
  //       .CHECK_THROWS(b + d)
  //       //////////start//////
  //       .CHECK_THROWS(a + g)
  //       .CHECK_THROWS(b + f)
  //       .CHECK_THROWS(e + i)
  //       .CHECK_THROWS(c + g)
  //       .CHECK_THROWS(f + h)
  //       .CHECK_THROWS(c + i)
  //       .CHECK_THROWS(i + b)
  //       .CHECK_THROWS(g + e)
  //       .CHECK_THROWS(b + h)
  //       .CHECK_THROWS(a + h)
  //       //////////end///////

  //       .setname("Basic input")
  //       .CHECK_OK(istringstream("700[kg]") >> a)
  //       .CHECK_OUTPUT((a += PhysicalNumber(1, Unit::TON)), "1700[kg]")

  //       // YOUR TESTS - INSERT AS MANY AS YOU WANT

  //       .setname("...")

  //       .print(cout, /*show_grade=*/false);
  //   grade = testcase.grade();
  // }
  // else
  // {
  //   testcase.print_signal(signal);
  //   grade = 0;
  // }
  // cout << "*** Grade: " << grade << " ***" << endl;
  // return grade;

  // badkan::TestCase testcase;
  // int grade = 0;
  // int signal = setjmp(badkan::longjmp_buffer);
  // if (signal == 0)
  // {

  //   // BASIC TESTS - DO NOT CHANGE
  //   PhysicalNumber a(2, Unit::KM);
  //   PhysicalNumber b(300, Unit::M);
  //   PhysicalNumber c(2, Unit::HOUR);
  //   PhysicalNumber d(30, Unit::MIN);

  //   PhysicalNumber km(2, Unit::KM);
  //   PhysicalNumber m(300, Unit::M);
  //   PhysicalNumber cm(2, Unit::CM);

  //   PhysicalNumber s(2, Unit::SEC);
  //   PhysicalNumber h(300, Unit::HOUR);
  //   PhysicalNumber min(2, Unit::MIN);

  //   PhysicalNumber g(100, Unit::G);
  //   PhysicalNumber kg(100, Unit::KG);
  //   PhysicalNumber t(100, Unit::TON);
  //   int random[5] = {rand() % 100, rand() % 100, rand() % 100, rand() % 100, rand() % 100};
  //   PhysicalNumber kg0(random[0], Unit::KG);
  //   PhysicalNumber kg1(random[1], Unit::KG);
  //   PhysicalNumber kg2(random[2], Unit::KG);
  //   PhysicalNumber kg3(random[3], Unit::KG);
  //   PhysicalNumber kg4(random[4], Unit::KG);
  //   PhysicalNumber ton0(random[0], Unit::TON);
  //   PhysicalNumber ton1(random[1], Unit::TON);
  //   PhysicalNumber ton2(random[2], Unit::TON);
  //   PhysicalNumber ton3(random[3], Unit::TON);
  //   PhysicalNumber ton4(random[4], Unit::TON);
  //   PhysicalNumber secon(5, Unit::SEC);
  //   PhysicalNumber hour(3, Unit::HOUR);
  //   PhysicalNumber minits(60, Unit::MIN);
  //   PhysicalNumber secon0(random[0], Unit::SEC);
  //   PhysicalNumber secon1(random[1], Unit::SEC);
  //   PhysicalNumber secon2(random[2], Unit::SEC);
  //   PhysicalNumber secon3(random[3], Unit::SEC);
  //   PhysicalNumber secon4(random[4], Unit::SEC);
  //   PhysicalNumber min0(random[0], Unit::MIN);
  //   PhysicalNumber min1(random[1], Unit::MIN);
  //   PhysicalNumber min2(random[2], Unit::MIN);
  //   PhysicalNumber min3(random[3], Unit::MIN);
  //   PhysicalNumber min4(random[4], Unit::MIN);

  //   testcase
  //       .setname("Basic output")
  //       .CHECK_OUTPUT(a, "2[km]")
  //       .CHECK_OUTPUT(b, "300[m]")
  //       .CHECK_OUTPUT(c, "2[hour]")
  //       .CHECK_OUTPUT(d, "30[min]")
  //       .CHECK_OUTPUT(km, "2[km]")
  //       .CHECK_OUTPUT(m, "300[m]")
  //       .CHECK_OUTPUT(cm, "2[cm]")
  //       .CHECK_OUTPUT(s, "2[sec]")
  //       .CHECK_OUTPUT(h, "300[hour]")
  //       .CHECK_OUTPUT(min, "2[min]")
  //       .CHECK_OUTPUT(g, "100[g]")
  //       .CHECK_OUTPUT(kg, "100[kg]")
  //       .CHECK_OUTPUT(t, "100[ton]")

  //       .setname("Compatible dimensions")
  //       .CHECK_OUTPUT(b + a, "2300[m]")
  //       .CHECK_OUTPUT(b, "300[m]")
  //       .CHECK_OUTPUT((a += b), "2.3[km]")
  //       .CHECK_OUTPUT(a, "2.3[km]")
  //       .CHECK_OUTPUT(a + a, "4.6[km]")
  //       .CHECK_OUTPUT(b - b, "0[m]")
  //       .CHECK_OUTPUT(c, "2[hour]")
  //       .CHECK_OUTPUT(d, "30[min]")
  //       .CHECK_OUTPUT(d + c, "150[min]")

  //       .setname("Incompatible dimensions")
  //       .CHECK_THROWS(a + c)
  //       .CHECK_THROWS(a + d)
  //       .CHECK_THROWS(b + c)
  //       .CHECK_THROWS(b + d)
  //       .setname("Basic input")
  //       // .CHECK_OK(istringstream("700[kg]") >> a)
  //       // .CHECK_OUTPUT(a, "700[kg]")
  //       // .CHECK_OUTPUT((a += PhysicalNumber(1, Unit::TON)), "1700[kg]")

  //       //case 1 whigh
  //       .setname("weights")
  //       .CHECK_OUTPUT(g + kg, "100100[g]")
  //       .CHECK_OUTPUT((kg += t), "100100[kg]")
  //       .CHECK_THROWS(t -= km)
  //       .CHECK_OUTPUT(kg + kg, "200200[kg]")
  //       .CHECK_OUTPUT(kg - kg, "0[kg]")
  //       .CHECK_OUTPUT((t += g), "100[ton]")

  //       .CHECK_OUTPUT(kg0 - kg1, std::to_string(random[0] - random[1]) + "[kg]")
  //       .CHECK_OUTPUT(kg1 - kg2, std::to_string(random[1] - random[2]) + "[kg]")
  //       .CHECK_OUTPUT(kg2 - kg3, std::to_string(random[2] - random[3]) + "[kg]")
  //       .CHECK_OUTPUT(kg3 - kg4, std::to_string(random[3] - random[4]) + "[kg]")
  //       .CHECK_OUTPUT(kg0 - kg2, std::to_string(random[0] - random[2]) + "[kg]")
  //       .CHECK_OUTPUT(kg0 - kg3, std::to_string(random[0] - random[3]) + "[kg]")
  //       .CHECK_OUTPUT(kg0 - kg4, std::to_string(random[0] - random[4]) + "[kg]")
  //       .CHECK_OUTPUT(kg1 - kg3, std::to_string(random[1] - random[3]) + "[kg]")
  //       .CHECK_OUTPUT(kg0 + kg1, std::to_string(random[0] + random[1]) + "[kg]")
  //       .CHECK_OUTPUT(kg1 + kg2, std::to_string(random[1] + random[2]) + "[kg]")
  //       .CHECK_OUTPUT(kg2 + kg3, std::to_string(random[2] + random[3]) + "[kg]")
  //       .CHECK_OUTPUT(kg3 + kg4, std::to_string(random[3] + random[4]) + "[kg]")
  //       .CHECK_OUTPUT(kg0 + kg2, std::to_string(random[0] + random[2]) + "[kg]")
  //       .CHECK_OUTPUT(kg0 + kg3, std::to_string(random[0] + random[3]) + "[kg]")
  //       .CHECK_OUTPUT(kg0 + kg4, std::to_string(random[0] + random[4]) + "[kg]")
  //       .CHECK_OUTPUT(kg1 + kg3, std::to_string(random[1] + random[3]) + "[kg]")

  //       .CHECK_OUTPUT(ton0 - ton1, std::to_string(random[0] - random[1]) + "[ton]")
  //       .CHECK_OUTPUT(ton1 - ton2, std::to_string(random[1] - random[2]) + "[ton]")
  //       .CHECK_OUTPUT(ton2 - ton3, std::to_string(random[2] - random[3]) + "[ton]")
  //       .CHECK_OUTPUT(ton3 - ton4, std::to_string(random[3] - random[4]) + "[ton]")
  //       .CHECK_OUTPUT(ton0 - ton2, std::to_string(random[0] - random[2]) + "[ton]")
  //       .CHECK_OUTPUT(ton0 - ton3, std::to_string(random[0] - random[3]) + "[ton]")
  //       .CHECK_OUTPUT(ton0 - ton4, std::to_string(random[0] - random[4]) + "[ton]")
  //       .CHECK_OUTPUT(ton1 - ton3, std::to_string(random[1] - random[3]) + "[ton]")
  //       .CHECK_OUTPUT(ton0 + ton1, std::to_string(random[0] + random[1]) + "[ton]")
  //       .CHECK_OUTPUT(ton1 + ton2, std::to_string(random[1] + random[2]) + "[ton]")
  //       .CHECK_OUTPUT(ton2 + ton3, std::to_string(random[2] + random[3]) + "[ton]")
  //       .CHECK_OUTPUT(ton3 + ton4, std::to_string(random[3] + random[4]) + "[ton]")
  //       .CHECK_OUTPUT(ton0 + ton2, std::to_string(random[0] + random[2]) + "[ton]")
  //       .CHECK_OUTPUT(ton0 + ton3, std::to_string(random[0] + random[3]) + "[ton]")
  //       .CHECK_OUTPUT(ton0 + ton4, std::to_string(random[0] + random[4]) + "[ton]")
  //       .CHECK_OUTPUT(ton1 + ton3, std::to_string(random[1] + random[3]) + "[ton]")
  //       //time
  //       .setname("time")
  //       .CHECK_OUTPUT((h += d), "300.5[hour]")
  //       .CHECK_OUTPUT(h, "300.5[hour]")
  //       .CHECK_OUTPUT((d + d), "60[min]")
  //       .CHECK_OUTPUT((c - c), "0[hour]")
  //       .CHECK_OUTPUT((d - d), "0[min]")
  //       .CHECK_OUTPUT((s - s), "0[sec]")
  //       .CHECK_OUTPUT((min + c), "122[min]")
  //       .CHECK_OUTPUT((c -= d), "1.5[hour]")
  //       .CHECK_OUTPUT(c, "1.5[hour]")
  //       .CHECK_OUTPUT((s += min), "122[sec]")
  //       .CHECK_OUTPUT(s, "122[sec]")
  //       .CHECK_OUTPUT((min - d), "-28[min]")
  //       .CHECK_OUTPUT((d += min), "32[min]")
  //       .CHECK_OUTPUT((d += c), "122[min]")
  //       .CHECK_OUTPUT((d += h), "18152[min]")
  //       .CHECK_OUTPUT((d += s), "18154[min]")
  //       .CHECK_OUTPUT(secon, "5[sec]")
  //       .CHECK_OUTPUT(hour, "3[hour]")
  //       .CHECK_OUTPUT(minits, "60[min]")
  //       .CHECK_OUTPUT(minits - hour, "-120[min]")
  //       .CHECK_OUTPUT(secon - minits, "-3595[sec]")

  //       .CHECK_OUTPUT(secon0 - secon1, std::to_string(random[0] - random[1]) + "[sec]")
  //       .CHECK_OUTPUT(secon1 - secon2, std::to_string(random[1] - random[2]) + "[sec]")
  //       .CHECK_OUTPUT(secon2 - secon3, std::to_string(random[2] - random[3]) + "[sec]")
  //       .CHECK_OUTPUT(secon3 - secon4, std::to_string(random[3] - random[4]) + "[sec]")
  //       .CHECK_OUTPUT(secon0 - secon2, std::to_string(random[0] - random[2]) + "[sec]")
  //       .CHECK_OUTPUT(secon0 - secon3, std::to_string(random[0] - random[3]) + "[sec]")
  //       .CHECK_OUTPUT(secon0 - secon4, std::to_string(random[0] - random[4]) + "[sec]")
  //       .CHECK_OUTPUT(secon1 - secon3, std::to_string(random[1] - random[3]) + "[sec]")
  //       .CHECK_OUTPUT(secon0 + secon1, std::to_string(random[0] + random[1]) + "[sec]")
  //       .CHECK_OUTPUT(secon1 + secon2, std::to_string(random[1] + random[2]) + "[sec]")
  //       .CHECK_OUTPUT(secon2 + secon3, std::to_string(random[2] + random[3]) + "[sec]")
  //       .CHECK_OUTPUT(secon3 + secon4, std::to_string(random[3] + random[4]) + "[sec]")
  //       .CHECK_OUTPUT(secon0 + secon2, std::to_string(random[0] + random[2]) + "[sec]")
  //       .CHECK_OUTPUT(secon0 + secon3, std::to_string(random[0] + random[3]) + "[sec]")
  //       .CHECK_OUTPUT(secon0 + secon4, std::to_string(random[0] + random[4]) + "[sec]")
  //       .CHECK_OUTPUT(secon1 + secon3, std::to_string(random[1] + random[3]) + "[sec]")

  //       .CHECK_OUTPUT(min0 - min1, std::to_string(random[0] - random[1]) + "[min]")
  //       .CHECK_OUTPUT(min1 - min2, std::to_string(random[1] - random[2]) + "[min]")
  //       .CHECK_OUTPUT(min2 - min3, std::to_string(random[2] - random[3]) + "[min]")
  //       .CHECK_OUTPUT(min3 - min4, std::to_string(random[3] - random[4]) + "[min]")
  //       .CHECK_OUTPUT(min0 - min2, std::to_string(random[0] - random[2]) + "[min]")
  //       .CHECK_OUTPUT(min0 - min3, std::to_string(random[0] - random[3]) + "[min]")
  //       .CHECK_OUTPUT(min0 - min4, std::to_string(random[0] - random[4]) + "[min]")
  //       .CHECK_OUTPUT(min1 - min3, std::to_string(random[1] - random[3]) + "[min]")
  //       .CHECK_OUTPUT(min0 + min1, std::to_string(random[0] + random[1]) + "[min]")
  //       .CHECK_OUTPUT(min1 + min2, std::to_string(random[1] + random[2]) + "[min]")
  //       .CHECK_OUTPUT(min2 + min3, std::to_string(random[2] + random[3]) + "[min]")
  //       .CHECK_OUTPUT(min3 + min4, std::to_string(random[3] + random[4]) + "[min]")
  //       .CHECK_OUTPUT(min0 + min2, std::to_string(random[0] + random[2]) + "[min]")
  //       .CHECK_OUTPUT(min0 + min3, std::to_string(random[0] + random[3]) + "[min]")
  //       .CHECK_OUTPUT(min0 + min4, std::to_string(random[0] + random[4]) + "[min]")
  //       .CHECK_OUTPUT(min1 + min3, std::to_string(random[1] + random[3]) + "[min]")
  //       .CHECK_OUTPUT(secon1 + min1, std::to_string(random[1] + (random[1] * 60)) + "[sec]")
  //       .CHECK_OUTPUT(secon0 + min1, std::to_string(random[0] + (random[1] * 60)) + "[sec]")
  //       .CHECK_OUTPUT(secon2 + min1, std::to_string(random[2] + (random[1] * 60)) + "[sec]")
  //       .CHECK_OUTPUT(secon3 + min1, std::to_string(random[3] + (random[1] * 60)) + "[sec]")
  //       .CHECK_OUTPUT(secon1 + min2, std::to_string(random[1] + (random[2] * 60)) + "[sec]")
  //       .setname("...")

  //       .print(cout, /*show_grade=*/false);
  //   grade = testcase.grade();
  // }
  // else
  // {
  //   testcase.print_signal(signal);
  //   grade = 0;
  // }
  // cout << "*** Grade: " << grade << " ***" << endl;
  // return grade;

  badkan::TestCase testcase;
  int grade = 0;
  int signal = setjmp(badkan::longjmp_buffer);
  if (signal == 0)
  {

    // BASIC TESTS - DO NOT CHANGE
    PhysicalNumber a(2, Unit::KM);
    PhysicalNumber b(300, Unit::M);
    PhysicalNumber c(2, Unit::HOUR);
    PhysicalNumber d(30, Unit::MIN);

    PhysicalNumber length_01(1, Unit::M);
    PhysicalNumber time_01(1, Unit::MIN);
    PhysicalNumber masse_01(1, Unit::KG);
    bool throwchecks;

    testcase
        .setname("Basic output")
        .CHECK_OUTPUT(a, "2[km]")
        .CHECK_OUTPUT(b, "300[m]")

        .setname("Compatible dimensions")
        .CHECK_OUTPUT(b + a, "2300[m]")
        .CHECK_OUTPUT((a += b), "2.3[km]")
        .CHECK_OUTPUT(a, "2.3[km]")
        .CHECK_OUTPUT(a + a, "4.6[km]")
        .CHECK_OUTPUT(b - b, "0[m]")
        .CHECK_OUTPUT(c, "2[hour]")
        .CHECK_OUTPUT(d, "30[min]")
        .CHECK_OUTPUT(d + c, "150[min]")

        .setname("Incompatible dimensions")
        .CHECK_THROWS(a + c)
        .CHECK_THROWS(a + d)
        .CHECK_THROWS(b + c)
        .CHECK_THROWS(b + d)

        .setname("Basic input")
        .CHECK_OK(istringstream("700[kg]") >> a)
        .CHECK_OUTPUT((a += PhysicalNumber(1, Unit::TON)), "1700[kg]")

        //     // YOUR TESTS - INSERT AS MANY AS YOU WANT

        .setname("----------------------------------------------------------")
        .setname("Test Private")
        .setname("----------------------------------------------------------")
        .setname("Verification of Lenght ")

        .CHECK_OUTPUT(length_01, "1[m]")
        .CHECK_OUTPUT((length_01 += PhysicalNumber(1, Unit::M)), "2[m]")                     // m=m +m
        .CHECK_OUTPUT((length_01 += PhysicalNumber(5, Unit::CM)), "2.05[m]")                 //m=m + cm
        .CHECK_OUTPUT((length_01 += PhysicalNumber(10, Unit::KM)), "10002[m]")               //m= m +km
        .CHECK_OUTPUT((length_01 -= PhysicalNumber(10, Unit::KM)), "2.05[m]")                // m=m - km
        .CHECK_OUTPUT((length_01 -= PhysicalNumber(5, Unit::CM)), "2[m]")                    // m=m-cm
        .CHECK_OUTPUT((length_01 -= PhysicalNumber(1, Unit::M)), "1[m]")                     // m=m-m
        .CHECK_OUTPUT((length_01 = PhysicalNumber(2, Unit::M)), "2[m]")                      //  m=  m other
        .CHECK_OUTPUT((length_01 = PhysicalNumber(5, Unit::KM)), "5[km]")                    //  m=  m other
        .CHECK_OUTPUT(-length_01, "-5[km]")                                                  // -lenght
        .CHECK_OUTPUT(+length_01, "5[km]")                                                   // +lenght (no change )
        .CHECK_EQUAL((length_01 == PhysicalNumber(5, Unit::KM)), true)                       // 5000[m]==5km
        .CHECK_EQUAL((length_01 == PhysicalNumber(5, Unit::M)), false)                       // 5000[m]==5m
        .CHECK_EQUAL((PhysicalNumber(5, Unit::KM)) < (PhysicalNumber(5, Unit::M)), false)    // 5KM <5M
        .CHECK_EQUAL((length_01 < PhysicalNumber(50, Unit::KM)), true)                       //5000[m]<50 km
        .CHECK_EQUAL((length_01 < PhysicalNumber(5, Unit::CM)), false)                       //5000[m]< 5 Cm
        .CHECK_EQUAL((length_01 > PhysicalNumber(11, Unit::KM)), false)                      // 5000[m]> 11 KM
        .CHECK_EQUAL((PhysicalNumber(5, Unit::KM)) > (PhysicalNumber(100, Unit::M)), true)   //5km>100M
        .CHECK_EQUAL((length_01 > PhysicalNumber(2, Unit::CM)), true)                        // 5000[m]>=2  cm
        .CHECK_EQUAL((length_01 >= PhysicalNumber(50, Unit::M)), true)                       // 5000[m]>= 11 KM
        .CHECK_EQUAL((PhysicalNumber(5, Unit::KM)) >= (PhysicalNumber(100, Unit::M)), true)  //5km>=100M
        .CHECK_EQUAL((length_01 >= PhysicalNumber(4, Unit::KM)), true)                       // 5000[m]>4 km
        .CHECK_EQUAL((PhysicalNumber(10, Unit::CM)) <= (PhysicalNumber(10, Unit::CM)), true) // 10CM <=10M
        .CHECK_EQUAL((length_01 <= PhysicalNumber(50, Unit::KM)), true)                      //5000[m]<=50 km
        .CHECK_EQUAL((length_01 <= PhysicalNumber(5, Unit::CM)), false)                      //5000[m]<= 5 Cm
        .CHECK_EQUAL((length_01 != PhysicalNumber(50, Unit::KM)), true)                      //5000[m]!=50 km
        .CHECK_EQUAL((PhysicalNumber(5000, Unit::M) != PhysicalNumber(5, Unit::KM)), false)  //5000 m!= 5 Km
        .CHECK_OUTPUT(++length_01, "6[km]")                                                  // lenght++
        .CHECK_OUTPUT(++length_01, "7[km]")                                                  // verif lenght++
        .CHECK_OUTPUT(--length_01, "6[km]")                                                  // verif lenght--
        .CHECK_OUTPUT(length_01 + length_01, "12[km]")                                       // lenght+lenght
        .CHECK_OUTPUT(length_01 + PhysicalNumber(50, Unit::M), "6.05[km]")                   // lenght+other
        .CHECK_OUTPUT(length_01 - length_01, "0[km]")                                        // lenght-lenght
        .CHECK_OUTPUT(length_01 - PhysicalNumber(50, Unit::M), "5.95[km]")                   // lenght-other
        // .CHECK_OUTPUT(length_01++, "6[km]")                                                  // lenght chack postfix ++
        // .CHECK_OUTPUT(length_01--, "7[km]")                                                  // lenght chack postfix --
        // .CHECK_OUTPUT(length_01++, "6[km]")                                                  //  chack postfix ++
        .CHECK_OUTPUT(length_01, "7[km]")                                                    //  chack postfix ++
        .CHECK_OUTPUT(PhysicalNumber(50, Unit::CM), "50[cm]")                                // lenght chack postfix --

        .setname("----------------------------------------------------------")
        .setname("Verification of Masss ")

        .CHECK_OUTPUT(masse_01, "1[kg]")
        .CHECK_OUTPUT((masse_01 += PhysicalNumber(1, Unit::KG)), "2[kg]")                     // kg=kg +kg
        .CHECK_OUTPUT((masse_01 += PhysicalNumber(5, Unit::G)), "2.005[kg]")                  //kg=kg +g
        .CHECK_OUTPUT((masse_01 += PhysicalNumber(10, Unit::TON)), "10002[kg]")               //kg= kg +ton
        .CHECK_OUTPUT((masse_01 -= PhysicalNumber(10, Unit::TON)), "2.005[kg]")               // Kg=kg-ton
        .CHECK_OUTPUT((masse_01 -= PhysicalNumber(5, Unit::G)), "2[kg]")                      // Kg=kg-g
        .CHECK_OUTPUT((masse_01 -= PhysicalNumber(1, Unit::KG)), "1[kg]")                     // Kg=kg-KG
        .CHECK_OUTPUT((masse_01 = PhysicalNumber(2, Unit::KG)), "2[kg]")                      //  kg=  kg (other)
        .CHECK_OUTPUT((masse_01 = PhysicalNumber(5, Unit::TON)), "5[ton]")                    //  kg=  TON (other)
        .CHECK_OUTPUT(-masse_01, "-5[ton]")                                                   // -lenght
        .CHECK_OUTPUT(+masse_01, "5[ton]")                                                    // +lenght (no change )
        .CHECK_EQUAL((masse_01 == PhysicalNumber(5, Unit::TON)), true)                        // 5000[kg]==5TON
        .CHECK_EQUAL((masse_01 == PhysicalNumber(5, Unit::G)), false)                         // 5000[kg]==5g
        .CHECK_EQUAL((PhysicalNumber(5, Unit::TON)) < (PhysicalNumber(5, Unit::G)), false)    // 5Ton <5g
        .CHECK_EQUAL((masse_01 < PhysicalNumber(50, Unit::TON)), true)                        //5000[kg]<50 ton
        .CHECK_EQUAL((masse_01 < PhysicalNumber(5, Unit::G)), false)                          //5000[kg]< 5 G
        .CHECK_EQUAL((masse_01 > PhysicalNumber(11, Unit::TON)), false)                       // 5000[kg]> 11 ton
        .CHECK_EQUAL((PhysicalNumber(5, Unit::TON)) > (PhysicalNumber(100, Unit::G)), true)   //5 Ton>100g
        .CHECK_EQUAL((masse_01 > PhysicalNumber(2, Unit::G)), true)                           // 5000[kg]>=2  g
        .CHECK_EQUAL((masse_01 >= PhysicalNumber(50, Unit::KG)), true)                        // 5000[KG]>= 5 Ton
        .CHECK_EQUAL((PhysicalNumber(5, Unit::TON)) >= (PhysicalNumber(100, Unit::G)), true)  //5ton>=100g
        .CHECK_EQUAL((masse_01 >= PhysicalNumber(4, Unit::TON)), true)                        // 5000[kg]>4 ton
        .CHECK_EQUAL((PhysicalNumber(10, Unit::G)) <= (PhysicalNumber(10, Unit::G)), true)    // 10G <=10g
        .CHECK_EQUAL((masse_01 <= PhysicalNumber(50, Unit::TON)), true)                       //5000[kg]<=50 ton
        .CHECK_EQUAL((masse_01 <= PhysicalNumber(5, Unit::G)), false)                         //5000[KG]<= 5 g
        .CHECK_EQUAL((masse_01 != PhysicalNumber(50, Unit::TON)), true)                       //5000[kg]!=50 ton
        .CHECK_EQUAL((PhysicalNumber(5000, Unit::KG) != PhysicalNumber(5, Unit::TON)), false) //5000 kg!= 5ton
        .CHECK_OUTPUT(++masse_01, "6[ton]")                                                   // lenght++
        .CHECK_OUTPUT(++masse_01, "7[ton]")                                                   // verif lenght++
        .CHECK_OUTPUT(--masse_01, "6[ton]")                                                   // verif lenght--
        .CHECK_OUTPUT(masse_01 + masse_01, "12[ton]")                                         // lenght+lenght
        .CHECK_OUTPUT(masse_01 + PhysicalNumber(50, Unit::KG), "6.05[ton]")                   // lenght+other
        .CHECK_OUTPUT(masse_01 - masse_01, "0[ton]")                                          // lenght-lenght
        .CHECK_OUTPUT(masse_01 - PhysicalNumber(50, Unit::KG), "5.95[ton]")                   // lenght-other
        // .CHECK_OUTPUT(masse_01++, "6[ton]")                                                   // lenght chack postfix ++
        // .CHECK_OUTPUT(masse_01--, "7[ton]")                                                   // lenght chack postfix --
        .CHECK_OUTPUT(PhysicalNumber(50, Unit::KG), "50[kg]")                                 //  chack postfix ++
        .CHECK_OUTPUT(PhysicalNumber(50, Unit::G), "50[g]")                                   // lenght chack postfix --

        .setname("----------------------------------------------------------")
        .setname("Verification of Hour ")

        .CHECK_OUTPUT(time_01, "1[min]")
        .CHECK_OUTPUT(PhysicalNumber(1, Unit::HOUR) + PhysicalNumber(10, Unit::MIN), "1.16667[hour]")
        .CHECK_OUTPUT((time_01 += PhysicalNumber(1, Unit::MIN)), "2[min]")                           // min=min +min
        .CHECK_OUTPUT((time_01 += PhysicalNumber(5, Unit::SEC)), "2.08333[min]")                     //min=min +sec
        .CHECK_OUTPUT((time_01 += PhysicalNumber(10, Unit::HOUR)), "602.083[min]")                   //min= min +hour
        .CHECK_OUTPUT((time_01 -= PhysicalNumber(10, Unit::HOUR)), "2.08333[min]")                   // min=min-hour
        .CHECK_OUTPUT((time_01 -= PhysicalNumber(5, Unit::SEC)), "2[min]")                           // min=min-sec
        .CHECK_OUTPUT((time_01 -= PhysicalNumber(1, Unit::MIN)), "1[min]")                           // min=min-min
        .CHECK_OUTPUT((time_01 = PhysicalNumber(2, Unit::MIN)), "2[min]")                            //  min=  min (other)
        .CHECK_OUTPUT((time_01 = PhysicalNumber(5, Unit::HOUR)), "5[hour]")                          //  min=  HOUR (other)
        .CHECK_OUTPUT(-time_01, "-5[hour]")                                                          // -lenght
        .CHECK_OUTPUT(+time_01, "5[hour]")                                                           // +lenght (no change )
        .CHECK_EQUAL((time_01 == PhysicalNumber(5, Unit::HOUR)), true)                               // 300[min]==hour
        .CHECK_EQUAL((time_01 == PhysicalNumber(5, Unit::SEC)), false)                               // 300[min]==5sec
        .CHECK_EQUAL((PhysicalNumber(5, Unit::HOUR)) < (PhysicalNumber(5, Unit::SEC)), false)        // 5 HOUR <5 sec
        .CHECK_EQUAL((time_01 < PhysicalNumber(50, Unit::HOUR)), true)                               //300[min]<50 hour
        .CHECK_EQUAL((time_01 < PhysicalNumber(5, Unit::SEC)), false)                                //300[min]< 5 SEC
        .CHECK_EQUAL((time_01 > PhysicalNumber(11, Unit::HOUR)), false)                              // 300[min]> 11 hour
        .CHECK_EQUAL((PhysicalNumber(5, Unit::HOUR)) > (PhysicalNumber(100, Unit::SEC)), true)       //5 hour>100sec
        .CHECK_EQUAL((time_01 > PhysicalNumber(2, Unit::SEC)), true)                                 // 300[min]>=2 sec
        .CHECK_EQUAL((time_01 >= PhysicalNumber(50, Unit::MIN)), true)                               // 300[min]>= 50 MIN
        .CHECK_EQUAL((PhysicalNumber(5, Unit::HOUR)) >= (PhysicalNumber(100, Unit::SEC)), true)      //5 HOUR>=100 SEC
        .CHECK_EQUAL((time_01 >= PhysicalNumber(4, Unit::HOUR)), true)                               // 300[min]>4 HOUR
        .CHECK_EQUAL((PhysicalNumber(10, Unit::SEC)) <= (PhysicalNumber(10, Unit::SEC)), true)       // 10sec <=10sec
        .CHECK_EQUAL((time_01 <= PhysicalNumber(50, Unit::HOUR)), true)                              //300[min]<=50 HOur
        .CHECK_EQUAL((time_01 <= PhysicalNumber(5, Unit::SEC)), false)                               //300[min]<= 5 sec
        .CHECK_EQUAL((time_01 != PhysicalNumber(50, Unit::HOUR)), true)                              //300[min]!=50 HOUR
        .CHECK_EQUAL((PhysicalNumber(5000, Unit::HOUR) != PhysicalNumber(300000, Unit::MIN)), false) //5000[HOUR]!= 300000 MIN
        .CHECK_EQUAL((PhysicalNumber(5000, Unit::HOUR) != PhysicalNumber(5000, Unit::HOUR)), false)  //5000[HOUR]!= 5000[HOUR] MIN

        .CHECK_OUTPUT(++time_01, "6[hour]")                                     // lenght++
        .CHECK_OUTPUT(++time_01, "7[hour]")                                     // verif lenght++
        .CHECK_OUTPUT(--time_01, "6[hour]")                                     // verif lenght--
        .CHECK_OUTPUT(time_01 + time_01, "12[hour]")                            // lenght+lenght
        .CHECK_OUTPUT(time_01 + PhysicalNumber(50, Unit::MIN), "6.83333[hour]") // lenght+other
        .CHECK_OUTPUT(time_01 - time_01, "0[hour]")                             // lenght-lenght
        .CHECK_OUTPUT(time_01 - PhysicalNumber(50, Unit::MIN), "5.16667[hour]") // lenght-other
        // .CHECK_OUTPUT(time_01++, "6[hour]")                                     // lenght chack postfix ++
        // .CHECK_OUTPUT(time_01--, "7[hour]")                                     // lenght chack postfix --
        .CHECK_OUTPUT(PhysicalNumber(50, Unit::HOUR), "50[hour]")               //  chack postfix ++
        .CHECK_OUTPUT(PhysicalNumber(50, Unit::SEC), "50[sec]")                 // lenght chack postfix --

        .setname("----------------------------------------------------------")

        .setname("check conversions")
        .CHECK_EQUAL(PhysicalNumber(1, Unit::KG) == PhysicalNumber(1000, Unit::G), true)
        .CHECK_EQUAL(PhysicalNumber(1, Unit::TON) == PhysicalNumber(1000, Unit::KG), true)
        .CHECK_EQUAL(PhysicalNumber(1, Unit::TON) == PhysicalNumber(1000000, Unit::G), true)
        .CHECK_EQUAL(PhysicalNumber(1000, Unit::KG) == PhysicalNumber(1000000, Unit::G), true)
        .CHECK_EQUAL(PhysicalNumber(1, Unit::HOUR) == PhysicalNumber(60, Unit::MIN), true)
        .CHECK_EQUAL(PhysicalNumber(3600, Unit::SEC) == PhysicalNumber(60, Unit::MIN), true)
        .CHECK_EQUAL(PhysicalNumber(1, Unit::HOUR) == PhysicalNumber(3600, Unit::SEC), true)
        .CHECK_EQUAL(PhysicalNumber(1, Unit::KM) == PhysicalNumber(1000, Unit::M), true)
        .CHECK_EQUAL(PhysicalNumber(1, Unit::KM) == PhysicalNumber(100000, Unit::CM), true)
        .CHECK_EQUAL(PhysicalNumber(1000, Unit::M) == PhysicalNumber(100000, Unit::CM), true)
        .CHECK_EQUAL(PhysicalNumber(1, Unit::MIN) == PhysicalNumber(60, Unit::SEC), true)
        .CHECK_EQUAL(PhysicalNumber(1, Unit::M) == PhysicalNumber(100, Unit::CM), true)

        .setname("----------------------------------------------------------")
        .setname("Verification of TROW  ")

        .setname("Check Input")

        .CHECK_OK(istringstream("2[min]") >> a)
        .CHECK_OUTPUT((a += PhysicalNumber(30, Unit::SEC)), "2.5[min]")
        .CHECK_OK(istringstream("2[min]") >> b)
        .CHECK_OUTPUT((b += PhysicalNumber(30, Unit::SEC)), "2.5[min]")
        .CHECK_OK(istringstream("30[kg]") >> c)
        .CHECK_OUTPUT((c += PhysicalNumber(50, Unit::G)), "30.05[kg]")
        .CHECK_OK(istringstream("5[m]") >> length_01)
        .CHECK_OUTPUT((length_01 += PhysicalNumber(90, Unit::CM)), "5.9[m]")

        .CHECK_THROWS(istringstream("5") >> length_01)
        .CHECK_THROWS(istringstream("5 KM") >> length_01)
        .CHECK_THROWS(istringstream("2 cm ") >> length_01)
        .CHECK_THROWS(istringstream("afas") >> length_01)
        .CHECK_THROWS(istringstream("ton") >> length_01)
        .CHECK_THROWS(istringstream(" ") >> length_01)
        .CHECK_THROWS(istringstream("50 [k") >> length_01)
        .CHECK_THROWS(istringstream("2 ton] ") >> length_01)

        .setname("Check Throw ")

        .CHECK_THROWS(length_01 + masse_01)
        .CHECK_THROWS(length_01 - masse_01)
        .CHECK_THROWS(length_01 += masse_01)
        .CHECK_THROWS(length_01 -= masse_01)
        .CHECK_THROWS(throwchecks = length_01 == masse_01)
        .CHECK_THROWS(throwchecks = length_01 < masse_01)
        .CHECK_THROWS(throwchecks = length_01 > masse_01)
        .CHECK_THROWS(throwchecks = length_01 <= masse_01)
        .CHECK_THROWS(throwchecks = (length_01 >= masse_01))
        .CHECK_THROWS(throwchecks = length_01 != masse_01)

        .CHECK_THROWS(time_01 + masse_01)
        .CHECK_THROWS(time_01 - masse_01)
        .CHECK_THROWS(time_01 += masse_01)
        .CHECK_THROWS(time_01 -= masse_01)

        .CHECK_THROWS(throwchecks = time_01 == masse_01)
        .CHECK_THROWS(throwchecks = time_01 < masse_01)
        .CHECK_THROWS(throwchecks = time_01 > masse_01)
        .CHECK_THROWS(throwchecks = time_01 <= masse_01)
        .CHECK_THROWS(throwchecks = time_01 >= masse_01)
        .CHECK_THROWS(throwchecks = time_01 != masse_01)

        .CHECK_THROWS(length_01 + time_01)
        .CHECK_THROWS(length_01 - time_01)
        .CHECK_THROWS(length_01 += time_01)
        .CHECK_THROWS(length_01 -= time_01)

        .CHECK_THROWS(throwchecks = time_01 == length_01)
        .CHECK_THROWS(throwchecks = time_01 < length_01)
        .CHECK_THROWS(throwchecks = time_01 > length_01)
        .CHECK_THROWS(throwchecks = time_01 <= length_01)
        .CHECK_THROWS(throwchecks = time_01 >= length_01)
        .CHECK_THROWS(throwchecks = time_01 != length_01)

        .print(cout, /*show_grade=*/false);
    grade = testcase.grade();
  }
  else
  {
    testcase.print_signal(signal);
    grade = 0;
  }
  cout << "*** Grade: " << grade << " ***" << endl;
  return grade;
}
