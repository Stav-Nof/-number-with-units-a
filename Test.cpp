#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
#include "NumberWithUnits.hpp"
using namespace ariel;
using namespace std;
    
    TEST_CASE("All"){
        ifstream units_file{"units.txt"};
        NumberWithUnits::read_units(units_file);
        NumberWithUnits num1{100, "m"};
        NumberWithUnits num2{150, "m"};
        NumberWithUnits num3{200, "m"};
        NumberWithUnits num4 = num2 + num3;
        CHECK(num4.getAmount() == 350);
        
        NumberWithUnits num5{2, "km"};
        NumberWithUnits num6{3, "km"};
        NumberWithUnits num7 = num5 + num6;
        CHECK(num7.getUnit() == "km");
        CHECK(num3 <= num1 + num2);
        CHECK(num4 >= num2 + num3);
        CHECK(num1 <= num1 * 3);
    CHECK(num1 != num1 * 3);
    CHECK((num6 - num5).amount == 1);
    num5 += num6;
    CHECK((num5).amount == 5);
    num5 = num5 -  num6;
    CHECK((num5).amount == 2);
    
    }
    TEST_CASE("Units"){
        
        NumberWithUnits num2{150, "m"};
        NumberWithUnits num3{200, "m"};
        CHECK((num2 + num3).unit == "m");
        CHECK((num2 - num3).unit == "m");
        CHECK(((num2 + num3)* 2).unit == "m");
        CHECK((num2 * 3).unit == "m");
        
        NumberWithUnits num10{150, "m"};
        NumberWithUnits num11{150, "km"};
        CHECK(num10 == num10);
        CHECK(num10 != num11);
        NumberWithUnits num13{150, "m"};
        NumberWithUnits num14{150, "m"};
        CHECK(num10 == num10);

    }
    TEST_CASE("Allocating"){
         NumberWithUnits num01{150, "m"};
          NumberWithUnits num02{150, "m"};
          CHECK(num01. unit =="m");
          CHECK(num01.amount == 150);
          CHECK(num01.amount == num02.amount);
          CHECK(num01.unit == num02.unit);
    }