#include <iostream>
using namespace std ;

void gpaCalculator(){
    
    int number_of_subjects = 0 ;
    cout<< "enter number of subjects :" ;
    cin >> number_of_subjects;

    string subjects[number_of_subjects] = {};
    string grades[number_of_subjects] = {};
    int credit_hours [ number_of_subjects ]= {};
    float point [number_of_subjects ]= {};

    for (int i = 0 ; i < number_of_subjects ; i+=1){
        cout << "enter subject number "<< i + 1 << " :" ; cin >> subjects[i];}

    for (int i = 0 ; i < number_of_subjects ; i++){
        cout << "enter " << subjects[i] << " grade :"; cin >> grades[i];
        cout << "enter " << subjects[i] << " credit hours :"; cin >> credit_hours[i];}
    
    for (int i = 0 ; i < number_of_subjects ; i++) {
        if (grades[i]=="A+" || grades[i]=="a+" )
        {    point [i]=4;}
        else if (grades[i]=="A" || grades[i]=="a")
        {    point [i]=3.7;}
        else if (grades[i]=="B+" || grades[i]=="b+")
        {    point [i]=3.3;}
        else if (grades[i]=="B" || grades[i]=="b")
        {    point [i]=3;}
        else if (grades[i]=="C+" || grades[i]=="c+")
        {   point [i]=2.7;}
        else if (grades[i]=="C" || grades[i]=="c")
        {  point [i]=2.4;}
        else if (grades[i]=="D+" || grades[i]=="d+")
        { point [i]=2.2;}
        else if (grades[i]=="D" || grades[i]=="d")
        {   point [i]=2;}
        else
        {  point [i] =0;}
    }


    float sum = 0 ;
    int total_hours = 0 ;

    for (int i = 0 ; i < number_of_subjects ; i+=1){
        sum = sum + (point[i] * credit_hours[i] );
        total_hours = total_hours + credit_hours [i] ;
    }

    cout << "GPA is " << sum / total_hours ;
}

int main() {
    
    gpaCalculator() ;

    return 0;
}
