#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include <unistd.h>
#include <inttypes.h>
typedef u_int32_t u32;
typedef u_int64_t u64;
const u32 N = 16;
const u32 T = 32;
const u32 B = 27;
//char alph[] = "O|2";
char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_";
#include"shuffle.c"
#include"randomize.c"
#include"key.c"
#include"print.c"
//#include"matrix.c"
#include"encode.c"
//#include"encrypt.c"
#include"encryption_demo.c"
#include"demo.c"
	
int main() {
	encoding_demo();
	//demo();

}
