// Degiskenler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
	void mesage() {
		std::cout << "Merhaba" << std::endl;
	}
	inline int topla(int sayi1, int sayi2) {
		return sayi1 + sayi2;
	}

	int topla(int sayi1, int sayi2);

		int main()
	{
		int sayi1 = 5;
		int sayi2 = 10;
		int toplam = sayi1 + sayi2;
		std::cout << "Toplam: " << toplam << std::endl;
		std::cout << "Hello World!\n";
		float sayi3{ 5.5f };
		std::cout << "Sayi3: " << sayi3 << std::endl;

		int8_t sayi4{ 5 };

		auto sayi5 = 5;

		int sayi6(5);

		bool isActive{ true };

		const int sabitSayi{ 5 };

		int a = static_cast<int>(5.5f);
		int f;

		std::cin >> f;
		_Format_string_impl_(f);

		std::string isim = "Mehmet";

	}

int topla(int sayi1, int sayi2) {
	return sayi1 + sayi2;
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
