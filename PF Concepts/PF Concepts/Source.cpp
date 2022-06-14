#include<iostream>
using namespace std;
void checkPtr(int* pointer) {
	int c = 4;
	*pointer = c;
}
int main() {
	int a = 2;
	int* ptr = &a;
	checkPtr(ptr);
	cout << *ptr << endl;
	cout << a;
}