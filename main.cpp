#include <iostream>

int main()
{
	int* a = new int(1);
	int* n = new int(10000 + 1);
	int* count = new int(0);

	while (*a < *n)
	{
		int* b = new int(*a + 1);

		while (*b < *n)
		{
			double* cDouble = new double(pow(pow(*a, 2) + pow(*b, 2), 0.5));
			int* cInt = new int(*cDouble);

			if (*cDouble == *cInt)
			{
				std::cout << "Solution found: a = " << *a << ", b = " << *b << ", c = " << *cInt << std::endl;
				*count = *count + 1;
			}

			delete cDouble;
			delete cInt;
			*b = *b + 1;
		}
		delete b;
		*a = *a + 1;
	}
	std::cout << std::endl << "A total of " << *count << " solutions were found." << std::endl;
	delete a;
	delete n;
	delete count;
	getchar();
	return 0;
}