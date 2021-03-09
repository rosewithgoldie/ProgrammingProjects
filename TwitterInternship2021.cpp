//This program will help social media platform, Twitter choose 4 Summer 2021 interns at their headequarters. 
//Applicants must meet listed qualifications printed onto the console. 
//If not, the applicant will not be chosen.
//There could also be 2 additional summer 2021 interns.

#include <iostream>
#include <string>
#include <vector> //Where interns are stored

const int totalInterns{ 4 }; //Total interns ae picked
const int potentialInterns{ 2 }; //Two more interns maybe picked

//Store multiple data types
struct FinalInterns {
	std::string firstName;
	std::string lastName;
	std::string classification;
	std::string major;
	double GPA;
};

struct PossibleInterns {
	std::string firstNamePI;
	std::string lastNamePI;
};

int main() //Main Function
{
	char userInput1;
	unsigned int i;

	//Printing Qualifications
	std::cout << "Twitter is looking for vibrant, self-starting software engineers for Summer 2021!" << std::endl << std::endl;
	std::cout << "Qualifications: \n";
	std::cout << "Must be a Junior or Senior.\n";
	std::cout << "Must know Python.\n";
	std::cout << "Qualified applicants will be selected: March 01, 2021.\n";
	std::cout << "Only four will be selected. Good Luck!" << std::endl << std::endl;

	//Creating a vector and a while loop for hiring process.
	//In this process, the hiring directors will review all applicants based on the qualifications listed above.

	std::vector<FinalInterns> finalApplicants; //holds all intern applications
	std::vector<PossibleInterns> callBacks;
	std::string userInput; //enter interns information based off the struct

	userInput1 = 'y';
	std::cout << "Phase 1 hiring process will now begin." << std::endl; //Print statement
	while (userInput1 == 'y') { //while loop
		std::cout << "Please enter selected candidates's full name:\n";
		finalApplicants.push_back(FinalInterns());
		std::cin >> finalApplicants.back().firstName >> finalApplicants.back().lastName;
		std::cout << "Major: ";
		std::cin >> finalApplicants.back().major;
		std::cout << "GPA: ";
		std::cin >> finalApplicants.back().GPA;
		std::cout << "Is the candidate a Junior or Senior? (y/n): ";
		std::cin >> userInput;
		if (userInput == "n") {//If statements
			std::cout << "Not Qualified.";
		}
		else {
			std::cout << "In order to move forward, the candidate must code in Python.\n";
		}
		std::cout << "Does this Junior or Senior candidate program in Python?\n";
		std::cin >> userInput;
		if (userInput == "n") {
			std::cout << "Not Qualified.";
		}
		else {
			std::cout << "Candidate has been selected for Twitter's 2021 Summer Internship.\n";
			finalApplicants.push_back(FinalInterns());
		}
		std::cout << "Would you like to enter another candidate? (y/n)\n";
		std::cin >> userInput;
		if (userInput == "n") {
			std::cout << "The selection process is terminated.";
			break;
		}
		else {
			std::cout << "Your may choose another candidate until, you've reached the final four interns.";
		}
	}

	std::cout << "Here are the final selected applicants for Twitter's Summer 2021 Internship." << std::endl;
	for (int i = 0; i < finalApplicants.size(); i++) {
		std::cout << "Congratulations " << finalApplicants.at(i).firstName << " " << finalApplicants.at(i).lastName << std::endl;
	}
	std::cout << "Your internship will begin: May 22, 2021." << std::endl << std::endl;


	userInput1 = 'y';
	while (userInput1 == 'y') {
		std::cout << "Would you like to enter a possible callback? (y/n): ";
		std::cin >> userInput1;
		if (userInput1 == 'y') {
			std::cout << "Enter two possible callbacks: " << std::endl;
			callBacks.push_back(PossibleInterns());
			std::cin >> callBacks.back().firstNamePI >> callBacks.back().lastNamePI;
			//std::cin >> callBacks.back().firstNamePI >> callBacks.back().lastNamePI;
		}
		else {
			std::cout << "Final candidates have been choosen.";
		}
	}

	std::cout << std::endl;

	//Run callbacks
	std::cout << "Callbacks: " << std::endl;
	for (int i{ 0 }; i < callBacks.size(); ++i) {

		std::cout << callBacks.at(i).firstNamePI << " " << callBacks.at(0).lastNamePI;
		//std::cout << callBacks.at(1).firstNamePI << " " << callBacks.at(1).lastNamePI;

	}

	std::cout << std::endl;


	return 0;
}
