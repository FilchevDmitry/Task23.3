#include <iostream>
#define car(passengers,n) for (int i = 0; i < (n); i++)\
    {std::cout << "Enter the number of passengers in " << i + 1 << " car ";\
    std::cin >> passengers[i];}
    
#define sum(passengers,n) int temp = 0;\
    for (int i = 0; i < (n); i++)\
     temp += passengers[i];\
     std::cout<<temp<<std::endl;

int main()
{
    const int N = 10;
    int passengers[N];
    car(passengers,N);
    sum(passengers,N);
}
