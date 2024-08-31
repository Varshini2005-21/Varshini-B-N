#include <stdio.h>
void main() {
int a[10], i, n, max, min;
printf("enter the array size");
scanf("%d", &n);
for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
max = a[0];
min = a[0];
for (i = 0; i < n; i++) {
if (max < a[i])
{
max = a[i];
}
else if(min>a[i])
{
min=a[i];
}
}
printf("max=%d",max);
printf("min=%d",min);
}