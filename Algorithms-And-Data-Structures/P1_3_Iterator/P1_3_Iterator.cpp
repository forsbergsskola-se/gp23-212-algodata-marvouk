
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
    vector<int> number{1,1,2,3,5};
    
    for(auto it = number.begin(); it != number.end(); ++it)
    {
        std:: cout << *it;
    }
    
    return 0;
}
