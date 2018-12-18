#ifndef DATE_H
#define DATE_H

#include <string>
#include <ctime>
using namespace std;

class Date{
	public:
		string getDate(){
			time_t now = time(0);
			string date(ctime(&now));
			return date;	
		}
};

#endif
