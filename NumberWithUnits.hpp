#include <fstream>
#include <map>
#include <string>
#include <iostream>
using namespace std;
namespace ariel{
    
class NumberWithUnits
{
private:
	double amount;
	string unit;
public:
	//static map<string, pair<double, string>> units;
	static void read_units(ifstream &file);
	NumberWithUnits(double amount, string unit);
	friend ostream& operator<<(ostream& os, const NumberWithUnits& num);
	 
	 //-
	NumberWithUnits operator-() const;
	
	// *
	NumberWithUnits operator*(double num) const;
	friend NumberWithUnits operator*(double num, const NumberWithUnits &b);
	
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
	friend std::istringstream   & operator>>(std::istringstream   &out, NumberWithUnits const &other);
	friend std::istringstream   & operator+=(std::istringstream   &out, NumberWithUnits  other);
};
}

