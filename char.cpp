#include <iostream>
#include <unistd.h>
int main(int argc, char const *argv[])
{
    char backslash = '\\'; //i em decimal
    char apostrophe = '\'';
    std::cout << backslash << std::endl;

    std::cout << apostrophe << std::endl;
    std::cout << "\a " << std::endl;// barulho na bios

    sleep(2);
    std::cout << "\a " << std::endl;
    return 0;
}
