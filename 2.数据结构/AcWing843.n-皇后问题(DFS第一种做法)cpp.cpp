// ʱ�䣺2022.1.1 22��42��
// �㷨��DFS 
//  N-�ʺ�ĵ�һ�ֽⷨ��ö��ÿһ������������Ҫ����row 
// ÿ�����Ӷ�������״̬���Żʺ���߲��Żʺ� 
#include<iostream>
using namespace std;

const int N=20;
int n;
char g[N][N];//������
bool row[N],col[N],dg[N],udg[N];//row�����У�col�����У�dg�������Խ��ߣ�udg�����Խ���

void dfs(int x,int y,int s)
{
    if(y==n) y=0,x++;//����߽����⣬���ö�ٵ�ÿ�����һ������ת����һ�е�һ��
    if(x==n)
    {
        if(s==n)//˵���ҵ���һ���
        {
            for(int i=0;i<n;i++) puts(g[i]);
            puts(" ");
        }
        return;
    }
    //���Żʺ�
    dfs(x,y+1,s);
    //�Żʺ�
    if(!row[x]&& !col[y]&& !dg[x+y]&& !udg[x-y+n])
    {
        g[x][y]='Q';
        row[x]=col[y]=dg[x+y]=udg[x-y+n]=true;
        dfs(x,y+1,s+1);
        row[x]=col[y]=dg[x+y]=udg[x-y+n]=false;
        g[x][y]='.';
    }
  
    
}

int main ()
{
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            g[i][j]='.';
    dfs(0,0,0);
    
    return 0;
}
