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
 
char peta[255][255];
char ans[1000][1000];
int idx[]={1,-1,0,0};
int idy[]={0,0,1,-1};
int N,M;
 
void isi(int x, int y){
    if(x >= 0 && x <= N*3+1 && y >= 0 && y <= M*3+1){
        ans[x][y] = '*';
        if(ans[x][y+1] == '.') isi(x,y+1);
        if(ans[x][y-1] == '.') isi(x,y-1);
        if(ans[x+1][y] == '.') isi(x+1,y);
        if(ans[x-1][y] == '.') isi(x-1,y);
    }
 
}
 
void isi2(int x, int y){
    if(x >= 0 && x <= N*2+1 && y >= 0 && y <= M*2+1){
        ans[x][y] = '*';
        if(ans[x+1][y] == '.') isi2(x+1,y); // kanan
        if(ans[x-1][y] == '.') isi2(x-1,y); // kiri
        if(ans[x+1][y+1] == '.') isi2(x+1,y+1); //kanan bawah
        if(ans[x-1][y-1] =='.') isi2(x-1,y-1); //kiri atas
        if(ans[x+1][y-1] == '.') isi2(x+1,y-1); // kanan atas
        if(ans[x-1][y+1] == '.') isi2(x-1,y+1); //kiri bawah
        if(ans[x][y+1] == '.') isi2(x,y+1); //bawah
        if(ans[x][y-1] == '.') isi2(x,y-1); // atas     
    }
 
}
 
int main()
 {  
    for(int i=0;i<1000;i++)for(int j=0;j<1000;j++)ans[i][j]='.'; 
    scanf("%d %d ",&N,&M);
    for(int i=0; i < N; i++)
        scanf("%s",peta[i]);
     
    // perbesar peta        
    for(int  i=0; i < N; i++){
        for(int j=0; j < M; j++){
            int k=i;
            if(i > 0) k=k+1;
            if(peta[i][j] == '/'){
                ans[(i*3)+1][(j*3)+3] = '#';
                ans[(i*3)+2][(j*3)+2] = '#';
                ans[(i*3)+3][(j*3)+1] ='#';
            }
            else if(peta[i][j] == '\\'){
                ans[(i*3)+1][(j*3)+1] = '#';
                ans[(i*3)+2][(j*3)+2] = '#';
                ans[(i*3)+3][(j*3)+3] = '#';
            }
        }
    }
 
    isi(0,0);
    int sum=0;
     
    // hitung jumlah ruang
    for(int i=0; i <= N*3+1; i++){
        for(int j=0; j <= M*3+1; j++){
            if(ans[i][j] == '.'){
                sum++;
                isi(i,j);
                //printf("%d %d\n",i,j);
            }
        }
    }
     
    printf("%d\n",sum);
    /*for(int i=0; i <= N*3+1; i++){
        for(int j=0; j <= M*3+1; j++){
            printf("%c",ans[i][j]);
        }
        printf("\n");
    }*/
    return 0;
 }
