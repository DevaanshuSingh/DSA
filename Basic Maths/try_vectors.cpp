#include<iostream>
#include<vector>
using namespace std;

//Vectors Are Dynamic Arrays(Updatable(It's Size Can Be Updated));
int main(){
    vector<int> var1;// Declared A Vector Variable Without Any Pre DefinedSize

    vector<int> var2={1,2,3};// Declared A Vector Variable Without 3 Values;

    vector<int> var3(2,0);// Declared A Vector Variable With Size 3([0,1,2]) And In Each Place Now The Value Is 0;

    cout<<"Size Of Val3 Is: "<<var3.size()<<endl;
    return 0;

}