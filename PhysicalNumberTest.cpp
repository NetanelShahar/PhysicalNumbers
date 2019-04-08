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
    ////////////////////////////////
    PhysicalNumber e(5, Unit::CM);
    PhysicalNumber f(10, Unit::SEC);
    PhysicalNumber g(15, Unit::G);
    PhysicalNumber h(20, Unit::KG);
    PhysicalNumber i(25, Unit::TON);
    ////////////////////////////////

    testcase
        .setname("Basic output")
        .CHECK_OUTPUT(a, "2[km]")
        .CHECK_OUTPUT(b, "300[m]")
        /////////start//////////////
        .CHECK_OUTPUT(c, "2[h]")
        .CHECK_OUTPUT(d, "30[min]")
        .CHECK_OUTPUT(e, "5[cm]")
        .CHECK_OUTPUT(f, "10[sec]")
        .CHECK_OUTPUT(g, "15[g]")
        .CHECK_OUTPUT(h, "20[kg]")
        .CHECK_OUTPUT(i, "25[ton]")
        /////////end/////////////

        .setname("Compatible dimensions")
        .CHECK_OUTPUT(b + a, "2300[m]")
        .CHECK_OUTPUT((a += b), "2.3[km]")
        .CHECK_OUTPUT(a, "2.3[km]")
        .CHECK_OUTPUT(a + a, "4.6[km]")
        .CHECK_OUTPUT(b - b, "0[m]")
        .CHECK_OUTPUT(c, "2[hour]")
        .CHECK_OUTPUT(d, "30[min]")
        .CHECK_OUTPUT(d + c, "150[min]")
        ////////////start/////////////////
        .CHECK_OUTPUT(e + a, "200005[cm]")
        .CHECK_OUTPUT(e + b, "30005[cm]")
        .CHECK_OUTPUT(d + c, "150[sec]")
        .CHECK_OUTPUT(f + c, "7210[sec]")
        .CHECK_OUTPUT(f + d, "1810[sec]")
        .CHECK_OUTPUT(g + h, "20015[g]")
        .CHECK_OUTPUT(h + i, "25020[kg]")
        .CHECK_OUTPUT(g + i, "250000015[g]")
        /////////////end/////////////////

        .setname("Incompatible dimensions")
        .CHECK_THROWS(a + c)
        .CHECK_THROWS(a + d)
        .CHECK_THROWS(b + c)
        .CHECK_THROWS(b + d)
        //////////start//////
        .CHECK_THROWS(a + g)
        .CHECK_THROWS(b + f)
        .CHECK_THROWS(e + i)
        .CHECK_THROWS(c + g)
        .CHECK_THROWS(f + h)
        .CHECK_THROWS(c + i)
        .CHECK_THROWS(i + b)
        .CHECK_THROWS(g + e)
        .CHECK_THROWS(b + h)
        .CHECK_THROWS(a + h)
        //////////end///////

        

        .setname("Basic input")
        .CHECK_OK(istringstream("700[kg]") >> a)
        .CHECK_OUTPUT((a += PhysicalNumber(1, Unit::TON)), "1700[kg]")

        // YOUR TESTS - INSERT AS MANY AS YOU WANT

        .setname("...")

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
