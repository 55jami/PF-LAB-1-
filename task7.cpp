#include<iostream>
using namespace std;
main()
{
string name;
int matricMarks;
int fscMarks;
int ecatMarks;
float percentageOfMatric;
float percentageOfFsc;
float percentageOfEcat;
float TotalWeightage;
cout<<"Enter the name:";
cin>>name;
cout<<"Enter the matric marks:";
cin>>matricMarks;
cout<<matricMarks<<endl;
cout<<"Enter the fsc marks:";
cin>>fscMarks;
cout<<fscMarks<<endl;
cout<<"Enter the ecat marks:";
cin>>ecatMarks;
cout<<ecatMarks<<endl;
cout<<"Percentage of matric marks:";
percentageOfMatric= matricMarks/1100.0*100;
cout<<percentageOfMatric<<endl;
cout<<"Percentage of fsc marks:";
percentageOfFsc=fscMarks/550.0*100;
cout<<percentageOfFsc<<endl;
cout<<"percentage of ecat marks:";
percentageOfEcat=ecatMarks/400.0*100;
cout<<percentageOfEcat<<endl;
TotalWeightage=percentageOfFsc*0.5+percentageOfMatric*0.1+percentageOfEcat*0.4;
cout<<"Total weightage is:"<<TotalWeightage;

}