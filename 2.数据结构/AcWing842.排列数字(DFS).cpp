// ʱ�䣺2022.1.1 13��52��
// �㷨��DFS 

#include<iostream>
using namespace std;

const int N=10;
int n;
int path[N];
bool st[N];//Ϊtrue��ʾ��������ù���

void dfs(int u)
{
    if(u==n)//u����ݹ�Ĳ�������U����nʱ˵���Ѿ�����Ҷ�ڵ�
    {
        for(int i=0;i<n;i++) printf("%d ",path[i]);
        puts(" ");
        return;
    }
     for(int i=1;i<=n;i++)
        if(!st[i])//���iû���ù�
        {
            path[u]=i;
            st[i]=true;
            dfs(u+1);
            //path[u]=0;
            st[i]=false;
        }
}

int main ()
{
    cin>>n;
    
    dfs(0);
    
    return 0;
}
