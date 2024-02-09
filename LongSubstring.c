#include<stdio.h>
#include<conio.h>

void main()
{ 
	char ch[25];
   	int i,j,k,count,point=25,sum=0;
   	//clrscr();
   	
	printf("Enter string values\n");
   	gets(ch);

   	for(i=0;ch[i]!='\0';i++)
  	 { 
	    point=10-i;

     	   for(j=i;j<point;j++)
           { 
              for(k=j+1;k<point;k++)
               { 
                 if(ch[j]==ch[k])
                  { 
		    point=k;
                    break;
                  }
               }
              if(j+1==point)
              count=point-i;
           }
          if(sum<count)
           sum=count;
         }

        printf("Longest substring = %d",sum);
        getch();
}
