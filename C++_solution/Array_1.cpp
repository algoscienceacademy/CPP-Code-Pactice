/*
* Problem 1:  Find Largest and Smallest Element of an Array
* Author: Shahrear Hossain
* github: algoscienceacademy
* Cradit: Manish Bhojasia
* Date: 23 October 2024
* GPL-Lassar Licence

*/

#include <iostream>
using namespace std; 

int main()
{
	int arr[10], max, min, i, n;
	cout << "Enter the size of array :";
	cin >> n;
	cout << "Enter the elementv of an array";

	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	max = arr[0];
	for (i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	min = arr[0];
	for (i = 0; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	cout << "Largest element :" << max;
	cout << "Smallest element " << min;
	return 0;
	

}

