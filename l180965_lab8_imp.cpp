#include "Date.h"

int Date:: checkdate(int x)
{
	if(x>0 && x<=30)
	{
	return x;
	}
	else 
		return 1;




}
int Date:: checkmonth(int y)
{
	if(y>0 && y<=12)
	{
		return y;
	}
	else 
		return 1;
	

}

int Date:: checkyear(int z)
{
	if(z>=2000)
	{
	return z;
	}
	else 
		return 2000;




}

Date::Date()
{
	date=1;
	month=1;
	year=2000;


}

Date::Date (int maheena,int tarekh, int saal)
{
	month=checkmonth(maheena);
	date=checkdate(tarekh);
	year=checkyear(saal);



}

int Date:: getdate()
{

return date;
}

int Date:: getmonth()
{
	return month;
}
int Date:: getyear()
{

return year;
}

bool Date:: operator == (const Date & xyz)
{
	if((date==xyz.date) && (month==xyz.month) && (year==xyz.year))
	{
		return true;
	}
	else
		return false;
}

Date& Date:: operator+(const int & x)
{
	date=date+x;
	
	if (month>12)
	{	
		month=month-12;
		year=year+1;

	}

	if (date>30)
	{
		date=date-30;
		month=month+1;

	}

	return *this;


}

Date& Date::operator--()
{
	--date;
	if (month<1)
	{	
		month=12-month;
		year=year-1;
	}
	if (date<1)
	{
		date=30-date;
		month=month-1;
	}
	return *this;

}

Date Date::operator--(int u){

	Date temp=*this;
	date=date-1;
	if (date<1)
	{
		date=30-date;
		month=month-1;
	}
	if (month<1)
	{
		month=12-month;
		year=year-1;

	}

	return temp;

}

int Date::operator[](int x)
{
	if(x==0)
		return date;
	else if(x==1)
		return month;
	else if (x==2)
		return year;
	else return 0;


}