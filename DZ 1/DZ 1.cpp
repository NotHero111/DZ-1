#include <iostream>

int main()
{
	short int a = 222;

	int b = 78;

	long long c = 5252525252;

	char y = 'h';

	bool s = false;

	float v = 6212323;

	double p = 66666677776;

	std::cout << a << std::endl << b << std::endl;

	std::cout << c << std::endl << y << std::endl;

	std::cout << s << std::endl << v << std::endl;

	std::cout << p << std::endl;

	enum Game_Buttons { Empty, Cross, Zero };
	char Game_Symbols[] = { ' ','X','O' };


	std::cout << "The empiness at the beginning fills the entire field" << Game_Symbols[Empty] << std::endl;
	std::cout << "The cross is placed in the empines " << Game_Symbols[Cross] << std::endl;
	std::cout << "The Zero is placed in the empines" << Game_Symbols[Zero] << std::endl;
	return 0;
}