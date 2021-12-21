#include <iostream>

//functions
int add(){
    int a;
    int b;

    std::cout << "Inter the first number, for addition" << std::endl;
    std::cin >> a;
    std::cout << "Enter second number, for addition" << std::endl;
    std::cin >> b;
    return a+b;
}

int sub(){
    int big;
    int small;

    std::cout << "enter the big number, for subtraction" << std::endl;
    std::cin >> big;
    std::cout << "enter smaller number to be subtracted" << std::endl;
    std::cin >> small;
    return big-small;
}

int mult(int first, int second){
    //std::cout << "enter first number for multiply" std::endl;
    //std::cin >> first;
    //std::cout << "enter second number for multiply" std::endl;
    //std::cin >> second;
    return first*second;
}

//main
int main()
{
    int summation{ add() };
    int subtraction{ sub() };
    /*using fuction as parameters. Because the order in which how the parameters are read may vary
      eg.) left to right or right to left. For variables this is not an issue but for functions it is.
      Especially if u want 1 function to exdcute before the other. */
    std::cout << "This is the multiplication of both final results:" << '\n' << mult(summation, subtraction) << std::endl;
    return 0;
}
