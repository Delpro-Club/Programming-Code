#include<bits/stdc++.h>

using namespace std;
string operator*(std::string const &s, size_t n)
{
    std::string r;  // empty string
    r.reserve(n * s.size());
    for (size_t i=0; i<n; i++)
        r += s;
    return r;
}

int main(){

    int n;

    cin >> n;

    if(n==2){
        cout << "min(int, int)" << endl;
    }
    else {
            cout <<(string("min(int, ") * (n-1))<<"int" << (string(")") * (n-1)) << endl;
    }

    return 0;
}
