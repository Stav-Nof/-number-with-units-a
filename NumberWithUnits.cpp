
#include "NumberWithUnits.hpp"
using namespace ariel;

 void NumberWithUnits::read_units(ifstream &file)
	{
	   
           
	}
	NumberWithUnits::NumberWithUnits(double amount, const string& unit):amount(amount), unit(unit)
	{
	    
	}
		 ostream& ariel::operator<<(ostream& os, const NumberWithUnits& num)
	 {
	     os << num.getAmount() << "[" << num.getUnit() << "]";
	     return os;
	 }
	 
	 	NumberWithUnits NumberWithUnits:: operator-() const
	{
	    NumberWithUnits newNum(-getAmount(), getUnit());
	    return newNum;
	}

		NumberWithUnits NumberWithUnits::operator*(double num) const
	{
	     NumberWithUnits newNum(num * amount, unit);
	    return newNum;
	}
	
		NumberWithUnits NumberWithUnits::operator+(NumberWithUnits &other) throw()
	{
	      NumberWithUnits newNum(amount +  other.getAmount(), unit);
	    return newNum;
	}
		NumberWithUnits& NumberWithUnits::operator+=(NumberWithUnits other)
	{
	    amount = other.amount + amount;
	    return *this;
	}
		NumberWithUnits NumberWithUnits::operator-(NumberWithUnits &other)
	{
	     NumberWithUnits newNum(amount - other.getAmount(), unit);
	    return newNum;
	}
		bool NumberWithUnits::operator ==(const NumberWithUnits &b) const
	{
	   return amount == b.getAmount() && unit == b.unit;
	}
		bool NumberWithUnits::operator !=(const NumberWithUnits &b) const
	{
	    return amount != b.getAmount() || unit != b.unit;
	}
		bool NumberWithUnits::operator >=(const NumberWithUnits &b) const
	{
	    return amount >= b.getAmount();
	}
		bool NumberWithUnits::operator <=(const NumberWithUnits &b) const
	{
	    return amount <= b.getAmount();
	}
		bool NumberWithUnits::operator >(const NumberWithUnits &b) const
	{
	    return amount > b.getAmount();
	}
		bool NumberWithUnits::operator <(const NumberWithUnits &b) const
	{
	   return amount < b.getAmount();
	}
	
		 std::istringstream   &ariel::operator>>(std::istringstream   &out, NumberWithUnits const &other)
	{
	    return out;
	}
			 std::istringstream   & ariel::operator+=(std::istringstream   &out, const NumberWithUnits&  other)
	{
	    return out;
	}
