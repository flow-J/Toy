#include <stdio.h>
int f[1000]={0},n,m,k,sum=0;

void init()
{
    int i;
    for(i=1;i<=n;i++)
        f[i]=i;
}

int get_father(int v)
{
    if(f[v]==v)
        return v;
    else
    {
        f[v]=get_father(f[v]);
        return f[v];
    }
}

void merge(int v,int u)
{
    int t1,t2;
    t1=get_father(v);
    t2=get_father(u);
    if( t1!=t2 )
    {
        f[t2]=t1;

    }
}

int main()
{
    int i,x,y;
    scanf("%d %d",&n,&m);

    init();
    for(i=1;i<=m;i++)
    {
        scanf("%d %d",&x,&y);
        merge(x,y);
    }

    for(i=1;i<=n;i++)
    {
        if(f[i]==i)
            sum++;
    }

    getchar();getchar();
    printf("%d\n",sum);
    return 0;
}
