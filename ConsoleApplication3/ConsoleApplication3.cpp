#include <iostream>
#include <vector>
#include <array>

std::vector<long long> numbers;
void ebanina()
{
	long long chislo;
	std::cin >> chislo;
	long long del_ostacha = 10, del_delenie = 1;
	int i = 0;
	long long ostacha, delenie;

	int a = 1;
	while (i == 0)
	{
		ostacha = chislo % del_ostacha;
		delenie = ostacha / del_delenie;
		numbers.push_back(delenie);
		a++;
		del_ostacha *= 10;
		del_delenie *= 10;
		if (ostacha / chislo == 1)
		{
			break;
		}

	}
	int u = 0;
	for (long long i = numbers.size() - 1; i >= 0; i--)
	{

		u++;
		std::cout << "Chislo#" << u << " " << numbers[i] << std::endl;
	}

}

int main() 
{
	ebanina();
	int a;
	std::cin >>  a;
	
}