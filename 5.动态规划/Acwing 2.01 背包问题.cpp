// 时间：2022.06.08 21点25分
#include<iostream>
#include<algorithm>
using namespace std;
const int N=1010;
int n,m;
int v[N],w[N];
//  一维数组写法（优化版）
int f[N];
int main ()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>v[i]>>w[i];
    
    for(int i=1;i<=n;i++)
        for(int j=m;j>=v[i];j--)
            {

                f[j]=max(f[j],f[j-v[i]]+w[i]);
                
            }
    cout<<f[m]<<endl;
    return 0;
}

//  二维数组写法
// int f[N][N];
// int main ()
// {
//     cin>>n>>m;
//     for(int i=1;i<=n;i++) cin>>v[i]>>w[i];
    
//     for(int i=1;i<=n;i++)
//         for(int j=0;j<=m;j++)
//             {
//                 f[i][j]=f[i-1][j];
//                 if(j>=v[i]) f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
//             }
//     cout<<f[n][m]<<endl;
//     return 0;
// }