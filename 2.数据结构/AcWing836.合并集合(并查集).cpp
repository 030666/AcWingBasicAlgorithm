// ʱ�䣺2021.12.25 12��23��
// ���ݽṹ�����鼯 
#include<iostream>
using namespace std;

const int N=100010;
int p[N],n,m;


int find(int x)//����x�����ڽڵ�+·��ѹ��
{
    if(p[x]!=x) p[x]=find(p[x]);
    return p[x];
}

int main ()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) p[i]=i;
    while(m--)
    {
    char op[2];
    int a,b;
    scanf("%s%d%d",&op,&a,&b);//����ʹ���ַ������룬ʹ��%c���ܻ����ո���Żس��ַ�������ǰ���op����Ϊ2
    if(op[0]=='M') p[find(a)]=find(b);
    else{
        if(find(a)==find(b)) puts("Yes");
        else puts("No");
    }
    }
    return 0;
}
