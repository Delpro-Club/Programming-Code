#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int t;
    cin >> t;
    unsigned char x, y, a, b;
    unsigned char tmp, tmp2;
    while ( t-- )
    {
        cin >> tmp >> tmp2;
        x = tmp - 96;
        y = tmp2 - 96;
        cin >> tmp >> tmp2;
        a = tmp - 96;
        b = tmp2 - 96;
        if( ((int)(x+y)%2==0&&(int)(a+b)%2==0) || ((int)(x+y)%2!=0&&(int)(a+b)%2!=0) ) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
