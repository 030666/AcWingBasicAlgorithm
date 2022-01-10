// ʱ�䣺2022.1.10 22��05�� 
//����dijkstra�㷨
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N=510;
int n,m;
int g[N][N];
int dist[N];//����ÿһ���㵽��һ����ľ���
bool st[N];//�ж���������̾����Ƿ��Ѿ���ȷ��

int dijkstra()
{
    memset(dist,0x3f,sizeof dist);//��ÿһ���㵽��һ����ľ�������Ϊ�����
    dist[1]=0;//��һ���㵽�������̾���Ϊ0
    
    for(int i=1;i<n;i++)
    {
        int t=-1;//����Ϊ-1������Ϊ����㷨�����Խ�����ڸ�Ȩ��
        for(int j=1;j<=n;j++)
            if(!st[j]&&(t==-1||dist[t]>dist[j]))//�ò��輴Ѱ�һ�δȷ�����·�ĵ���·����̵ĵ�
                t=j;
        st[t]=true;
        for(int j=1;j<=n;j++)
            dist[j]=min(dist[j],dist[t]+g[t][j]);
    }
    if(dist[n]==0x3f3f3f3f) return -1;
    return dist[n];
}
int main ()
{
    scanf("%d%d",&n,&m);
    
    memset(g,0x3f,sizeof g);//��ʼ����ÿ����Ϊ������
    
    while(m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        g[a][b]=min(c,g[a][b]);//��һ����Ϊ�˴����ر�
    //ֻ��Ҫȡ���ر��е���̵�һ������
    }
    cout<<dijkstra()<<endl;
    
    
    return 0;
}
