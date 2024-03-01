#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>


int ReadMSByte(int num)
{
    num = num>>24;
    return num;
}

int main()
{
    int data = 0xcd000000;
    uint8_t res = ReadMSByte(data);
    printf("%x",res);
    return 0;
}