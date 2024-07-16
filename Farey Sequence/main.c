#include <stdio.h>
#include <math.h> 
int main()
{
    int n,i=2;
    double niz[100];
    double kopija[100];
    double x,y=0;
    printf("Unesite broj n: ");
    scanf("%d",&n);
    kopija[0]=0;
    kopija[1]=1;
    kopija[2]=1;
    kopija[3]=n;
    niz[0]=kopija[0]/kopija[1];
    niz[1]=kopija[2]/kopija[3];

    while(y!=1.0)
    {
        x=floor((kopija[1]+n)/kopija[3])*kopija[2]-kopija[0];
        y=floor((kopija[1]+n)/kopija[3])*kopija[3]-kopija[1];
        niz[i]=x/y;
        kopija[0]=kopija[2];
        kopija[2]=x;
        kopija[1]=kopija[3];
        kopija[3]=y;
        i++;
        if(i==100)
        break;
    }
for(i=0;i<100;i++)
{
    printf("%.3f ",niz[i]);
    if(niz[i]==1.0)
    break;
}

    return 0;
}
