#include <iostream>
#include <cctype>

using namespace std;

int main() {

	char kitu;
	
	cin >> kitu;
	
	cout << "Ma ASCII cua ki tu " << kitu << " la " << (int)kitu << endl;
	
	if (isupper(kitu)) {
		kitu = tolower(kitu);
		cout << "Ki tu viet thuong la " << kitu;
	}
	else {
		kitu = toupper(kitu);
		cout << "Ki tu viet hoa la " << kitu;
	}
	
}
