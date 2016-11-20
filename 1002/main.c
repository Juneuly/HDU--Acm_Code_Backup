#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000],c[1000];
    int i,n,flag=0;
    scanf("%d",&n);
    int x,y;
    int p=1;
    while(n)
    {
        scanf("%s %s",a,b);
        printf("Case %d:\n",p);
        printf("%s + %s = ",a,b);
        x=strlen(a)-1;
        y=strlen(b)-1;
        for(i=0;x>=0&y>=0;i++)
        {
            c[i]=a[x]+b[y]-'0'+flag;
            flag=0;
            if(c[i]>'9')
            {
                c[i]=c[i]-10;
                flag=1;
            }
            x--;
            y--;
        }
        if(x>=0)
        {
            while(x>=0)
            {
                c[i]=a[x]+flag;
                flag=0;
                if(c[i]>'9')
                {
                    c[i]=c[i]-10;
                    flag=1;
                }
                i++;
                x--;
            }

        }
        else if(y>=0)
        {
            while(y>=0)
            {
                c[i]=b[y]+flag;
                flag=0;
                if(c[i]>'9')
                {
                    c[i]=c[i]-10;
                    flag=1;
                }
                i++;
                y--;
            }

        }
        if(flag==1)
        {
            printf("1");
            flag=0;
        }
        i=i-1;
        while(i+1)
        {
            printf("%c",c[i]);
            i--;
        }
        p++;
        if(n!=1)
            printf("\n\n");
        else
            printf("\n");
        n--;
    }
}
