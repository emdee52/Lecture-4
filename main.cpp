#include <iostream>
#include "functions_to_implement.cpp"

int main(){
	std::vector<int> re = {3, 4, 5};
	std::vector<int> rex = AddN(re, 15);
	std::cout << rex[3] << std::endl; // int AddN function

	std::cout << Sign(4.0) << std::endl; // double Sign function
    std::cout << Sign(-4) << std::endl; // int Sign function
}