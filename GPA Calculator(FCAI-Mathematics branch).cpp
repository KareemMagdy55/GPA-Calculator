#include <iostream>
using namespace std ;

void   gpaCalculator_MATH(){

    int number_of_subjects = 6 ;


    string subjects[ 6 ] = {"CS" ,"Electronics" , "MATH-1" , "Creative thinking" , "Human rights", "Technincal writing"};
    string grades[number_of_subjects] = {};
    int credit_hours [ 6 ]= {3 , 3 , 3 , 2 , 2 , 2 };
    float point [number_of_subjects ]= {};



    for (int i = 0 ; i < number_of_subjects ; i++){
        cout << "enter " << subjects[i] << " grade :"; cin >> grades[i];
    }


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
    
    gpaCalculator_MATH() ;

    return 0;
}
