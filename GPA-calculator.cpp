#include <iostream>
#include <vector>
using namespace std ;

void gpaCalculator();

int main() {

    gpaCalculator() ;

    return 0;
}


void tolower(string & word){
    for(char&c : word){
        c = tolower(c);
    }
}

void gpaCalculator(){

    int numberOfSubjects = 0 ;
    cout<< "enter number of subjects :" ;
    cin >> numberOfSubjects;


    vector <string> subjects(numberOfSubjects);
    vector <string> grades(numberOfSubjects);
    vector <int> creditHours(numberOfSubjects);
    vector <float> point(numberOfSubjects);

    for (int i = 0 ; i < numberOfSubjects ; i++){
        cout << "enter subject number "<< i + 1 << " :" ;
        cin >> subjects[i];
    }

    for (int i = 0 ; i < numberOfSubjects ; i++){
        cout << "enter " << subjects[i] << " grade :";
        cin >> grades[i];
        cout << "enter " << subjects[i] << " credit hours :";
        cin >> creditHours[i];
    }

    for (int i = 0 ; i < numberOfSubjects ; i++) {
        tolower(grades[i]);
        if ( grades[i]=="a+" ) point[i]=4;

        else if ( grades[i]=="a") point[i]=3.7;

        else if (grades[i]=="b+") point[i]=3.3;

        else if (grades[i]=="b") point[i]=3;

        else if ( grades[i]=="c+")  point[i]=2.7;

        else if (grades[i]=="c")  point[i]=2.4;

        else if (grades[i]=="d+") point[i]=2.2;

        else if ( grades[i]=="d") point[i]=2;

        else point[i] =0;
    }

    float sum = 0 ;
    int totalHours = 0 ;

    for (int i = 0 ; i < numberOfSubjects ; i+=1){
        sum += (point[i] * (float)creditHours[i] );
        totalHours +=  creditHours[i] ;
    }

    cout << "GPA is " << sum / (float)totalHours ;
}


