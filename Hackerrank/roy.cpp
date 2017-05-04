#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int L,n,h,w;

    cin >> L;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> h >> w;

        if((h==0) || (w ==0)) cout << "CORRUPT" << endl;
        else if ((h < L) || (w < L) ) cout << "UPLOAD ANOTHER" << endl;
        else if ((h >= L && w >= L) && w==h) cout << "ACCEPTED" << endl;
        else if ((h==L && w > L) || (w==L && h > L) || (w > L && h > L)) cout << "CROP IT" << endl;
    }


    return 0;
}
