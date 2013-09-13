#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

//TODO
/*
	Modify arrtemp.cpp by removing the preassignment of the data for each array and by adding five new function templates:
		(WARNING: Make sure to include the line template <class T> before each function template)
		1. allow the user to enter the array data from the keyboard
		2. print the smallest and second smallest values for an array *without sorting*
			You may assume that each array contains distinct data, that is no duplicates
		3. sort the array data in descending order
		4. save the array data to a text file
		5. retrieve the array data from the text file

	Output should include the smallest and second smallest values for each array, along with all three arrays being printed out in descending order twice:
		Once BEFORE the text file is saved
		Once AFTER the array is retrieved from the text file
	Each Array should be saved to a separate text file
	You will also need to show all three text files which you can do from any text editor when submitting this program
*/

//function template to print an array
//works for multiple data types

template <class T>
void printarray (T *a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "  ";
	cout << endl;
}

template <class T>
void loadArray( T *a, const int n)
{
    for( int i = 0; i < n; i++ )
    {
        cin >> a[i];
    }
    cin.ignore(); //will need this for strings
}

int main()
{
	const int n1 = 5, n2 = 7, n3 = 6;
	int a[n1];
	float b[n2];
	char c[n3];

	cout << "Enter the integer array" << endl;
	loadArray(a, n1);

	cout << "Enter the float array" << endl;
	loadArray(b,n2);

	cout << "Enter a string" << endl;
	loadArray(c,n3);

	return 0;
}

/*
the integer array
2  4  6  8  10
the float array
1.1  2.2  3.3  4.4  5.5  6.6  7.7
the string is
H  E  L  L  O
*/