#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	std::string TheString;
	std::cout << "Escriba algo: " << std::endl;



	std::getline(std::cin, TheString);

	int length = 0;
	for (int i = 0; i < TheString.size(); i++)
	{
		if (TheString.at(i) == '0' ||
			TheString.at(i) == '1' ||
			TheString.at(i) == '2' ||
			TheString.at(i) == '3' ||
			TheString.at(i) == '5' ||
			TheString.at(i) == '6' ||
			TheString.at(i) == '7' ||
			TheString.at(i) == '8' ||
			TheString.at(i) == '9')
			length++;
	}
	std::cout << "El numero de digitos es: " << length;
	std::cout << "\n ";

	return 0;


	
}

