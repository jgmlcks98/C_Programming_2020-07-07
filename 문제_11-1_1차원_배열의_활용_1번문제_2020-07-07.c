/*1�� ����.
���̰� 5�� int�� �迭�� �����ؼ� ���α׷� ����ڷκ��� �� 5���� ������ �Է¹���!
�׸��� �Է��� ������ ������ ������ ����ϵ��� ������ �ۼ��غ���.
1.�Էµ� ���� �߿��� �ִ�
2.�Էµ� ���� �߿��� �ּڰ�
3.�Էµ� ������ �� ��
*/

#include <stdio.h>

int main(void)
{
	int arr[5];
	int sum=0;
	int i,opt;

	printf("ù ��° ������ �Է��Ͻÿ�. : ");
	scanf_s("%d",&arr[0]);
	printf("�� ��° ������ �Է��Ͻÿ�. : ");
	scanf_s("%d",&arr[1]);
	printf("�� ��° ������ �Է��Ͻÿ�. : ");
	scanf_s("%d",&arr[2]);
	printf("�� ��° ������ �Է��Ͻÿ�. : ");
	scanf_s("%d",&arr[3]);
	printf("�ټ� ��° ������ �Է��Ͻÿ�. : ");
	scanf_s("%d",&arr[4]);
	printf("\n\n");

	printf("���Ͻô� ���ڸ� �Է����ֽñ� �ٶ��ϴ�.\n\n");
	printf("1.�Էµ� ���� �߿��� �ִ�, 2.�Էµ� �߼� �߿��� �ּڰ�, 3.�Էµ� ������ �� �� \n");
	scanf_s("%d",&opt);


	switch(opt)
	{
	case 1:
		arr[0] = arr[0] < arr[1] ? arr[1] : arr[0];
	    arr[0] = arr[0] < arr[2] ? arr[2] : arr[0];
		arr[0] = arr[0] < arr[3] ? arr[3] : arr[0];
        arr[0] = arr[0] < arr[4] ? arr[4] : arr[0];
		printf("�Էµ� ���� �߿��� �ִ� : %d \n",arr[0]);
		break;

	case 2:
		arr[0] = arr[0] < arr[1] ? arr[0] : arr[1];
	    arr[0] = arr[0] < arr[2] ? arr[0] : arr[2];
		arr[0] = arr[0] < arr[3] ? arr[0] : arr[3];
        arr[0] = arr[0] < arr[4] ? arr[0] : arr[4];
		printf("�Էµ� ���� �߿��� �ּڰ� : %d \n",arr[0]);
		break;

	case 3:
		for(i=0;i<5;i++)
		sum+=arr[i];
		printf("�Էµ� ������ �� ���� : %d �Դϴ�. \n",sum);
		break;
	}
	return 0;
}

