#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string,int> msi;
    map<string,int>::iterator it;
    string s = "";
    string query ="";
    int value;
    int n;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> s >> value;

        msi.insert(pair<string,int>(s,value));
    }

    for(int i=0;i<n;i++){
        cin >> query;

        it = msi.find(query);
            if(it==msi.end()){
                cout << "Not found" << endl;
            }
            else {
                string k = msi.find(query)->first;
                int m = msi.find(query)->second;

                cout << k << "=" << m << endl;
            }

    }

    return 0;
}
