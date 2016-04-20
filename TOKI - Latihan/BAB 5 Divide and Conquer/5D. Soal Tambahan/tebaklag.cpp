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
 
using namespace std;
 
typedef long long LL;
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
typedef map<string,int> mis;
double PI = acos(-1);
 
#define REP(i,n) for((i) = 0; (i) < (int)(n); (i)++)
#define bint(data) scanf("%d",&data); 
#define RESET(c,v) memset(c, v, sizeof(c))
#define MAX(a,b) a = max(a,b)
#define MIN(a,b) a = min(a,b)
#define pb push_back
 
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
 
inline string Pola(string lagu){
        mis data;
    data["c."]=1;
    data["c#"]=2;
    data["d."]=3;
    data["d#"]=4;
    data["e."]=5;
    data["f."]=6;
    data["f#"]=7;
    data["g."]=8;
    data["g#"]=9;
    data["a."]=10;
    data["a#"]=11;
    data["b."]=12;
    data["C."]=13;
    data["C#"]=14;
    data["D."]=15;
    data["D#"]=16;
    data["E."]=17;
    data["F."]=18;
    data["F#"]=19;
    data["G."]=20;  
    data["G#"]=21;
    data["A."]=22;
    data["A#"]=23;
    data["B."]=24;
    string pola1;
    for(int i = 0; i < lagu.size()-3;i+=2){
        string c1,c2;
        c1=lagu[i];
        c2=lagu[i+1];
        string id = c1+c2;
        c1=lagu[i+2];
        c2=lagu[i+3];
        string idx = c1+c2;
        pola1+=IntToString(data[id]-data[idx]);
    }
    return pola1;
}
 
int main()
 {  
    string lagu;
    vstr daftar;
    int n;
    lagu = GetString();
    int uk = lagu.size();
     
    scanf("%d",&n);
    for(int i = 0 ; i < n; i++){
        string l = GetString();
        daftar.pb(l);
    }
    if (uk == 2){
        printf("1\n");
        exit(0);
    }
    string pola1,pola2;
    pola1 = Pola(lagu);
    int stat=0;
    for(int i=0; i < daftar.size();i++){
        if(daftar[i].size() >= uk){
            pola2=Pola(daftar[i]);
            //printf("%d %s %s\n",i,daftar[i].c_str(),pocla2.c_str());
            if(pola1==pola2 || pola2.find(pola1) != -1){
                printf("%d\n",i+1);
                stat=1;
                break;
            }
        }
    }
    if(!stat) printf("#\n");
    //printf("%s\n",pola1.c_str());
    return 0;
 }
