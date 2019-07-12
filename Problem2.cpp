#include <iostream>
#include <conio.h>

using namespace std;

int main ()
	{
		int arr[100], temp , arrayNumber , x , y; //variables
		
		//user asked to input size and numbers
		cout << "Selection Sorting" << endl;
		cout << "Enter array size: "; cin >> arrayNumber;
		cout << "Enter " << arrayNumber << " numbers: " << endl;
			
			for ( x=0; x < arrayNumber; x++)
				{
					cin >> arr [x];
				}
		
		cout << " " << endl;
		cout << "Sorting array using selection sort..."; //selection sort is used
		cout << " " << endl;
		cout << " " << endl;
		
		//formulas for selection sort
			for ( x=0; x < arrayNumber; x++)
				{
				for  ( y = x + 1; y < arrayNumber; y++)
					{
						if (arr[x] > arr [y]) {
							
							temp = arr[x];
							arr[x] = arr [y];
							arr[y] = temp;
						}
					
						
					}
				}
				
		cout << "Sorted Array: ";
			
			for (x = 0; x < arrayNumber; x++)
				{
					cout << arr[x] << " "; //output of the sorted numbers
				}
		cout << endl;
				
	system ("pause");
	return 0; 
		
	}
