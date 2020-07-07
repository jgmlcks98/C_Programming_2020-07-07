#include <stdio.h>

int main(void)
{
	int arr1[5]={1,2,3,4,5};        //배열 선언과 동시에 초기화리스트 작성.
	int arr2[ ]={1,2,3,4,5,6,7};    //배열 선언과 동시에 초기화리스트 작성. 배열의 길이 값은 컴파일러가 초기화리스트의 수를 참조하여 길이정보를 채워준다.
	int arr3[5]={1,2};              //배열 선언과 동시에 초기화리스트 작성. 배열의 길이가 5인 것에 반해 초기화리스트의 수는 1과2뿐이다. 나머지 값은 0으로 채워진다.
	int ar1Len, ar2Len, ar3Len, i;

	printf("배열 arr1의 크기 : %d \n", sizeof(arr1));     //sizeof연산자는 자료형의 크기를 나타내는 연산자이다.
	printf("배열 arr2의 크기 : %d \n", sizeof(arr2));
	printf("배열 arr3의 크기 : %d \n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int);     //배열 arr1의 길이계산
	ar2Len = sizeof(arr2) / sizeof(int);     //배열 arr2의 길이계산
	ar3Len = sizeof(arr3) / sizeof(int);     //배열 arr3의 길이계산

	for(i=0;i<ar1Len;i++)            //i의 값이 0으로 초기화 됨에 따라 printf("%d",arr[i])에서 i가 0,1,2,3,4순으로 올라가게 되면 0은 arr1의 배열 첫번째는 수 1이 되는거고 
		printf("%d",arr1[i]);        //다시 반복되어 i의 값이 1이 되면 arr1의 배열의 두번째에 있는 숫자 2가 출력되게된다.
	printf("\n");

	for(i=0;i<ar2Len;i++)
		printf("%d",arr2[i]);
	printf("\n");

	for(i=0;i<ar3Len;i++)
		printf("%d",arr3[i]);
	printf("\n");

	return 0;
}