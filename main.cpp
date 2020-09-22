#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>

using namespace std;

int  g1(int *p)
{
	*p = 100;
	return *p;
}

int&  g2(int *p) //
{
	*p = 100;
	return *p;
}

void main23()
{
	int a1 = 10;
	a1 = g2(&a1);

	int &a2 = g2(&a1); //用引用去接受函数的返回值，是不是乱码，关键是看返回的内存空间是不是被编译器回收了。。。。
	printf("a1:%d \n", a1);
	printf("a2:%d \n", a2);
}

int func(int a, int b, int = 3)
{
	return a + b;
}

int main01()
{
    //func(1, 2); //可以吗？
	printf("func(1, 2, 3) = %d\n", func(1, 2, 3));

	getchar();
	return 0;
}

//template <class T>
class A
{
public:
    A():m_a(0)
    {
    }
    virtual ~A()
    {

    }

private:
    friend int getA(A a)
    {
        return a.m_a;
    }
    const int m_a;
};

char *GetMemory(void)
{
char p[] = "hello world";
return p;
}
void Test(void)
{
char *str = NULL;
str = GetMemory();
printf(str);
}

void test_size(int *p)
{
    cout<<"sizeof(p):"<<sizeof(p)<<endl;

}

void Test2(void)
{
    int a[10] = {1,2,3};
    int (*p)[10] = &a;
    cout<<"sizeof(p):"<<sizeof(p)<<endl;
   // test_size(p);
}

 typedef struct student
{
     char name[10];
     int num;
}stu,*stu1;

int main()
{
    stu1 a = (stu1)malloc(sizeof(struct student));
    strcpy(a->name, "chen");
    printf("\na.name = %s\n", a->name);
    cout << "Hello world!" << endl;
    return 0;
}

