#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int DP[1001];

int main(){
    int n;

    scanf("%d", &n);

    DP[1] = 1;
    DP[2] = 2;

    for(int i=3;i<=n;i++){
        DP[i] = (DP[i-1] + DP[i-2])%10007;
    }

    printf("%d", DP[n]);
}
