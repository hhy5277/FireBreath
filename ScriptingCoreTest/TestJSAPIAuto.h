/**********************************************************\ 
Original Author: Georg Fritzsche

Created:    November 7, 2009
License:    Eclipse Public License - Version 1.0
            http://www.eclipse.org/legal/epl-v10.html

Copyright 2009 Georg Fritzsche, Firebreath development team
\**********************************************************/

#include <string>
#include <sstream>
#include "JSAPIAuto.h"

class TestObjectJSAPIAuto : public JSAPIAuto
{
public:
	virtual ~TestObjectJSAPIAuto() {}

	TestObjectJSAPIAuto()
	{
		registerMethod("returnString",	make_method(this, &TestObjectJSAPIAuto::returnString));
		registerMethod("intToString",	make_method(this, &TestObjectJSAPIAuto::intToString));
		registerMethod("sumOf",			make_method(this, &TestObjectJSAPIAuto::sumOf));
		registerMethod("concatenate",	make_method(this, &TestObjectJSAPIAuto::concatenate));
	}

	std::string returnString(const std::string& s)
	{
		return s;
	}

	std::string intToString(int i)
	{
		std::stringstream ss;
		ss << i;
		return ss.str();
	}

	int sumOf(int a, int b)
	{
		return a+b;
	}

	std::string concatenate(const std::string& a, const std::string& b)
	{
		return a+b;
	}
};
