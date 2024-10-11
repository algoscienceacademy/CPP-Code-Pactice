/*
* Problem 7: Display Current Date and Time
* Author: Shahrear Hossain
* github: algoscienceacademy
* Cradit: Manish Bhojasia
* Date: 10 October 2024
* GPL-Lassar Licence

*/

/*
* C++ Program to Print Current Date and Time
* 
*
*/

//#include <iostream>
//#include <ctime>
//#include <iomanip>
//#define _CRT_SECURE_NO_WARNINGS 
//
//std::string month[] = { "jan","Feb","Mar","Apr","May","jun","july","Aug","Sep","Oct","Nov","Dec"};
//std::string day[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
//
//int main() 
//{
//	time_t timer;
//	tm  time;
//	const int BASE_YEAR = 1900;
//
//	std::time(&timer);
//    localtime_s(&time,&timer);
//
//	std::cout << "Current date "
//		<< day[time.tm_wday]
//		<< ""
//		<< month[time.tm_mon]
//		<< ""
//		<< time.tm_mday
//		<< ""
//		<< (time.tm_year + BASE_YEAR);
//
//	std::cout << "\n Current time"
//		<< std::setw(2)
//		<< std::setfill('0')
//		<< time.tm_hour
//		<< " : "
//		<< std::setw(2)
//		<< std::setfill('0')
//		<< time.tm_min
//		<< " : "
//		<< std::setw(2)
//		<< std::setfill('0')
//		<< time.tm_sec;
//	return 0;
//		 
//}

//#include <iostream>
//#include <ctime>
//#include <iomanip>
//#define _CRT_SECURE_NO_WARNINGS 
//
//std::string month[] = { "jan","Feb","Mar","Apr","May","jun","july","Aug","Sep","Oct","Nov","Dec" };
//std::string day[] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
//
//int main()
//{
//	time_t timer;
//	tm*  time;
//	const int BASE_YEAR = 1900;
//
//	std::time(&timer);
//	time = localtime(&timer);
//
//	std::cout << "Current date "
//		<< day[time->tm_wday]
//		<< ""
//		<< month[time->tm_mon]
//		<< ""
//		<< time->tm_mday
//		<< ""
//		<< (time->tm_year + BASE_YEAR);
//
//	std::cout << "\n Current time"
//		<< std::setw(2)
//		<< std::setfill('0')
//		<< time->tm_hour
//		<< " : "
//		<< std::setw(2)
//		<< std::setfill('0')
//		<< time->tm_min
//		<< " : "
//		<< std::setw(2)
//		<< std::setfill('0')
//		<< time->tm_sec;
//	return 0;
//
//}

