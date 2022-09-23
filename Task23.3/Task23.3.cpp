#include <iostream>
#define PASS(name,result) name##_##result
void passengers_car(int passengers[])
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter the number of passengers in " << i + 1 << " car ";
        std::cin >> passengers[i];
        if (passengers[i] > 20)
            std::cout << "there are more than 20 passengers in the car!!!!!\n";
    }
}
int passengers_sum(int passengers[])
{
    int temp = 0;
    for (int i = 0; i < 10; i++)
    {
        temp += passengers[i];
    }
    return temp;
}
int main()
{
    int passengers[10];
    PASS(passengers,car)(passengers);
    std::cout<<PASS(passengers, sum)(passengers)<<std::endl;
    
    
}
