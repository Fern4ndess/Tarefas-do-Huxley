#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double atribuir(int a[], double p[], int c, int d, int b){
    if(c==b)
    {
        return;
    }
    
    if(d==3)
    {
        printf("Jogo[%d] = R$%.2lf\n", c, p[c]);
        return atribuir(a, p, c+1, 0, b);
    }
    
    if(d>0 && p[c]<45)
    {
        p[c]=45;
    }
    else if(d==0 && p[c]<45)
    {
        p[c]=p[c];
        return atribuir(a, p, c, d+3, b);
    }
    else if(p[c]<46)
    {
        p[c]=45;
    }
    else if(p[c]<=100.00)
    {
        if(a[c]==0)
        {
            p[c]=p[c]-(p[c]*0.125);
        }
        else if(a[c]==1)
        {
            p[c]=p[c]-(p[c]*0.1);
        }
        else if(a[c]==2)
        {
            p[c]=p[c]-(p[c]*0.09);
        }
        else if(a[c]==3)
        {
            p[c]=p[c]-(p[c]*0.075);
        }
        else if(a[c]==4)
        {
            p[c]=p[c]-(p[c]*0.06);
        }
        else if(a[c]==5)
        {
            p[c]=p[c]-(p[c]*0.05);
        }
    }
    else if(a[c]==0)
    {
        p[c]=p[c]-(p[c]*0.25);
    }
    else if(a[c]==1)
    {
        p[c]=p[c]-(p[c]*0.2);
    }
    else if(a[c]==2)
    {
        p[c]=p[c]-(p[c]*0.18);
    }
    else if(a[c]==3)
    {
        p[c]=p[c]-(p[c]*0.15);
    }
    else if(a[c]==4)
    {
        p[c]=p[c]-(p[c]*0.12);
    }
    else if(a[c]==5)
    {
        p[c]=p[c]-(p[c]*0.10);
    }
    
    return atribuir(a, p, c, d+1, b);
    
}


void ler(int a[], int b, int c, double p[]){
    scanf("%d", &a[c]);
    scanf("%lf", &p[c]);
    
    if(c==b-1)
    {
        atribuir(a, p, 0, 0, b);
        return;
    }
    else
    {
        ler(a, b, c+1, p);
    }
    
    
}

int main() {
    
    int dif[1000];
    double preco[1000];
    int N;
    
    scanf("%d", &N);
    
    ler(dif, N, 0, preco);
    
    
    
	return 0;
}