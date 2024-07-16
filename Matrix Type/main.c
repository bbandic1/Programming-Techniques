#include <stdio.h>

int main() {
    int n, mat[1000][1000],i,j,gornja_trougaona,donja_trougaona,null_matrica,jed_matrica,dijagonalna_matrica,sporedna_dijagonala;
    do{
	printf("Unesite broj N: ");
    scanf("%d",&n);
    }while(n<1 || n>100);

    printf("Unesite elemente matrice: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    null_matrica=1;
    for (i=0; i<n; i++)
	for (j=0; j<n; j++)
		if (mat[i][j] != 0) {
			null_matrica=0;
			i=j=n;
			}
    
    jed_matrica=1;
    for (i=0; i<n; i++)
	for (j=0; j<n; j++)
		if (i==j && mat[i][j] != 1) {
			jed_matrica=0;
			i=j=n;
			}

	gornja_trougaona=1;
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			if (i>j && mat[i][j] != 0) {
				gornja_trougaona=0;
				i=j=n;
			}

    donja_trougaona=1;
	for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			if (j>i && mat[i][j] != 0) {
				donja_trougaona=0;
				i=j=n;
			}

    dijagonalna_matrica=0;
    if(gornja_trougaona==1 && donja_trougaona==1)
    {
        dijagonalna_matrica=1;
    }

    sporedna_dijagonala=1;
    for (i=0; i<n; i++)
		for (j=0; j<n; j++)
			if ((((i + j) > (n - 1)) && mat[i][j]!=0) || (((i + j) < (n - 1)) && mat[i][j]!=0)) {
				sporedna_dijagonala=0;
				i=j=n;
			}

    if(null_matrica==1)
    {
        printf("Nul-matrica");
        return 0;
    }
    else if (jed_matrica==1) {
        printf("Jedinicna matrica");
        return 0;
    }
    else if (dijagonalna_matrica==1) {
        printf("Dijagonalna matrica");
        return 0;
    }
    else if (gornja_trougaona==1) {
        printf("Gornja trougaona matrica");
        return 0;
    }
    else if (donja_trougaona==1) {
        printf("Donja trougaona matrica");
        return 0;
    }
    else if (gornja_trougaona==1) {
        printf("Gornja trougaona matrica");
        return 0;
    }
    else if (sporedna_dijagonala==1) {
        printf("Sporedna dijagonalna matrica");
        return 0;
    }
    else {
        printf("Nista od navedenog");
        return 0;
    }

	return 0;
}