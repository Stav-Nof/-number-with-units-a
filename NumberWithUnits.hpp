#ifndef __NUMBERS__UNITS_H
#define __NUMBERS__UNITS_H
#include <fstream>
#include <map>
#include <string>
#include <iostream>
using namespace std;
namespace ariel
{
class NumberWithUnits
{
private:
	
public:
double amount;
	string unit;
	static map<string, pair<double, string>> units;
	double getAmount() const
	{
	    return amount;
	}
	 string getUnit()const
	{
	    return unit;
	}
	static void read_units(ifstream &file);
	NumberWithUnits(double amount,const string& unit);
	
	 
	 //-
	NumberWithUnits operator-() const;
	
	// *
	NumberWithUnits operator*(double num) const;
	friend NumberWithUnits operator*(double num, const NumberWithUnits& b) 
	{
		return b;
	}
	
	// + -
	NumberWithUnits operator+(NumberWithUnits &other) throw();
	
	NumberWithUnits& operator+=(NumberWithUnits other);
	NumberWithUnits operator++(int);
	NumberWithUnits& operator++();
	NumberWithUnits operator-(NumberWithUnits &other);
	NumberWithUnits& operator-=(NumberWithUnits& other);
	NumberWithUnits operator--(int);
	NumberWithUnits operator--();
	
	// compare operators
	bool operator ==(const NumberWithUnits &b) const;
	bool operator !=(const NumberWithUnits &b) const;
	bool operator >=(const NumberWithUnits &b) const;
	bool operator <=(const NumberWithUnits &b) const;
	bool operator >(const NumberWithUnits &b) const;
	bool operator <(const NumberWithUnits &b) const;

};
	 ostream& operator<<(ostream& os, const NumberWithUnits& num);
	 	 std::istringstream   & operator>>(std::istringstream   &out, NumberWithUnits const &other);
	 	  std::istringstream   & operator>>(std::istringstream   &out, NumberWithUnits const &other);
	 std::istringstream   & operator+=(std::istringstream   &out, const NumberWithUnits & other);
	 	 
}
#endif
