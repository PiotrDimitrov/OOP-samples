#include <iostream>

namespace indx{
    class TestClass{
    public:
        TestClass(){
        }
        int& operator [](int index){
            return arr[index - 1];
        }
    private:
        int arr[5]{1,2,3,4,5};
    };
}

void indexOperOvrld() {
    indx::TestClass a;
    std::cout << a[5] << std::endl;
    a[4] = 6;
    std::cout << a[4] << std::endl;
}