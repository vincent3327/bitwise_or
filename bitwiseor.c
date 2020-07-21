/**************************************************************
*此为验证按位或结果的程序
验证结果:结果是按二进制展开的每位或的值
*2/12/2019
*vincent you
*nanshan hi-tech park ShenZhen
***************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define GAP_ADTYPE_FLAGS_LIMITED                            0x33 //!< Discovery Mode: LE Limited Discoverable Mode
#define GAP_ADTYPE_FLAGS_GENERAL                            0x56


int main()
{
	int i = 1;
	//int x = (++i,i++,i+10);
	unsigned short res1 = GAP_ADTYPE_FLAGS_LIMITED | GAP_ADTYPE_FLAGS_GENERAL;
	printf("res1 = %x\n",res1);
	printf("%x\n",(0x1<<2)+1);
	printf("%lu\n",(long)(1<<32));
	printf("%d\n",8<<-1);
	//(1+1)+3
	printf("%d\n",(i++)+(i++)+(i++)+(i++)+(i++));
	//printf("%d\n",(++i)+(++i)+(++i)+(++i)+(++i));
	//printf("%d\n",x);
}
