#include <iostream>

using namespace std;
int peregruz(int mass[], int size)
{
    int max = 0;

	for (int i = 0; i < size; i++)
	{
		if (mass[i] > max )
		{
			max = mass[i];
		}
	}
	return max;
}
int peregruz(int mass[][10], int size, int arr)
{
	int max = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; i < arr; i++)
		{
			if (mass[i][j] > max)
			{
				max = mass[i][j];
			}
		}
	}
	return max;
}
int peregruz(int mass[10][10][10], int size, int arr, int mer)
{
	int max = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; i < arr; i++)
		{
			for (int g = 0; g < mer; g++)
			{
				if (mass[i][j][g] > max)
				{
					max = mass[i][j][g];
				}
			}
		}
	}
	return max;
}
int peregruz(int numone, int numtwo)
{
	int max = 0;
	if (numone > numtwo)
	{
		max = numone;
	}	
	else if (numtwo > numone)
	{
		max = numtwo;
	}
	else if (numone == numtwo)
	{
		max = numtwo;
	}
	
	return max;
}
int peregruz(int numone, int numtwo, int numtheree)
{
	int max = 0;
	if (numone > numtwo && numone > numtheree)
	{
		max = numone;
	}
	else if (numtwo > numone && numtwo > numtheree)
	{
		max = numtwo;
	}
	else if (numtheree > numone && numtheree > numtwo)
	{
		max = numtheree;
	}
	else
	{
		max = numone;
	}

	return max;
}


int main()
{
    int mass[10]{ 1,3,4,2002,6,7,8,9,10,11 };
	int mass2[10][10];
	cout << peregruz(mass, 10) << "\n";
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; i < 10; i++)
		{
			mass2[i][j] = rand() % 20;
			cout << mass2[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n" << peregruz(mass2, 10, 10) << "\n";
	int mass3[10][10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; i < 10; i++)
		{
			for (int g = 0; g < 10; g++)
			{
				mass3[i][j][g] = rand() % 21;
				cout << mass3[i][j][g] << " "; // Хз, как вывести в консоль 3 мерных массив
			}
		}
	}
	cout << "\n" << peregruz(mass3, 10, 10, 10) << "\n";
	cout << peregruz(321, 1752) << "\n";
	cout << peregruz(52, 15, 52) << "\n";

}

