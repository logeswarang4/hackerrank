#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    string s;
    //getline(cin,s);
    
    
    while(getline(cin,s)) {
        stringstream str(s);
    char splitCombine;
    char colon;
    char classMethod;
    string sstring;
        
    while(str>>splitCombine>>colon>>classMethod>>colon>>sstring)
    {
        if(splitCombine == 'S')
        {
            string res;
            for(int i=0; i <sstring.size(); i++)
            {
                if(sstring[i] >= 65 && sstring[i] <= 90)
                {
                    res.append(" ");
                    char c = std::tolower(sstring[i]);
                    res = res + c;
                }
                else 
                    res = res + sstring[i] ;
            }
            cout<<res<<endl;
        }
        else if(splitCombine == 'C')
        {
            if(classMethod == 'M')
            {
                string res;
                char c = std::tolower(sstring[0]);
                res = res + c;
            for(int i=1; i <sstring.size(); i++)
            {
                if(sstring[i] == ' ')
                {
                    char c = std::toupper(sstring[i+1]);
                    res = res + c;
                    i++;
                }
                else 
                    res = res + sstring[i] ;
            }
            res.append("()");
            cout<<res<<endl;
            }
            else if(classMethod == 'C')
            {
                string res;
                char c = std::toupper(sstring[0]);
                res = res + c;
                bool set = false;
            for(int i=1; i <sstring.size(); i++)
            {
                if(set)
                    {
                      char c = std::toupper(sstring[i]);
                    res = res + c;
                    set = false;
                    }
                if(sstring[i] == ' ')
                {
                    set = true;
                }
                else 
                    res = res + sstring[i] ;
            }
            //res.append("()");
            cout<<res<<endl;
            }
            else if(classMethod == 'V')
            {
              string res;
                char c = std::tolower(sstring[0]);
                res = res + c;
            for(int i=1; i <sstring.size(); i++)
            {
                if(sstring[i] == ' ')
                {
                    char c = std::toupper(sstring[i+1]);
                    res = res + c;
                    i++;
                }
                else 
                    res = res + sstring[i] ;
            }
            cout<<res<<endl;  
            }
        }
    }
    }
    return 0;
}
