#include<iostream>

using namespace std;

int main()
{

    std::cout<<true<<endl;  // PRINTS 1 IN THE PLACE OF true
    std::cout<<false<<endl; // PRINTS 0 IN THE PLACE OF false

    /* ! THE EXCLAMATION MARK BEFORE true AND false PRINTS IT'S OPPOSITE VALUE */





    std::cout<<std::boolalpha;  // BOOLALPHA LET THE true OR false PRINT DIRECTLY

    std::cout<<true<<endl;  // PRINTS true DIRECTLY
    std::cout<<false<<endl; // PRINTS false DIRECTLY
    /// Opposite value
    std::cout<<!true<<endl;  // PRINTS false DIRECTLY
    std::cout<<!false<<endl; // PRINTS true DIRECTLY







    bool a=true,b=false;

    std::cout<<a<<endl;     // PRINTS a=true
    std::cout<<b<<endl;     // PRINTS b=false





    return 0;
}
