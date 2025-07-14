# Experiment3cds
Experiment 3 of the C++ And Data Structures
Grade Experiment

#include<iostream>  //Standard input output library
using namespace std;

int physics;
int maths;
int biology;

int avg=physics+maths+biology;

int main(){

int maths, physics, biology;

cout << "Enter marks for math: ";
cin >> maths;

cout << "Enter marks for physics: ";
cin >> physics;

cout << "Enter marks for biology: "; //cin is for taking input and cout is for output
cin >> biology;

//use of && operator so that both the conditions get satisfied,avg>80 and avg<90.So only if both the conditions are satisfied this will be true and it will go inside the if scope

if (avg>80 && avg<90){  
    cout<<"O grade";
}
else if (avg>70 && avg<80){
    cout<<"A+ gtade";
}

else if(avg>60 && avg<70){
    cout<<"A grade";
}

else{
    cout<<"Fail";   #the last condition is in else always
}

}

//Experiment for coordinates

#include<iostream>
using namespace std;


int main(){

int x, y;

cout << "Enter x coordinate: ";
cin >> x;

cout << "Enter y coordinate: ";
cin >> y;


if (x>0 && y>0){
    cout<<"First quadrant";
}
else if (x>0 && y<0){
    cout<<"Second quadrant";
}

else if(x<0 && y<0){
    cout<<"Third";
}

else if(x==0 && y==0){
  cout<<"origin";
}

else{
    cout<<"Fourth";
}

}




