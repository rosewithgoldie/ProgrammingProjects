///*
//Create and address struct with the following elements:
//int streetNumber;
//string street;
//string city;
//string state;
//int zipcode;
//create an array called block that holds 3 address. Ask the user for the three addresses.
//*/
//
//#include <iostream>
//#include <string>
//
//struct Address {
//	int streetNumber;
//	std::string street;
//	std::string city;
//	std::string state;
//	int zipcode;
//};
//
//
////std::ostream& operator<<(std::ostream& os, const Address& a) {
////	return os << a.streetNumber << a.street << a.city << a.state << a.zipcode;
////}
//
//
//int main() {
//	/*const int block{ 3 };*/ //create unchanged integer
//	Address block[3]; //create array of address of size 3
//
//	std::cout << "Enter Address 1: " << std::endl;
//	std::cin >> block[0].streetNumber;
//	std::cin >> block[0].street;
//	std::cin >> block[0].city;
//	std::cin >> block[0].state;
//	std::cin >> block[0].zipcode;
//
//	std::cout << "Enter Address 2: " << std::endl;
//	std::cin >> block[1].streetNumber;
//	std::cin >> block[1].street;
//	std::cin >> block[1].city;
//	std::cin >> block[1].state;
//	std::cin >> block[1].zipcode;
//
//	std::cout << "Enter Address 3: " << std::endl;
//	std::cin >> block[2].streetNumber;
//	std::cin >> block[2].street;
//	std::cin >> block[2].city;
//	std::cin >> block[2].state;
//	std::cin >> block[2].zipcode;
//
//	std::cout << "Address 1: " << std::endl;
//
//	std::cout << block[0].streetNumber << std::endl;
//	std::cout << block[0].street << std::endl;
//	std::cout << block[0].city << std::endl;
//	std::cout << block[0].state << std::endl;
//	std::cout << block[0].zipcode << std::endl;
//
//	std::cout << "Address 2: " << std::endl;
//
//	std::cout << block[1].streetNumber << std::endl;
//	std::cout << block[1].street << std::endl;
//	std::cout << block[1].city << std::endl;
//	std::cout << block[1].state << std::endl;
//	std::cout << block[1].zipcode << std::endl;
//
//	std::cout << "Address 3: " << std::endl;
//
//	std::cout << block[2].streetNumber << std::endl;
//	std::cout << block[2].street << std::endl;
//	std::cout << block[2].city << std::endl;
//	std::cout << block[2].state << std::endl;
//	std::cout << block[2].zipcode << std::endl;
//
//	return 0;
//
//}
//
