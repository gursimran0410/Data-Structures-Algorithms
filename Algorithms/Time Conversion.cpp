#include <bits/stdc++.h>
#include <cstring>
#include <iostream>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
 
 string setTimeOutputFormat(string str, string s) {
     string newStr = str;
     for(int i=2;i<8;i++){
         newStr = newStr + s[i];
     }
     return newStr;
 }
 
 string createString(char a,char b){
     string str;
     str.push_back(a);
     str.push_back(b);
     return str;
 }
 
string timeConversion(string s) {
    int hr = ((s[0]-'0')*10) + (s[1]-'0');
    if(s[8]=='P' && s[9]=='M' && hr==12) return setTimeOutputFormat(to_string(hr),s);
    else if (s[8]=='P' && s[9]=='M') return setTimeOutputFormat(to_string(hr+12),s);
    else if (s[8]=='A' && s[9]=='M' && hr==12) return setTimeOutputFormat("00",s);
    else return setTimeOutputFormat(createString(s[0], s[1]),s);
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
