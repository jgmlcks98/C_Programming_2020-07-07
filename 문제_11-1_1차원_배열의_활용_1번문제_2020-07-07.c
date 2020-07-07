/*1번 문제.
길이가 5인 int형 배열을 선언해서 프로그램 사용자로부터 총 5개의 정수를 입력받자!
그리고 입력이 끝나면 다음의 내용을 출력하도록 예제를 작성해보자.
1.입력된 정수 중에서 최댓값
2.입력된 정수 중에서 최솟값
3.입력된 정수의 총 합
*/

#include <stdio.h>

int main(void)
{
	int arr[5];
	int sum=0;
	int i,opt;

	printf("첫 번째 정수를 입력하시오. : ");
	scanf_s("%d",&arr[0]);
	printf("두 번째 정수를 입력하시오. : ");
	scanf_s("%d",&arr[1]);
	printf("세 번째 정수를 입력하시오. : ");
	scanf_s("%d",&arr[2]);
	printf("네 번째 정수를 입력하시오. : ");
	scanf_s("%d",&arr[3]);
	printf("다섯 번째 정수를 입력하시오. : ");
	scanf_s("%d",&arr[4]);
	printf("\n\n");

	printf("원하시는 숫자를 입력해주시기 바랍니다.\n\n");
	printf("1.입력된 정수 중에서 최댓값, 2.입력된 중수 중에서 최솟값, 3.입력된 정수의 총 합 \n");
	scanf_s("%d",&opt);


	switch(opt)
	{
	case 1:
		arr[0] = arr[0] < arr[1] ? arr[1] : arr[0];
	    arr[0] = arr[0] < arr[2] ? arr[2] : arr[0];
		arr[0] = arr[0] < arr[3] ? arr[3] : arr[0];
        arr[0] = arr[0] < arr[4] ? arr[4] : arr[0];
		printf("입력된 정수 중에서 최댓값 : %d \n",arr[0]);
		break;

	case 2:
		arr[0] = arr[0] < arr[1] ? arr[0] : arr[1];
	    arr[0] = arr[0] < arr[2] ? arr[0] : arr[2];
		arr[0] = arr[0] < arr[3] ? arr[0] : arr[3];
        arr[0] = arr[0] < arr[4] ? arr[0] : arr[4];
		printf("입력된 정수 중에서 최솟값 : %d \n",arr[0]);
		break;

	case 3:
		for(i=0;i<5;i++)
		sum+=arr[i];
		printf("입력된 정수의 총 합은 : %d 입니다. \n",sum);
		break;
	}
	return 0;
}

