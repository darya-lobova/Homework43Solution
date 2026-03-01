#include "logic.h"

bool is_vector_unique(int array[DEFAULT_SIZE], int length) {

	bool result = true;

	for (int i = 0; i < length; i++) {
		for (int i = 0; i < length; i++)
		{
			for (int j = i + 1; j < length; j++)

				if (array[i] == array[j]) {
					result = false;
					break;
				}
		}
		if (!result)break;
	}


	return result;
}


void print(string s) {
	cout << s;
}