#include<stdio.h>

//int main()
//{
//	int a = 7;
//	int b = 8;
//
// //两个变量交换
//	printf("%d %d\n", a, b);
//	////引入中间变量
//	//int c = 0;
//	//c = a;
//	//a = b;
//	//b = c;
//	//printf("%d %d\n", a, b);
//
//	////不使用中间变量
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("%d %d\n", a, b);
//	////有缺点，加法容易溢出
//
//	//采用二进制异或位，即相同为0，相异为1；
//	//7
//	//0111
//	/*   8
//	  1000
//	
//      7^8
//      1111
//
//      1111
//	  0111
//	  1000
//
//	  1111
//	  1000
//	  0111
//*/
//	a = a^b;
//	b = b^a;
//	a = a^b;
//	printf("%d %d\n", a, b);
//	//缺点：运算效率慢，一般在企业里用中间变量交换变量，只在面试中出现
//	 
//
//
//
//}

//int main()
//{
//	//统计一个非空数组中，只出现一个元素的个数
//	int arr[] = { 1,2,3,4,5,4,3,2,1,5,7};
//	int i = 0;
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	int sum = 0;
//	for (i = 0; i < sz;i++) 
//	{
//		sum = arr[i] ^ sum;
//	}
//	printf("%d\n", sum);
//	//int i = 0;
//	//int sz = 0;
//	//int j = 0;
// //   //计算数组中有几个元素
//	//sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	int count = 0;//计数器
//	//	//统计arr[i]在arr数组中出现了几次；	
//	//	for (j = 0; j < sz; j++)
//	//	{
//	//		if (arr[i] == arr[j])
//	//		{
//	//			count++;
//	//			//printf("%d\n", count);
//	//		}
//	//	}
//	//	if (count == 1)
//	//	{
//	//		printf("%d\n", arr[i]);
//	//		break;
//	//	}
//	//}
//	return 0;
//}

