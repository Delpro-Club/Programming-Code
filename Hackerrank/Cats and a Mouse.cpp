#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,x,y,z;

    cin >> n;

    while(n--){
        cin >> x >> y >> z;

        if(x < y && y <= z){
            cout << "Cat B" << endl;
        }
        else if(x > y && x <= z){
            cout << "Cat A" << endl;
        }
        else if(x == y) cout << "Mouse C" << endl;
        else if ( x > y && x > z){
            int d1 = abs (x-z);
            int d2 = abs (y-z);
            if(d1==d2) cout << "Mouse C" << endl;
            else if(d1 > d2) cout << "Cat B" << endl;
            else if (d1 < d2) cout << "Cat A" << endl;
        }
        else {
            if(x < y && y > z) {
                int c1 = abs(x-z);
                int c2 = abs(y-z);
                if(c1==c2) cout << "Mouse C" << endl;
                else if (c1 > c2) cout << "Cat B" << endl;
                else if (c1 < c2) cout << "Cat A" << endl;
            }

        }
    }

    return 0;
}
