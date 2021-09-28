//#include <Stdio.h>
//void PrintString(const char* s)
//{
//	printf("String : %s\n", s);
//}
//int main()
//{
//	char buf1[7] = "Hello!";
//	const char* buf2 = "Hello!";
//
//	PrintString(buf1);
//	PrintString(buf2);
//	PrintString("Hello!");
//}
// 
//#include <stdio.h>
//typedef struct _point
//{
//	int x;
//	int y;
//}	Point;
//void PrintPoint(const Point* arg) // 읽기 전용 주소
//{
//	printf("(%d, %d)\n", arg->x, arg->y);
//}
//int main()
//{
//	Point pt1 = { 2, 3 };
//	PrintPoint(&pt1);
//}

//#include <stdio.h>
//typedef struct _point
//{
//	int x, y;
//}	Point;
//void PrintPoint(const Point* arg)
//{
//	printf("(%d, %d)\n", arg->x, arg->y);
//}
//int main()
//{
//	Point pt = { 2, 3 };
//	PrintPoint(&pt);
//}

//#include <stdio.h>
//void PrintArray(const int* arr, int size)
//{
//	for (int i = 0; i < size; ++i)
//		printf("[%d] : %d\n", i, arr[i]);
//}
//int main()
//{
//	int arr[3] = { 1 ,2, 3 };
//	int arr2[5] = { 100, 200, 300, 400, 500 };
//
//	PrintArray(arr, 3);
//	PrintArray(arr2, 5);
//	PrintArray(arr2 + 2, 2);
//}

//#include <stdio.h>
//void Increment(int* pn, int k)	// 매개변수에서 k값 만큼을 더한다.
//{
//	//*pn = *pn + 1;	// ++ *pn;
//	*pn += k;
//}
//void Print(const int* pn)
//{
//	printf("int : %d\n", *pn);
//}
//void Decrement(int* pn, int k)	// 매개변수에서 k값 만큼을 뺀다.
//{
//	*pn -= k;
//}
//void Reset(int* pn)
//{
//	*pn = 0;
//}
//int main()
//{
//	int n = 0;
//
//	Increment(&n, 6);
//	Print(&n);
//
//	Decrement(&n, 4);
//	Print(&n);
//
//	Reset(&n);
//	Print(&n);
//}

#include <stdio.h>
typedef struct _point
{
	int x, y;
}	Point;

void InitPoint(Point* p, int x, int y)
{
	p->x = x;
	p->y = y;
}
void UninitPoint(Point* p)
{
	p->x = 0;
	p->y = 0;
}
void PrintPoint(const Point* p)
{
	printf("(%d, %d)\n", p->x, p->y);
}
void AddPoint(Point* p, int x, int y)
{
	p->x += x;
	p->y += y;
}
int main()
{
	Point pt;
	InitPoint(&pt, 2, 3);

	PrintPoint(&pt);

	AddPoint(&pt, 3, 3);

	PrintPoint(&pt);

	UninitPoint(&pt);
}