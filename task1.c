#include<stdio.h>
int main(){
	
	int arr[7]={31,33,35,34,38,36,32};
	int length=sizeof(arr)/sizeof(arr[0]);
	int sum=0;
    float avg=0;
    int high=arr[0];
    int low=arr[0];
	for(int i=0;i<length;i++)
	{
	printf("\nDay %d:%dc",i+1,arr[i]);
		
		sum=sum+arr[i];
		avg=sum/length;
        if (arr[i]>high){
        high=arr[i];
        }
		if (arr[i]<low){
        low=arr[i];
        }
      arr[2]=37;
      printf("\nmemory adress:%d\n",&arr[i]);
  printf("array element:%d\n",arr[i]);

	}
	printf("\nhighest temperature:%d",high);
	printf("\nlowest temperature:%d",low);
    printf("\naverage temperature:%f",avg);
	
	
	
}