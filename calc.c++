#include<iostream>
using namespace std;

int main(){
    int subjects;
    cout<<"Enter total subjects\n";
    cin>>subjects;
    int Cr_hrs[subjects];
    char **grades;
    grades=new char * [subjects];
    for(int i = 0;i<subjects;i++){
        grades[i]=new char[50];
    }

    




}