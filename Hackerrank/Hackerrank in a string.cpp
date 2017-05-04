#include<bits/stdc++.h>

using namespace std;

bool isSequence(string str1, string str2, int m, int n){

    if (m == 0) return true;
    if (n == 0) return false;
    // check if last character is same
    if(str1[m-1] == str2[n-1])
        return isSequence(str1,str2,m-1,n-1);

    return isSequence(str1,str2,m,n-1);
}

int main(){

    int n;
    string str1 = "hackerrank";

    cin >> n;

    while(n--){

        string str2;

        cin >> str2;

        int m = str1.length();
        int z = str2.length();

        isSequence(str1,str2,m,z) ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }

    return 0;
}
