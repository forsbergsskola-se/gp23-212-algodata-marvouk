
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> number{1,1,2,3,5};

    auto const iterate = number.begin();
    
    for(auto it = iterate; it != number.end(); ++it)
    {
        std:: cout << *iterate;
    }
    
    return 0;
}
