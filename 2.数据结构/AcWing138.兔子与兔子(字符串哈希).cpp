// ʱ�䣺2021.12.30 12��25��
// �㷨���ַ�����ϣ 


//�ַ�����ϣһ�������ַ���ǰ׺�Ĺ�ϣֵ 
//ʵ��ԭ�����ַ���������һ��p���Ƶ���(p�ľ���ֵ��131����13331)��
//Ȼ��ȡģ2^64(�����鶨��ΪULL(���ֵ�պ�2^64)����������ʵ��ȡģ����

#include<iostream>
#include<string.h>
using namespace std;
typedef unsigned long long ULL;
const int N=1000010,base=131;

char str[N];
ULL h[N],p[N];//���ｫ���ַ���ǰ׺�Ĺ�ϣֵ�����鶨��ΪULL�������Ϳ��Լ򵥵�ʵ��ȡģ�Ĳ���

ULL get(int l,int r)//���ִ���ϣֵ
{
    return h[r]-h[l-1]*p[r-l+1];
}
int main ()
{
    scanf("%s",str+1);
    int n=strlen(str+1);
    
    p[0]=1;//p�������ǽ��Ƶ�n�η�
    for(int i=1;i<=n;i++)
    {
        h[i]=h[i-1]*base+str[i]-'a'+1;//��a~zת��Ϊ1~26  ����ַ���ǰ׺�Ĺ�ϣֵ
        p[i]=p[i-1]*base;
    }
    
    int m;
    cin>>m;
    while(m--)
    {
     int l1,r1,l2,r2;
     scanf("%d%d%d%d",&l1,&r1,&l2,&r2);
     if (get(l1, r1) == get(l2, r2)) 
            puts("Yes");
     else 
            puts("No");
    }
    return 0;
}
