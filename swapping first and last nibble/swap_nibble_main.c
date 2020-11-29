#include <stdio.h>
#include <stdlib.h>
void swap_nibble(int );
int main()
{
    int a;

    printf("Enter a number\n");
    scanf("%d",&a);
    swap_nibble(a);
    return 0;
}
void swap_nibble(int a){
    int b,c,d,e,f;
    if(a<15){
        d=a;
    }
    else if(a<255)    //8 bit data
    {
    b=a&0xf0;
    c=a&0x0f;
    b=b>>4;
    c=c<<4;
    d=b+c;
    }
    else if(a<4095)    //12 bit data
    {
    b=a&0xf00;
    c=a&0x00f;
    e=a&0x0f0;
    b=b>>8;
    c=c<<8;
    d=b+c+e;
    }
    else if(a<65535)   //16 bit data
    {
    b=a&0xf000;
    c=a&0x000f;
    e=a&0x0f00;
    f=a&0x00f0;
    b=b>>12;
    c=c<<12;
    d=b+c+e+f;
    }
    printf("Before swapping is  %d\n",a);
     printf("Number after swapping the nibble is %d",d);
}
