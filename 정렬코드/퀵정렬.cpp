#include <stdio.h>

int number=10;
int data [10]={1,10,5,8,7,6,4,3,2,9};

void quickSort(int *data,int start, int end){
	if(start >=end){  // 원소가 1개인 경우 
		return ;
	}
	
	int key=start; //키는 첫번째 원소 
	int i=start +1; //키 값의 바로오른쪽인덱스 /왼쪽출발지점 
	int j=end; //마지막 값 /오른쪽 출발지점
 	int temp;
	
	while(i<=j){  //엇갈릴때 까지 반복 
		while(data[i]<=data[key]){//키값보다 큰값을 만날때까지 오른쪽으로 이동 
			i++;
		}
		
		while(data[j]>=data[key] && j>start){//키값보다 작은값을 만날때까지 왼쪽으로 이동 
			j--;
		}
		
		if(i>j){ //현재 엇갈린 상태면 키 값과 교체 
			temp=data[j];
			data[j]=data[key];
			data[key]=temp;
		}else{
			temp=data[j];
			data[j]=data[i];
			data[i]=temp;
		}
		
		quickSort(data,start,j-1);
		quickSort(data,j+1,end);
		
	} 
	 
	 
}
int main(void){
	quickSort(data,0,number-1);
	for(int i=0;i<number;i++){
		printf("%d ", data[i]);
	}
}
