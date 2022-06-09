//
// Created by bgarrido42 on 6/8/22.
//

#ifndef CPP_KAREN_HPP
#define CPP_KAREN_HPP

#include <iostream>

class Karen {
public:
	Karen();
	void complain(std::string level);
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};


#endif //CPP_KAREN_HPP
