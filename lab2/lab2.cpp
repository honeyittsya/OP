#include <iostream>

int main(int argc, char** argv) {
	float x_1, x_2, y_1, y_2, z_1, z_2;
	float dx, dy, dz;

	std::cout << "Enter first vector  --> ";
	std::cin >> x_1 >> y_1 >> z_1;
	
	std::cout << "Enter second vector --> ";
	std::cin >> x_2 >> y_2 >> z_2;

	dx = x_2 / x_1;
	dy = y_2 / y_1;
	dz = z_2 / z_1;
	
	if ( dx == dy && dy == dz && dz == dx) {
		std::cout << "Vectors are collinear" << std::endl;
	}
	else {
		std::cout << "Vectors are not collinear" << std::endl;
	}

	return 0;
}