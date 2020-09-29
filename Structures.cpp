#include<iostream>

struct node{
    int no;
} *head;



int main()
{
    struct node no1;
    struct node no2;

    no1.no = 5;
    no2.no = 10;

    std::cout << "B1 : " << no1.no << std::endl;
    std::cout << "B2 : " << no2.no << std::endl;
    /* code */ 
    return 0;
}
