//�����дһ���ѣ���ȫ������ 5������
//1. ����һ����         heap[ ++ size] = x; up(size);
//2. �󼯺��е���Сֵ   heap[1]
//3. ɾ����Сֵ         heap[1] = heap[size]; size -- ;down(1);
//4. ɾ������һ��Ԫ��   heap[k] = heap[size]; size -- ;up(k); down(k);
//5. �޸�����һ��Ԫ��   heap[k] = x; up(k); down(k);
#include<iostream>
using namespace std;

const int N=100010;
int n,m;
int h[N],siz;

void down(int u)
{
    int t=u;//��t���洢���ڵ���ӽڵ���Сֵ���±�
    //���жϸ��ڵ�����ӽڵ�
    if(u * 2 <= siz &&h[u*2]<=h[u]) t=u*2;
    //���жϸ��ڵ�����ӽڵ�
    if(u*2+1 <= siz&&h[u*2+1]<h[t]) t=u*2+1;
    if(u!=t)
    {
        swap(h[u],h[t]);
        down(t);
    }
}
int main ()
{
    scanf("%d%d",&n,&m);
    
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&h[i]);
    }
    siz=n;
    
    //������
    for(int i=n/2;i;i--) down(i);
    //ȡ��ǰm��ֵ
    while(m--)
    {
        printf("%d ",h[1]);
        h[1]=h[siz];
        siz--;
        down(1);
    }
    return 0;
}
