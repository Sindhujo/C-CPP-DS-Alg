#include <iostream>
using namespace std;

class cube
{
	public:
		cube(double length);
		double getVolume() const;
		double surfaceArea() const;
		double getLength() const;
		void setLength(double length);

	private:
		double length_;
		//HSLApixel color_;
};

