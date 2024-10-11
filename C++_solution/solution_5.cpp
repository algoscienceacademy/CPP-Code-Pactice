
/*
* Problem 5:  Reverse a Number without using Recursion
* Author: Shahrear Hossain
* github: algoscienceacademy
* Cradit: Manish Bhojasia
* Date: 10 October 2024
* GPL-Lassar Licence

*/

/*
* While Loop Using
*/

//#include <iostream>
//using namespace std;
//int main()
//{
//	int num,r, temp, rev = 0;
//	cout << " Enter a number";
//	cin >> num;
//	temp = num;
//	while ( temp != 0) 
//	{
//		rev = rev * 10 + temp % 10;
//		temp /= 10;
//	}
//	cout << "\n The reverse of" << num << " is " << rev;
//	return 0;
//}

/*
* Using For Loop

*/

//#include <iostream>
//using namespace std;
//int main()
//{
//	int num, rev = 0, temp;
//	cout << "enter the number";
//	cin >> num;
//	for (temp = num;  temp !=0;  temp /= 10) 
//	{
//		rev = rev * 10 + temp % 10;
//	}
//	cout << "\n The Reverse of" << num << " is " << rev;
//}

/*
* Using Function

*/

//#include <iostream>
//using namespace std;
//
//int reverse(int num)
//{
//	int rev = 0;
//
//	while (num != 0)
//	{
//		rev = rev * 10 + num % 10;
//		num /= 10;
//	}
//	return rev;
//
//}
//
//int main()
//{
//	int num;
//	cout << "Enter a number";
//	cin >> num;
//	int rever = reverse(num);
//	cout << "\n the reverse number " << num << " is :" << rever;
//	return 0;
//}





















