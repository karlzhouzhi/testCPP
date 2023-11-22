#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    
    void helloworld();
    helloworld();
    return 0;
}

void helloworld(){
    cout << "hello world" << endl;
    printf("hello world\n");
    vector<string> msg = {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    for (const string& word : msg){
        cout << word << " ";
    }
    cout << endl;
}