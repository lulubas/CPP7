#include "iter.hpp"

int main( void ) {
    int i;
    int arr[5] = {0, 1, 2, 3, 4};
    std::cout << "Array is:";
    for (i = 0;i<5;i++)
        std::cout << " " << arr[i]; 
    std::cout << std::endl << "Checking each element using the iter function:";
    iter(arr, 5, printElement<int>);
    return 0;
}