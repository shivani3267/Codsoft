/* Student Grading System*/

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

 typedef struct sstudents{
    string name;
    double grade;
} Students;

int main()
{
    int n=0;
   vector<Students> students;
    string temp_name;
    double temp_grade;
    cout<<"\n\t\t\t***********************Student Grading System**********************\n\n";
    cout<<"Enter number of students :";
    cin>>n;
    //input grade and name
    for(int i=0; i<n; i++){
        cout<<"\n Enter student name:";
        cin>>temp_name;
        cout<<"\nEnter grade of student "<<temp_name<<" :";
        cin>>temp_grade;
        students.push_back({temp_name,temp_grade});
    }
    
    //calculate average
    double sum=0;
    for(const auto& student: students){
        sum+=student.grade;
    }
    double avg=sum/n;
    

    //calculate highest grade
   auto max_grade=max_element(students.begin(),students.end(),[](const Students& s1, const Students& s2)
   {
    return s1.grade < s2.grade;
   });
    

   //calculate lowest grade
    auto min_grade=min_element(students.begin(),students.end(),[](const Students& s1, const Students& s2)
   {
    return s1.grade < s2.grade;
   });

   //Results
   cout<<"\n Average grade = "<<avg<<endl;
   cout<<"Highest grade : "<<max_grade->grade<<"->"<<max_grade->name<<endl;
   cout<<"Lowest grade : "<<min_grade->grade<<"->"<<min_grade->name<<endl;
   
cout<<"Done";
    return 0;
}
