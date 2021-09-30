#include<stdio.h>
void main()
{
    long m,n;
    printf("Input:\n");
    scanf("%ld %ld",&m,&n);
    long a[100000],b[100000],c[100000];
    for(long i=0;i<n;i++)
        scanf("%ld",&a[i]);
    long s1=0;long z=0,x=0;
    for(long i=n-1;i>=0;i--)
    {
        long s=0;z=0;
        for(long j=i;j>=0;j--)
        {
            if((s+a[j])<=m)
            {
                s+=a[j];
                c[z++]=j;
            }
        }
        if(s>s1)
        {
            s1=s;
            for(long k=0;k<z;k++)
                b[k]=c[k];
            x=z;
        }
        if(s==m)
            break;
    }
    printf("Output :\n");
    printf("%ld\n",x);
    for(long i=x-1;i>=0;i--)
        printf("%ld ",b[i]);
}
