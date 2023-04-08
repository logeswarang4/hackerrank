/*Given a time in -hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

Example


Return '12:01:00'.


Return '00:01:00'.

Function Description

Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format.

timeConversion has the following parameter(s):

string s: a time in  hour format
Returns

string: the time in  hour format
Input Format

A single string  that represents a time in -hour clock format (i.e.:  or ).

Constraints

All input times are valid
Sample Input

07:05:45PM
Sample Output

19:05:45*/

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string getTwoDigitString(int val)
{
    string shr;
    if(val<10 || val == 0)
        shr = "0" + to_string(val);
    else 
        shr = to_string(val);
    
    return shr;
}
string timeConversion(string s) {
    //s ="12:45:55PM";
    stringstream sstr(s);
    int hr,min,sec;
    char colon;
    string format12;
    string temp;
    while(sstr>>hr>>colon>>min>>colon>>sec>>format12)
    {
        cout<<hr<<colon<<min<<colon<<sec;
        
        if(format12 == "AM")
        {
            if(hr==12)
                hr = 0;
            temp.append(getTwoDigitString(hr));
            cout<< temp<<endl;
            temp =temp + colon;
            cout<< temp<<endl;
            temp.append(getTwoDigitString(min));
            cout<< temp<<endl;
            temp =temp + colon;
            temp.append(getTwoDigitString(sec));
            cout<< temp<<endl;
        }
        else {
            if(hr==12)
                hr = 12;
            else 
                hr = hr +12;
            temp.append(getTwoDigitString(hr));
            cout<< temp<<endl;
            temp =temp + colon;
            cout<< temp<<endl;
            temp.append(getTwoDigitString(min));
            cout<< temp<<endl;
            temp =temp + colon;
            temp.append(getTwoDigitString(sec));
            cout<< temp<<endl;
        }
    }
    return temp;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
