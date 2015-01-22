// Day24_Inheritance.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
//class ZooAnimal{
//public:
//	//ZooAnimal();
//	virtual ~ZooAnimal(){
//		printf("ZooAnimal destroy\n");
//	};
//	virtual void animate(){
//		printf("ZooAnimal animate\n");
//	};
//	virtual void draw(){
//		printf("ZooAnimal draw\n");
//	};
//
//};
//
//class Bear:public ZooAnimal{
//public:
//	//Bear();
//	void animate(){
//		printf("Bear animate\n");
//	};
//	void draw(){
//		printf("bear draw\n");
//	};
//	virtual void dance(){
//		printf("bear dance\n");
//	};
//};
//
//void draw(ZooAnimal &zoey){
//	zoey.draw();
//}
//Bear yogi;
//void foo(){
//	ZooAnimal franny=yogi;
//	draw(yogi);
//	draw(franny);
//}
//class A{
//public:
//	virtual void print(){
//		printf("A\n");
//	}
//	virtual void draw(){
//		printf("A draw\n");
//	}
//};
//class X:public A{
//public:
//	void print(){
//		printf("X\n");
//	}
//	void draw(){
//		printf("X draw\n");
//	}
//};
//class Y:public A{
//public:
//	void print(){
//		printf("Y\n");
//	}
//	void draw(){
//		printf("Y draw\n");
//	}
//};
//void print(A &a){
//	a.print();
//}
//void draw(A &a){
//	a.draw();
//}
////class Z:public X,public Y{};
//class cTest{
//public:
//	char c;
//	int i;
//	static cTest test;
//public:
//	virtual ~cTest(){}
//
//};
//int fAdd(int a,int b){
//	return a+b;
//}

int _tmain(int argc, _TCHAR* argv[])
{
	//A a;
	//a.a=10;a.b=100;
	//int a=sizeof(A);
	//int b=sizeof(X);
	//int c=sizeof(Y);
	//int d=sizeof(Z);

	//A *pa=new A;
	//X *px=new X; 
	//Y *py=new Y;
	//print(*pa);
	//draw(*pa);
	//print(*px);
	//draw(*px);
	//print(*py);
	//draw(*py);
	//cTest ctest;
	//
	//int offset=(int)&(ctest.i)-(int)(&ctest);
	//int offset1=(int)(&((cTest*)0)->i);
	//int offset2=(int)(&((cTest*)8)->i)-8;
	//int b[6]={1,2,3,4,5,6};
	//int (*a)[2][3]={&b[0],&b[1],&b[2],&b[3],&b[4],&b[5]};
	int p[2][3]={1,2,3,4,5,6};
	int (*a)[2][3]=&p;
	int (**pa)[2][3]=&a;
	//int (**pa)[2][3]=&(&p);
	//int *a=new int;
	//int (*p)[3]=a;int *p1=a[1];int *p2=&a[0][2];
	//int **p=&a;
	//int r=**p;
	/*ctest.i=10;
	int b=100;*/
	//int c=fAdd(ctest.i,b);
	return 0;
}

