///*
//Make an empty petition form.
//
//Ask the user how many responses are expected.
//
//
//Loop through that many times and print "Name:___________ Signature:___________" on a single line for each expected response.
//
//
//*/
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//struct Signatures {
//	std::string firstName;
//	std::string lastName;
//	std::string userSignature = firstName + " " + lastName;
//};
//
//int main() {
//
//	std::vector<Signatures> petition;
//	unsigned int i;
//
//	std::cout << "This petition form regards to bring back vegan cookies." << std::endl;
//	std::cout << "Every document form can hold five signatures per page." << std::endl;
//	std::cout << "Have person enter their first and last name: " << " Good Luck!" << std::endl << std::endl;
//
//	std::cout << "Enter the full name: " << "Sign your name next to the printed name (type in your name). " << std::endl;
//	petition.push_back(Signatures());
//	std::cin >> petition.back().firstName >> petition.back().lastName >> petition.back().userSignature;
//
//	petition.push_back(Signatures());
//	std::cin >> petition.back().firstName >> petition.back().lastName >> petition.back().userSignature;
//
//	petition.push_back(Signatures());
//	std::cin >> petition.back().firstName >> petition.back().lastName >> petition.back().userSignature;
//
//	petition.push_back(Signatures());
//	std::cin >> petition.back().firstName >> petition.back().lastName >> petition.back().userSignature;
//
//	petition.push_back(Signatures());
//	std::cin >> petition.back().firstName >> petition.back().lastName >> petition.back().userSignature;
//
//	std::cout << std::endl;
//
//	std::cout << "Signatures: " << std::endl;
//
//	for (int i{ 0 }; i < petition.size(); i++) {
//
//		std::cout << petition.at(i).firstName << " " << petition.at(i).lastName << " " << petition.at(i).userSignature;
//	}
//	
//	std::cout << std::endl;
//
//	return 0;
//}
//
