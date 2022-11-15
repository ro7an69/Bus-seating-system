#include "stop.h"
#include <string>

void stop::setName(string stop_name) {
	this->stop_name = stop_name;
}
string  stop::getName() const {
	return stop_name;
}
void stop::disp() {
	cout << "passengers entering " << stop_name << endl;
}