#include<iostream>
using namespace std;

int main()
{
	int id ,pwd;
	
	printf("Enter ID : ");
	scanf("%d",&id);
	
	switch(id){
		case 500:
			printf("please Enter Your pwd");
			scanf("%d",&pwd);
	
	switch(pwd){
		case 200:
			
			printf("Welcome!!!");
			break;
			default:
				printf("Please Enter Valid Password...");
				break;
			
	}
	break;
	default:
		printf("Please Enter Valid User id...");
		break;
	}
}
