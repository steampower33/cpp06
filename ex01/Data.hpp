#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data {
public:
	Data();
	Data(const std::string& name);
	const std::string& getName() const;
	~Data();
	
private:
	std::string _name;
	Data(const Data& other);
	Data& operator=(const Data& other);
};

#endif