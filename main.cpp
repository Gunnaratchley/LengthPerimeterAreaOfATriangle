#include <cmath>
#include <iostream>

const double kSquared = 2.0;

const double kDivide = 2.0;

int main()
{
	std::cout << "Enter point one > ";
	auto x1 = 0.0;
	auto y1 = 0.0;
	std::cin >> x1 >> y1;
	std::cout << "Enter point two > ";
	auto x2 = 0.0;
	auto y2 = 0.0;
	std::cin >> x2 >> y2;
	std::cout << "Enter point three > ";
	auto x3 = 0.0;
	auto y3 = 0.0;
	std::cin >> x3 >> y3;

	auto length_side_one = sqrt(pow(x2 - x1, kSquared) + pow(y2 - y1, kSquared));
	std::cout << "Length of side one is : " << length_side_one << std::endl;
	auto length_side_two = sqrt(pow(x3 - x2, kSquared) + pow(y3 - y2, kSquared));
	std::cout << "Length of side two is : " << length_side_two << std::endl;
	auto length_side_three = sqrt(pow(x1 - x3, kSquared) + pow(y1 - y3, kSquared));
	std::cout << "Length of side three is : " << length_side_three << std::endl;

	auto perimeter = length_side_one + length_side_two + length_side_three;
	std::cout << "Perimeter : " << perimeter << std::endl;

	auto semiperimeter = perimeter / kDivide;

	auto area = sqrt(semiperimeter * (semiperimeter - length_side_one) * (semiperimeter - length_side_two) * (semiperimeter - length_side_three));
	std::cout << "Area : " << area << std::endl;
		
	return 0;
}