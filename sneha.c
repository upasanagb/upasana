#include<stdio.h>


int main()
{
	  int ch,i=0;
	  char str[150];
			printf("enter the characters from the keybord(press enter button to stop.\n");
			
			
			do
			{
				   ch=getchar();
				   str[i]=ch;
				   i++;
			}
			while(ch!='\n');
			printf("entered character are %s",str);
			 
			return 0; 
	  
}
