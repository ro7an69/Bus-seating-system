#include "matrix.h"
#include <string>
class stop :public matrix {
public:
	string stop_name;
	void  setName(string stop_name);
	string getName() const;
	void disp();

};