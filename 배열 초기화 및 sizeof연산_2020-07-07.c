#include <stdio.h>

int main(void)
{
	int arr1[5]={1,2,3,4,5};        //�迭 ����� ���ÿ� �ʱ�ȭ����Ʈ �ۼ�.
	int arr2[ ]={1,2,3,4,5,6,7};    //�迭 ����� ���ÿ� �ʱ�ȭ����Ʈ �ۼ�. �迭�� ���� ���� �����Ϸ��� �ʱ�ȭ����Ʈ�� ���� �����Ͽ� ���������� ä���ش�.
	int arr3[5]={1,2};              //�迭 ����� ���ÿ� �ʱ�ȭ����Ʈ �ۼ�. �迭�� ���̰� 5�� �Ϳ� ���� �ʱ�ȭ����Ʈ�� ���� 1��2���̴�. ������ ���� 0���� ä������.
	int ar1Len, ar2Len, ar3Len, i;

	printf("�迭 arr1�� ũ�� : %d \n", sizeof(arr1));     //sizeof�����ڴ� �ڷ����� ũ�⸦ ��Ÿ���� �������̴�.
	printf("�迭 arr2�� ũ�� : %d \n", sizeof(arr2));
	printf("�迭 arr3�� ũ�� : %d \n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int);     //�迭 arr1�� ���̰��
	ar2Len = sizeof(arr2) / sizeof(int);     //�迭 arr2�� ���̰��
	ar3Len = sizeof(arr3) / sizeof(int);     //�迭 arr3�� ���̰��

	for(i=0;i<ar1Len;i++)            //i�� ���� 0���� �ʱ�ȭ �ʿ� ���� printf("%d",arr[i])���� i�� 0,1,2,3,4������ �ö󰡰� �Ǹ� 0�� arr1�� �迭 ù��°�� �� 1�� �Ǵ°Ű� 
		printf("%d",arr1[i]);        //�ٽ� �ݺ��Ǿ� i�� ���� 1�� �Ǹ� arr1�� �迭�� �ι�°�� �ִ� ���� 2�� ��µǰԵȴ�.
	printf("\n");

	for(i=0;i<ar2Len;i++)
		printf("%d",arr2[i]);
	printf("\n");

	for(i=0;i<ar3Len;i++)
		printf("%d",arr3[i]);
	printf("\n");

	return 0;
}