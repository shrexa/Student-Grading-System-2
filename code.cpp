#include<iostream>
#include <string>
using namespace std;


int main(){
    // int grades=88;
    // cout<<"grades are :";
    // cout<<grades;
    // cout <<"Enter the respective grades of student : ";

    string Name;
    cout<<"Please enter the name of Student : ";
    cin>>Name;
    

    string str;
    int n;
    cout<<"Enter total number of subjects\n";
    cin >> n;
    cout<<"Enter names of all subjects\n";
    for (int i=0; i< n+1; i++) {
    getline(cin, str);

    }
    int grades[n];
    cout <<"Enter the respective grades of student : ";
    for (int i = 0; i < n; i++){
    cin>> grades[i] ;
    }   
     for (int i = 0; i < n; i++) {
    cout<<str<<" : " << grades[i]<<endl;
    }  

    return 0;
}