//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include<stdlib.h>
////
////int main()
////{
////	int arr[] = {1,2,3,4,5,6,7,8,9,10};
////	int k = 17;
////	int sz = sizeof(arr)/sizeof(arr[0]);
////
////	int left = 0;
////	int right = sz-1;
////
////	while(left<=right)
////	{
////		int mid = (left+right)/2;
////		if(arr[mid] > k)
////		{
////			right = mid-1;
////		}
////		else if(arr[mid] < k)
////		{
////			left = mid+1;
////		}
////		else
////		{
////			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
////			break;
////		}
////	}
////	if(left>right)
////	{
////		printf("���ź����Ҳ���\n");
////	}
////
////	return 0;
////}
////
////int binary_search(int arr[], int k)
////{
////	int sz = sizeof(arr)/sizeof(arr[0]);
////	int left = 0;
////	int right = sz-1;
////	while(left<=right)
////	{
////		int mid = (left+right)/2;
////		if(arr[mid] > k)
////		{
////			right = mid-1;
////		}
////		else if(arr[mid] < k)
////		{
////			left = mid+1;
////		}
////		else
////		{
////			return mid;
////		}
////	}
////	//�Ҳ���
////	return -1;
////}
////
////int main()
////{
////	int arr[] = {1,2,3,4,5,6,7,8,9,10};
////	int k = 7;
////	
////	int ret = 0;
////	ret = binary_search(arr, k);
////	if(ret == -1)
////	{
////		printf("���ź����Ҳ���\n");
////	}
////	else
////	{
////		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
////	}
////
////	
////
////	return 0;
////}
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
//		if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	//�Ҳ���
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = 0;
//	ret = binary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("���ź����Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}
//
//
//
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 3, 4, 5, 6, 7 };
//	int tmp;
//	int i = 0;
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main()
//{
//	int i;
//	float sum = 0.0, temp = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		temp = pow(-1, i + 1);
//		sum = sum + temp * 1 / i;
//	}
//	printf("sum is %f\n", sum);
//	system("pause");
//	return 0;
//}
//
//
//#include <stdio.h>
//#include<stdlib.h>
//int main() {
//	int i = 0;
//	int k = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			k++;
//		}
//		if (i / 10 == 9)
//		{
//			k++;
//		}
//	}
//	printf("%d\n", k);
//	system("pause");
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	for (int x = 1; x<8; x++)
//	{
//		for (int y = 1; y <= 2 * x - 1; y++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int x = 6; x>0; x--)
//	{
//		for (int y = 1; y <= 2 * x - 1; y++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{                                    //����λ��
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}                              //����η���
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}                                            //�ж�
//		if (sum == i)
//			printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int sum = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 0; i < 5; i++)
//	{
//		a = a * 10 + num;
//		sum = sum + a;
//	}
//	printf("%d'n", sum);
//	system("pause");
//	return 0;
//}
//
//
////������
//
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("�ҵ��ˣ��±���%d\n", mid);
//	else
//		printf("�Ҳ���\n");
//	system("pause");
//	return 0;
//}
//
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
////����123456
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�!\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("����������������˳�����\n");
//
//	system("pause");
//	return 0;
//
//}
//
//
#define   _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char ch;
	char Str;
	printf("������һ���ַ����ַ�����\n");
	while ((ch = getchar()) != EOF) {    //getchar()���̻�ȡ�ַ���
		if ('a' <= ch && ch <= 'z') {
			putchar(ch - 32);       //putchar()����ַ���
			printf("\n");
		}
		if ('A' <= ch && ch <= 'Z') {
			putchar(ch + 32);
			printf("\n");
		}
		else {

		}
	}
	system("pause");
	return 0;
}

