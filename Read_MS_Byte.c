#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>


int ReadMSByte(int num)
{
    num = num & 0xff000000;
    num = num>>24;
    num = num & 0x000000ff;
    return num;
}

int main()
{
    int data = 0xcd000000;
    int res = ReadMSByte(data);
    printf("%x",res);
    return 0;
}