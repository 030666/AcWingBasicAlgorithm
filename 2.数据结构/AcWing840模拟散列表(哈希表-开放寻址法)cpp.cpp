// ʱ�䣺2021.12.28 22��48�� 
//	����Ѱַ�� 
#include <cstring>
#include <iostream>

using namespace std;

const int N = 200003,null=0x3f3f3f3f;//ȡģ�������N�������2n~3n֮����������������ֹ�ϣ��ͻ�ĸ�����С

int h[N];
 

int find(int x)
{
    int k = (x % N + N) % N;
    while(h[k]!=null && h[k]!=x)//�����ǰ�����λ���˶��Ҳ���x�Լ�����ɨ����һ�� 
    {
    	k++;
    	if(k==N) k=0;//���ɨ�����ˣ������¿�ʼ 
	}
  return k;//�����k��������˼��һ��x���ڵ�λ�ã�����kӦ�ô��ڵ�λ�� 
}

int main()
{
    int n;
    scanf("%d", &n);

    memset(h, 0x3f, sizeof h);
//memset�����ǰ��ֽڸ�ֵ��һ�����ĸ��ֽڣ�һ���ֽ�0x3f��ôһ��������0x3f3f3f3f 
    while (n -- )
    {
        char op[2];
        int x;
        scanf("%s%d", op, &x);
	
		int k=find(x);
        if (*op == 'I') 
        	h[k]=x;
        else
        {
            if (h[k]!=null) puts("Yes");
            else puts("No");
        }
    }

    return 0;
}

