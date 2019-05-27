#include <bits/stdc++.h>
#include <string>
#include <cstring>
#include <stdlib.h>
using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
	string s1,s2,s3,s4;
	string str24Hours;
	
	s1 =  s.substr(0,2);
	s2 =  s.substr(3,2);
	s3 =  s.substr(6,2);
	s4 =  s.substr(8,2);
		
	int hours = atof(s1.c_str());
	
    if(strcmp(s4.c_str(),"PM\0") == 0)
    {
    	if(hours == 12) //12:45:54PM
    		s1= "12";
		else
		{
			hours += 12;
			s1= std::to_string(hours);
		}
    }
    
    if(strcmp(s4.c_str(),"AM\0") == 0)
    {
    	if(hours == 12)
    		s1="00";
    	else
            s1 = "0"+std::to_string(hours);
        
	}
	
	str24Hours = s1 +":" + s2 +":" + s3;
	return str24Hours;
}


int main(int argc, char** argv) {
	/*
	intput => 12:40:22AM
	output => 00:40:22
	*/
	cout << timeConversion("12:40:22AM") << endl;
	cout << timeConversion("07:05:45PM") << endl;
	cout << timeConversion("06:40:03AM") << endl;
	
	return 0;
}
