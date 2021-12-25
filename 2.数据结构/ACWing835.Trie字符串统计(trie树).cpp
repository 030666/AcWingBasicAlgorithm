// ʱ�䣺2021.12.23 23��06��
// ���ݽṹ��trie�� 
#include<iostream>
using namespace std;
 
const int N=100010;
char str[N];
int son[N][26],cnt[N],idx;
//son[x]�����ж��Ӷ�����son[x]�� 
//cnt[X]�������x��β�ĵ��ʵĸ��� 
//idx��ʾ����ʹ�õĽڵ�  
//�±���0�ĵ㣬���Ǹ��ڵ㣬���ǿսڵ�

void insert(char str[]) 
{
	int p=0;
	for(int i=0;str[i];i++)
	{
		int u=str[i]-'a';
		if(!son[p][u]) son[p][u]=++idx;//���p�ڵ�û��u���ӣ��򴴽�һ��
		p=son[p][u];//ѭ������Ժ�p�������һ��λ�� 
	 } 
	 cnt[p]++;//��ʾ��p�����ĵ��ʶ���һ�� 
}

int query(char str[])
{
	int p=0;
	for(int i=0;str[i];i++)
	{
		int u=str[i]-'a';
		if(!son[p][u]) return 0;
		p=son[p][u];
	}
	return cnt[p];
 } 
 int main ()
 {
 	int n;
 	scanf("%d",&n);
 	while(n--)
 	{
 		char op[2];
 		scanf("%s%s",op,str);
 		if(op[0]=='I') insert(str);
 		else printf("%d\n",query(str));
	 }
	 return 0;
 }
