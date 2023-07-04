//wrong
//Newton's Interpolation using Backward Difference Formula
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 15
int main()
{
float x[MAX], fx[MAX], bd[MAX], xp, s, h, v, p;
int n, i, j, k;
char q;
printf("\n Input the number of data pairs: ");
scanf("%d",&n);
printf("\nInput data pairs x(i) and values f(i) (one set in each line): ");
for(i=1;i<=n;i++)
scanf("%f%f", &x[i], &fx[i]);
h=x[2]-x[1];
do {
printf("\n Enter the value at which interpolation is required: "); scanf("%f", &xp);
s=(xp-x[n])/h;
p=1;
v=fx[n];
for(i=1;i<=n;i++)
bd[i]=fx[i];
for(i=n, k=1;i>=1, k<n;i--, k++) {
for(j=n;j>=n-1;j--) {
bd[j]=bd[j]-bd[j-1];
}
p=p*(s+k-1)/k;
v=v+p*bd[n];
}
printf("\n Interpolated function value at x=%f is %f.", xp, v); printf("\n Do you want to input another value? (y/n): "); scanf("%c", &q);
} while (q=='y');
getch();
return 0;
}
