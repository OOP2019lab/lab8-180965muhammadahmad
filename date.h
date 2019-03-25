#include <iostream>
#include <string>
using namespace std;

class Date
{
	friend ostream& operator<<( ostream & xyz, const Date & a)
	{
		static string monthNames[13] = { " ", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
		xyz<<monthNames[a.month];
		xyz<<","<<a.date<<" , ";
		xyz<<a.year;
		xyz<<endl;
		return xyz;
	}
	friend istream &operator>>( istream  & xyz, Date& a)
	{
		
		xyz>>a.date;
		xyz>>a.month;
		xyz>>a.year;
		return xyz;
	}
private:

	int date;
	int month;
	int year;
	int checkdate(int x);
	int checkmonth(int y);
	int checkyear(int z);
public:
	Date();
	Date (int maheena,int tarekh, int saal);
	int getdate();
	int getmonth();
	int getyear();
	bool operator == (const Date&);
	Date& operator+(const int&);
	Date& operator--();
	Date operator--(int );
	int operator[](int x);





};