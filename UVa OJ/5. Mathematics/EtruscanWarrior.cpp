// Ideafuse Mikroskill
// Template by Hierony

#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>

#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <bitset>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int> pii;
typedef pair<pii,pii> ppi;
typedef pair<LL,LL> pll;
typedef pair<string,string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
typedef vector<string> vstr;
typedef vector<char> vc;

double PI = acos(-1);

#define REP(i,n) for(int (i) = 0; (i) < (int)(n); (i)++)
#define READ_int(data) scanf("%d",&data); 
#define RESET(c,v) memset(c, v, sizeof(c))
#define MAX(a,b) a = max(a,b)
#define MIN(a,b) a = min(a,b)
#define pb push_back
#define ALL(vec) vec.begin(),vec.end()
#define sI(val) scanf("%d",&val)
#define sID(val,val2) scanf("%d %d",&val,&val2)


inline string IntToString(int a){
    char x[100];
    sprintf(x,"%d",a); string s = x;
    return s;
}

inline int StringToInt(string a){
    char x[100]; int res;
    strcpy(x,a.c_str()); sscanf(x,"%d",&res);
    return res;
}

inline string GetString(void){
	char x[1000005];
	scanf("%s",x); string s = x;
	return s;
}

ULL binser(LL x)
{
	ULL l = 1;
	ULL r = x;
	
	while(l < r)
	{
		ULL mid = (l + r) / 2;
		
		ULL hasil = (mid * (mid +1)) / 2;		// n kelereng, jika jumlah baris == hasil
		
		if(hasil > x) r = mid;
		else if(hasil == x) return mid+1;
		else l = mid + 1;
	}
	
	return l;
}

int main()
{
	ULL TC;
	scanf("%llu",&TC);
	
	ULL input;
	ULL a;
	
	for(a = 1; a <= TC; a++)
	{
		scanf("%llu",&input);
		
		if(input == 1) printf("1\n");
		
		else printf("%llu\n",binser(input)-1);
	}
	
	return 0;
}
