// João Vitor Teles Centrone 32033125

#include <iostream>
#include <new>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "pt-br");
	int num, num2,i;
	char option;
		
	cout << "Informe o tamanho do array: ";
	cin >> num;

	int* iPtr = new int[num];

	if (iPtr == nullptr) 
	{
		cout << "Erro, a memoria nao pode ser alocada ";
	}

	else
	{
		for (i = 0; i < num; i++)
		{
			cout << "Informe um número positivo para o elemento " << i << ": ";
			cin >> iPtr[i];
			if (iPtr[i] < 0)
				iPtr[i] = -1;
			else
				iPtr[i] = iPtr[i];
		}

		for (i = 0; i < num; i++)
		{
			cout << "array [" << i << "]: " << iPtr[i] << " ";
		}
		if (num == i)
		{
			cout << "O limite do array foi atingido.Deseja aumentar o tamanho do array ? (S / N) ";
			cin >> option;

			if (option == 's' || option =='S')
			{
				cout << "Informe o novo tamanho do array (atual: " << num << " ): ";
				cin >> num2;
				int* iPtr2 = new int[num2];
				if (num2 <= num)
				{
					for (i = 0; i < num; i++)
					{
						cout << "array [" << i << "]: " << iPtr[i] << " ";
					}
				}
				else
				{
					for (i = 0; i < num2; i++)
					{
						cout << "Informe um número positivo para o elemento " << i << ": ";
						cin >> iPtr2[i];
						if (iPtr2[i] < 0)
							iPtr2[i] = -1;
						else
							iPtr2[i] = iPtr2[i];
					}
					for (i = 0; i < num2; i++)
					{
						cout << "array [" << i << "]: " << iPtr2[i] << " ";
					}

				}
			}
			
			else
			{
				for (i = 0; i < num; i++)
				{
					cout << "array [" << i << "]: " << iPtr[i] << " ";
				}				
			}
		}
	}
}


