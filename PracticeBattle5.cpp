//#include <iostream>
//
//	enum class Toppings { Pepperoni, MeatLovers, Cheese };
//	enum class Size { Small, Medium, Large };
//	enum class Crust { Thin, Thick, HandTossed };
//
//	struct Pizza {
//		Toppings toppings;
//		Size size;
//		Crust crust;
//	};
//	
//	int main() {
//
//		Pizza myOrder[3];
//
//		std::cout << "Friday's Deal Orders: " << std::endl;
//
//		myOrder[0] = { Toppings::Pepperoni, Size::Large, Crust::Thin };
//		myOrder[1] = { Toppings::Cheese, Size::Small, Crust::HandTossed };
//		myOrder[2] = { Toppings::MeatLovers, Size::Medium, Crust::Thick };
//
//		for (int i = 0; i < 3; i++)
//		{
//			switch (myOrder[i].toppings)
//			{
//			case Toppings::Pepperoni:
//				std::cout << "Pepperoni ";
//				break;
//
//			case Toppings::MeatLovers:
//				std::cout << "MeatLovers ";
//				break;
//
//			case Toppings::Cheese:
//				std::cout << "Cheese ";
//				break;
//			}
//			
//			switch (myOrder[i].size)
//				{
//				case Size::Small:
//					std::cout << "Small ";
//					break;
//
//				case Size::Medium:
//					std::cout << "Medium ";
//					break;
//
//				case Size::Large:
//					std::cout << "Large ";
//					break;
//				}
//
//			
//					switch (myOrder[i].crust)
//					{
//					case Crust::Thin:
//						std::cout << " Thin";
//						break;
//
//					case Crust::Thick:
//						std::cout << " Thick";
//						break;
//
//					case Crust::HandTossed:
//						std::cout << " HandTossed";
//						break;
//					default:
//						break;
//					}
//					std::cout << std::endl;
//					
//				
//			
//		}
//		return 0;
//	}
