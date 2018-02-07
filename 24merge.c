#include<stdio.h>
int main()
{
	int list[10],num,temp,i,j;
	printf("Enter the size of an element:");
	scanf("%d",&num);
	printf(" the element is\n ");
	for(i=0;i<num;i++)
	 {
		scanf("%d",&list[i]);
	 }
		for(i=0;i<num-1;i++)
		 {
			 for(j=0;j<num-1;j++)
			 {
			  if(list[j]>list[j+1])
			   {
				  temp=list[j];
				  list[j]=list[j+1];
				  list[j+1]=temp;
			    }
			  }
		 }
		printf("\n sorting elements are:");
		for(i=0;i<num;i++)
			{
				printf("%d",list[i]);
			}
return  0; 
}
