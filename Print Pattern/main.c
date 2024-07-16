#include <stdio.h>
void crtanje(int niz[], int vel) {
  int *m = niz, i;
  for (; m < niz + vel; m += 2) {
    for (i = 0; i < *(m + 1); i++) {
      printf("%c", *m);
    }
  }
}
void pravougaonik(int a, int b, int znak) {
  int niz[1000], v, i=0 , j=0 , z=0;
  if(a==1 && b==1)
  {
      niz[0]=znak;
      niz[1]=a;
      crtanje(niz, z+2);
  }
  else if(a<3)
  { 
      j=0;
      for(i=0;i<b;i++)
      {
        niz[j]=znak;
        niz[++j]=a;
        niz[++j]=10;
        niz[++j]=1;
        j++;
      }
      crtanje(niz, j);
      
  }
  else {

    niz[0]=znak;
    niz[1]=a;
    niz[2]=10;
    niz[3]=1;

    if(b%2==0)
    {
        for(i=4;i<b-2+4+j;i=i+j)
    {
        niz[i]=znak;
        niz[i+1]=1;
        niz[i+2]=' ';
        niz[i+3]=a-2;
        niz[i+4]=znak;
        niz[i+5]=1;
        niz[i+6]=10;
        niz[i+7]=1;
        j=8; 
    }

    }
        else {
        for(i=4;i<b-2+4+j+j;i=i+j)
        {
        niz[i]=znak;
        niz[i+1]=1;
        niz[i+2]=' ';
        niz[i+3]=a-2;
        niz[i+4]=znak;
        niz[i+5]=1;
        niz[i+6]=10;
        niz[i+7]=1;
        j=8; 
            }
        }

        z=i;
        niz[z]=znak;
        niz[z+1]=a;
        crtanje(niz, z+2);
  }
 
}
int main() {
  int a, b, z;
  printf("Unesite broj a: ");
  scanf("%d", &a);
  printf("Unesite broj b: ");
  scanf("%d", &b);
  z=42;
  pravougaonik(a, b, z);

  return 0;
}
