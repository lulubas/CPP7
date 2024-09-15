#include "Array.hpp"

int main( void ) {
    int i;
    std::string testStr = "Hola";
    float testFloat = 42.42;
    Array<std::string> testArrayStr(5);
    Array<float> testArrayFloat(5);

    std::cout << "String=" << testStr << std::endl; 
    for (i = 0;i<5;i++)
        testArrayStr[i] = testStr;
    std::cout << "Content of the array:" << std::endl;
    for (i = 0;i<5;i++)
        std::cout << "Array[" << i << "]=" << testArrayStr[i] << std::endl;

    std::cout << std::endl << "Float=" << testFloat << std::endl; 
    for (i = 0;i<5;i++)
        testArrayFloat[i] = testFloat;
    std::cout << "Content of the array:" << std::endl;
    for (i = 0;i<5;i++)
        std::cout << "Array[" << i << "]=" << testArrayFloat[i] << std::endl;
    
    return 0;
}