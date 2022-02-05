#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(void)
{
    Array<int> a(12);
    Array<char> b(7);
    std::cout << std::endl;
    try
	{
        for (unsigned int i = 0; i < a.size(); i++)
            a[i] = i + 2;
        for (unsigned int i = 0; i < b.size(); i++)
            b[i] = 'c' + i;
        std::cout << "a : " << std::endl << std::endl;
        for (unsigned int i = 0; i < a.size(); i++)
            std::cout << a[i] << std::endl;
        std::cout << std::endl;
        std::cout << "b : " << std::endl << std::endl;
        for (unsigned int i = 0; i < b.size(); i++)
            std::cout << b[i] << std::endl;
        std::cout << std::endl;
        std::cout << "b[b.size()] : ";
        std::cout << b[b.size()] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << std::endl;
    return(0);
}
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }