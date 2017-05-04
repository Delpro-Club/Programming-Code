#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

char easytolower(char in){
  if(in<='Z' && in>='A')
    return in-('Z'-'z');
  return in;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s = "";
    string k = "";
    int counts = 0;
    int arr[26];

    getline(cin,s);
    transform(s.begin(), s.end(), s.begin(), easytolower);

    sort(s.begin(),s.end());

    //cout << s << endl;
    for(int i=0;i<s.length();i++){
        if(s[i] >= 97 && s[i] <= 122) {
            k+= s[i];
        }
    }

    for(int i=0;i<s.length();i++){
        if(k[i] != k[i+1]) counts++;
    }

    if(counts!=26) cout << "not pangram" << endl;
    else cout << "pangram" << endl;
    return 0;
}
