#include<stdio.h>
struct {
    int ***ippp; //this is pointer to a pointer to a pointer to an int
    int *ipp; //this is pointer to a pointer to an int
    int *ip; //this is pointer to an int
    int i;
} p;

int main(int ac, char **av)
{
    p.ippp = &p.ipp;
    p.ipp = &p.ip;
    p.ip = &p.i;
    p.i = 0x55555555;

    return 0;
}