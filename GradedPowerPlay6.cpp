///*
//Create and address struct with the following elements:
//int streetNumber;
//string street;
//string city;
//string state;
//int zipcode;
//create a vector called block that holds 3 address. Ask the user for the three addresses and push them onto the vector!
//*/
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//struct Address {
//	int streetNumber;
//	std::string street;
//	std::string city;
//	std::string state;
//	int zipCode;
//};
//
//int main() {
//
//	std::vector<Address> block;
//	unsigned int i;
//
//	std::cout << "Enter three addresses: " << std::endl;
//	block.push_back(Address());
//	std::cin >> block.back().streetNumber >> block.back().street >> block.back().city >> block.back().state >> block.back().zipCode;
//
//	block.push_back(Address());
//	std::cin >> block.back().streetNumber >> block.back().street >> block.back().city >> block.back().state >> block.back().zipCode;
//
//	block.push_back(Address());
//	std::cin >> block.back().streetNumber >> block.back().street >> block.back().city >> block.back().state >> block.back().zipCode;
//
//	std::cout << std::endl;
//
//	std::cout << "Addresses: ";
//	for (int i{ 0 }; i < block.size(); ++i) {
//
//		std::cout << block.at(i).streetNumber << " "; 
//		std::cout << block.at(i).street << " ";
//		std::cout << block.at(i).city << " ";
//		std::cout << block.at(i).state << " ";
//		std::cout << block.at(i).zipCode << std::endl;
//	}
//	std::cout << std::endl;
//
//	return 0;
//}