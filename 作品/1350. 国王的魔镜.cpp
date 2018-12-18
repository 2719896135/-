#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
//	freopen("mirror.in","r",stdin);
//	freopen(" mirror.out","w",stdout);
    int i,j,n,a,b,c,t=0;
    char str[100]={0};
    scanf("%d",&n);
    n=n+1;
    while (n--)
    {
        gets(str);
        a=strlen(str);
        if (a%2 != 0)
        {
            printf("%d\n",a);
        }
        if (a%2 == 0)
        {
            b=a/2;
            while (b!=0)
            {
                for (i=0; i<b; i++)
                {
                    if (str[i]!=str[a-1-i])
                        break;
                }
                if (i != b)
                {
                    printf("%d\n",a);
                    break;
                }
                a=a/2;
                b=a/2;
                if (a%2 != 0)
                {
                    printf("%d\n",a);
                    break;
                }
            }
        }
    }
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}
