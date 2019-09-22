#include "cube.h"

cube::cube(double length) {
	length_ = length;
}
double  cube::getVolume() const {
	double  vol;
	vol = length_ * length_ * length_;
	cout << " <<volume is :" << vol << endl;
	return vol ;
}
double  cube::surfaceArea() const {
	double  area;
	area = 6 * length_ * length_;
	cout << " <<area is :" << area << endl;
	return area;
}

double cube::getLength() const {
	return length_;
}
void cube::setLength(double  length) {
	length_ = length;
	cout << " <<new length_ set to :" << length_ << endl;

}
