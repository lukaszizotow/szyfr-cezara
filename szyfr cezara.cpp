
#include <iostream>

int main()
{
	void szyfruj(int klucz, char tab[])
	{
		int dl = strlen(tab);
		if (!(klucz >= -26 && klucz <= 26)) return;

		if (klucz >= 0)
			for (int i = 0; i < dl; i++)
				if (tab[i] + klucz <= 'z')
					tab[i] += klucz;
				else
					tab[i] = tab[i] + klucz - 26;
		else
			for (int i = 0; i < dl; i++)
				if (tab[i] + klucz >= 'a')
					tab[i] += klucz;
				else
					tab[i] = tab[i] + klucz + 26;
	}
    
}
