#include <iostream>
#include "config.hpp"

int main(){
	std::cout<<writeConf("config.conf", "configred","true")<<"\n";
	
	std::string str;
	std::cout<<readConf("config.conf", "bruh",str)<<"\n"<<str;
}
