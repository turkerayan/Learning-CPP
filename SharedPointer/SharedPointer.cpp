// SharedPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Ogrenci
{
public:
	int dersNotu{};

	Ogrenci()
	{
		std::cout << "Yapici fonsksiyon calisti." << std::endl;
	}
	~Ogrenci()
	{
		std::cout << "Yikici fonsksiyon calisti." << std::endl;
	}
};


int main()
{
	std::shared_ptr<Ogrenci> ogrenci1ptr = std::make_shared<Ogrenci>();

	std::cout << ogrenci1ptr.use_count() << std::endl;//1 bu nesneyi i?aret eden kaç tane pointer oldu?unu gösterir

	

    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
