// BelekYönetimi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Ogrenci
{
public:
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
    // Heap de çalışmak için pointer ile çalışmak gerekiyor
    
	int* sayi1 = new int(5);
	int* sayi2 = new int(10);

    *sayi1 = 10;

	delete sayi1;// silinmezse program hafızayı doldurur ve çöker

	Ogrenci* ogrenci1 = new Ogrenci();

	delete ogrenci1; //Silme işlemi yapılmazse program sonuna kadar kalıyor ve program kapatılırken dahi yıkıcı metot çalışmaz
	{
		Ogrenci ogrenci2;

		Ogrenci* ogrenci3 = new Ogrenci;

		delete ogrenci3; // burada hata vermez çünkü ogrenci3 burada tanımlı
	}
	//delete ogrenci3; // burada hata verir çünkü ogrenci3 burada tanımlı değil


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
