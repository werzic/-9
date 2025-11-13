

#include <iostream>
using namespace std;

int main()
{
		setlocale(0, "");

		int n;
		int i = 1;
		cin >> n;
		while (i < n ) {
			cout << "Цикл отработал. Круг:" << i << endl;
			i = i + 1;
		}

    return 0;
}


