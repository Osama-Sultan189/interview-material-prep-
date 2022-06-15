#include<iostream>
using namespace std;
//void checkPtr(int* pointer) {
//	int c = 4;
//	*pointer = c;
//}
void printDuplicates(int arr[], int n)
{
	int i;
	// Flag variable used to
	// represent whether repeating
	// element is found or not.
	int fl = 0;
	for (i = 0; i < n; i++) {
		// Check if current element is
		// repeating or not. If it is
		// repeating then value will
		// be greater than or equal to n.
		if (arr[arr[i] % n] >= n) {
			// Check if it is first
			// repetition or not. If it is
			// first repetition then value
			// at index arr[i] is less than
			// 2*n. Print arr[i] if it is
			// first repetition.
			if (arr[arr[i] % n] < 2 * n) {
				cout << arr[i] % n << " ";
				fl = 1;
			}
		}
		// Add n to index arr[i] to mark
		// presence of arr[i] or to
		// mark repetition of arr[i].
		arr[arr[i] % n] += n;
	}
	// If flag variable is not set
	// then no repeating element is
	// found. So print -1.
	if (!fl)
		cout << "-1";
}
void removeDuplicates(int arr[],int size) {
	int* newArray = new int[size];
	int count = 1;
	newArray[0] = arr[0];
	for (int i = 1; i < size; i++) {
		bool check = true;
		for (int j = 0; j < i; j++) {
			if (newArray[j] == arr[i])
			{
				check = false;
				break;
			}
		}
		if (check) {
			newArray[count++] = arr[i];
		}
	}

	for (int i = 0; i < count; i++) {
		cout << newArray[i] << " ";
	}
}
int main() {
	//**********pointers pass by value


	/*if you change the
	value of the pointer in the function body, that change will not be reflected in the external
	pointer that will still point to the old object.But you can change the value of the object
	pointed to.*/
	/*int a = 2;
	int* ptr = &a;
	checkPtr(ptr);
	cout << *ptr << endl;
	cout << a;*/



	//***********Pointers size and array size


	/*
	Size of an array is the number of elements multiplied by the type of element, that is why
	we get sizeof arri as 12 and sizeof arrc as 3. Size of a pointer is fixed for a compiler. All
	pointer types take the same number of bytes for a compiler. That is why we get 4 for
	both ptri and ptrc.
	*/
	/*int arri[] = { 1, 2 ,3 };
	int* ptri = arri;

	char arrc[] = { 1, 2 ,3 };
	char* ptrc = arrc;

	cout << "sizeof arri[] = " << sizeof(arri) << endl;
	cout << "sizeof ptri =" << sizeof(ptri) << endl;

	cout << "sizeof arrc[] = " << sizeof(arrc) << endl;
	cout << "sizeof ptrc =" << sizeof(ptrc) << endl;*/



	//**************Void pointer and NULL pointer
	//A void pointer is a pointer that has no associated data type with it.A void pointer can hold address of any typeand can be typcasted to any type. 
	//int a = 10; 
	//char b = 'x';
	//void* p = &b; 
	//cout << *(char*)p;
	////pointing to int
	//p = &a;
	//cout << *(int*)p;
	// void pointer holds address of int 'a' p = &b; // void pointer holds address of char 'b'

	//******Remove duplicates from array

	/*int Input[8] = { 0,1,2,1,3,2,3,5 };
	removeDuplicates(Input, 8);*/



	//******Print duplicates from array


	/*int Input[8] = { 0,1,2,1,3,2,3,5 };
	printDuplicates(Input, 8);*/
}