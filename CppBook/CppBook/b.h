#ifndef __B_H

#define __B_H

#if 1
typedef struct {
	int x;
	int y;
	int z;
} A_class;
#endif

extern A_class local_post; //外部结构体变量声明
extern A_class fun(A_class x, A_class y); // 接口函数声明；


#endif