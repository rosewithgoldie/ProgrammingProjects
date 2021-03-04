///*Create a struct called Coordinates with the following members :
//float x;
//float y;
//create an array of 4 Coordinates called quadrilateral.
//Ask the user for 4 x and y values and store them to the 4 slots in the array.
//Calculate the perimeter of the quadrilateral and output it to the console.
//sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
//*/
//
//Group 2 Solution:
//#include <iostream>
//#include <string>
//
//struct Coordinates {
//	float x;
//	float y;
//};
//int main()
//{
//	const int numCoords{ 4 };
//	Coordinates points[numCoords];
//	std::cout << "Give 4 x coordinates for the 4 points: " << std::endl;
//	std::cin >> points[0].x; //Call individually 
//	std::cin >> points[1].x;
//	std::cin >> points[2].x;
//	std::cin >> points[3].x;
//
//	std::cout << "Give 4 y coordinates for the 4 points: " << std::endl;
//	std::cin >> points[0].y;
//	std::cin >> points[1].y;
//	std::cin >> points[2].y;
//	std::cin >> points[3].y;
//
//
//	float perimeter{ sqrt((points[1].x - points[0].x) * (points[1].x - points[0].x) + (points[1].y - points[0].y) * (points[1].y - points[0].y)) }; //first points
//	perimeter += sqrt((points[2].x - points[1].x) * (points[2].x - points[1].x) + (points[2].y - points[1].y) * (points[2].y - points[1].y)); //other points
//	perimeter += sqrt((points[3].x - points[2].x) * (points[3].x - points[2].x) + (points[3].y - points[2].y) * (points[3].y - points[2].y)); //other points
//	perimeter += sqrt((points[0].x - points[3].x) * (points[0].x - points[3].x) + (points[0].y - points[3].y) * (points[0].y - points[3].y)); //other points
//
//	std::cout << perimeter;
//	return 0;
//}
