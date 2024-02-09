#include<stdio.h>
#include<conio.h>
void main()
{ char ch[]={“PAYPALISHIRING”},	ch1[20];
 int l,i,j,k,p=0;
 clrscr();
 l=strlen(ch);
 printf(“Given string=%s\n”,ch);
for(i=0;i<3;i++)
{ k=i;
  for(j=0;j<l;j++)
  { if(i%2==0&&(k==i||j%4==0))
   printf(“%c”,ch1[p++]=ch[k]);
   else if(i%2==1&&j%2==0)
    printf(“%c”,ch1[p++]=ch[k]);
   else
    printf(“ “);
   k++;
  }
  printf(“\n”);
 }
 printf(“\nNew string=%s”,ch1);
 getch();
}
