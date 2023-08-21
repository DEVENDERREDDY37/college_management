
//CS ASSIGNMENT 10 MINOR PROJECT:- 

//C++ CODE FOR THE MINOR PROJECT :-

#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
 char inf[250];
 string arr1[20],sname[20],arr2[20],arr3[20],arr4[20],arr5[20],arr6[20],arr7[20],arr8[20],arr9[20];
 int marks,id,c,i,total=0,sum=0;
void info()
{
    cout<<"enter the information that you want to share with students and faculty members \n";
    cin.ignore();
   cin.getline(inf,250);
}
void update()
{
    cout<<"enter the information that you want to update\n";
    cin.ignore();
    cin.getline(inf,250);
}
void display()
{
    cout<<"updated information is:-"<<inf<<"\n";
}
void faculty_e()
{
    cout<<"enter the no of faculty members that u want to store  \n";
    cin>>c;
        if(total==0)
    {
        total=total+c;
    for(int i=0;i<c;i++)
    {
        cout<<"\n enter the data of faculty:"<<i+1<<"\n"<<endl;
        cout<<"\n enter the name of the faculty \n";
       cin>>arr1[i];
        cout<<"\n enter the id of the faculty \n";
        cin>>arr2[i];
        cout<<"\n enter the qualification of the faculty \n";
        cin>>arr3[i];
        cout<<"\n enter the subject allocated to the faculty\n";
        cin>>arr4[i];
        cout<<"\n enter the no of years of experience taken by the faculty \n";
        cin>>arr5[i];
    }
    }
    else
    {
        for(int i=total;i<total+c;i++)
    {
        cout<<"\n enter the data of faculty:"<<i+1<<"\n"<<endl;
        cout<<"\n enter the name of the faculty \n";
     cin>>arr1[i];
        cout<<"\n enter the id of the faculty \n";
        cin>>arr2[i];
        cout<<"\n enter the qualificatin of the faculty \n";
        cin>>arr3[i];
        cout<<"\n enter the subject allocated to the faculty\n";
        cin>>arr4[i];
        cout<<"\n enter the no of years of experience taken by the faculty \n";
        cin>>arr5[i];
    }
    total=total+c;
    }

}
void display_f()
{
    cout<<"================================================displaying the faculty details====================================\n";
        for(int i=0;i<total;i++)
    {
        cout<<"data of faculty:"<<i+1<<"\n"<<endl;
        cout<<"\nname:"<<arr1[i];
        cout<<"\nid:"<<arr2[i];
        cout<<"\nqualification:"<<arr3[i];
        cout<<"\nsubject allocated:"<<arr4[i];
        cout<<"\nno of years of experience:"<<arr5[i];
        cout<<"\n";
    }

}
void update_f()
{
    string id;
    cout<<"enter the id of the faculty that you want to update\n";
    cin>>id;
    for(int i=0;i<total;i++)
    {
        if(id==arr2[i])
        {
            cout<<"previous data \n";
            cout<<"\nname:"<<arr1[i];
        cout<<"\nid:"<<arr2[i];
        cout<<"\nqualification:"<<arr3[i];
        cout<<"\nsubject allocated:"<<arr4[i];
        cout<<"\nno of years of experience:"<<arr5[i];
        cout<<"\n";
        cout<<"new data \n";
        cout<<"\n enter the data of faculty:"<<i+1<<"\n"<<endl;
        cout<<"\n enter the name of the faculty \n";
     cin>>arr1[i];
        cout<<"\n enter the id of the faculty \n";
        cin>>arr2[i];
        cout<<"\n enter the qualificatin of the faculty \n";
        cin>>arr3[i];
        cout<<"\n enter the subject allocated to the faculty\n";
        cin>>arr4[i];
        cout<<"\n enter the no of years of experience taken by the faculty \n";
        cin>>arr5[i];
    }
    }
}
void student_e()
{
        int sdata;
    cout<<"how many number of students data you want to enter \n";
    cin>>sdata;
    
    if(sum==0)
    {
        sum=sum+sdata;
    for(int j=0;j<sdata;j++)
    {
        cout<<"\n enter the data of student:"<<j+1<<"\n"<<endl;
        cout<<"\n enter the name of the student \n";
        cin>>sname[j];
        cout<<"\n enter the rollnumber of the student \n";
        cin>>arr6[j];
        cout<<"\n enter the branch of the student \n";
        cin>>arr7[j];
        cout<<"\n enter the semster of the student \n";
        cin>>arr8[j];
        cout<<"\n enter the no of subjects taken by the student \n";
        cin>>arr9[j];
        cout<<"\n enter the marks of the student \n";
        cin>>marks;
    }
    }
    else
    {
        for(int j=sum;j<sum+sdata;j++)
    {
        cout<<"\n enter the data of student:"<<j+1<<"\n"<<endl;
        cout<<"\n enter the name of the student \n";
        cin>>sname[j];
        cout<<"\n enter the rollnumber of the student \n";
        cin>>arr6[j];
        cout<<"\n enter the branch of the student \n";
        cin>>arr7[j];
        cout<<"\n enter the semster of the student \n";
        cin>>arr8[j];
        cout<<"\n enter the no of subjects taken by the student \n";
        cin>>arr9[j];
        cout<<"\n enter the marks of the student \n";
        cin>>marks;
    }
    sum=sum+sdata;
    }

}
void display_s()
{
    for(int j=0;j<sum;j++)
    {
        cout<<"data of student:"<<j+1<<"\n"<<endl;
        cout<<"\nname:"<<sname[j];
        cout<<"\nrollnumber:"<<arr6[j];
        cout<<"\nbranch:"<<arr7[j];
        cout<<"\nsemster:"<<arr8[j];
        cout<<"\nno of subjects:"<<arr9[j];
        cout<<"\nmarks:"<<marks;
        cout<<"\n";
    }

}
void update_s()
{
        string rollnum;
    cout<<"enter the rollnumber of the student to update the data \n";
    cin>>rollnum;
    for(int j=0;j<sum;j++)
    {
    
     if(rollnum==arr6[j])
        {
            cout<<"previous data: \n";
             cout<<"data of student:"<<i+1<<"\n"<<endl;
        cout<<"\nname:"<<sname[j];
        cout<<"\nrollnumber:"<<arr6[j];
        cout<<"\nbranch:"<<arr7[j];
        cout<<"\nsemster:"<<arr8[j];
        cout<<"\nno of subjects:"<<arr9[j];
        cout<<"\nmarks:"<<marks;
        cout<<"enter the new data:\n";
        cout<<"\n enter the data of student:"<<j+1<<"\n"<<endl;
        cout<<"\n enter the name of the student \n";
        cin>>sname[j];
        cout<<"\n enter the rollnumber of the student \n";
        cin>>arr6[j];
        cout<<"\n enter the branch of the student \n";
        cin>>arr7[j];
        cout<<"\n enter the semster of the student \n";
        cin>>arr8[j];
        cout<<"\n enter the no of subjects taken by the student \n";
        cin>>arr9[j];
        cout<<"\n enter the marks of the student \n";
        cin>>marks;
        
        }
    }

}
void admin()
{
    int a;
    cout<<"========================================================admin portal========================================\n";
    cout<<"============================================================================================================\n";
    cout<<"hello sir/mam now you are in admin portal of iiit bhagalpur\n";
    cout<<"here the information is shared and updated \n";
    cout<<"press 1 to input information\n";
    cout<<"press 2 to display the information \n";
    cout<<"press 3 to input the new information \n";
    cin>>a;
    switch(a)
    {
        case 1:
       info();
        break;
        case 2:
       display();
        break;
        case 3:
        update();
        break;
        default:
        cout<<"ur input is invalid \n";
        break;
    }
    
    
}
void faculty()
{
    int b;
    cout<<"===================================================faculty portal============================================\n";
    cout<<"=============================================================================================================\n";
    cout<<"press 1 to enter information of faculty\n";
    cout<<"press 2 to display the information of faculty\n";
    cout<<"press 3 to update the information of faculty\n";
    cout<<"enter a vaild number to inputdata/display/updatedata\n";
    cin>>b;
    switch(b)
    {
        case 1:
        faculty_e();
        break;
        case 2:
        display_f();
        break;
        case 3:
        update_f();
        break;
        default:
        cout<<"u have given an invalid input please try to give a valid one\n";
        break;
    }
    
}
void student()
{
    int d;
    cout<<"====================================================student portal============================================\n";
    cout<<"===============================================================================================================\n";
    cout<<"press 1 to enter information of students \n";
    cout<<"press 2 to display information of students \n";
    cout<<"press 3 to update the information of the students\n";
    cout<<"enter the no of students data that you want to enter \n";
    cin>>d;
    switch(d)
    {
        case 1:
        student_e();
        break;
        case 2:
        display_s();
        break;
        case 3:
        update_s();
        break;
        default:
        cout<<"u have given an invalid input please try to give a valid one\n";
        break;
    }
}
int main()
{
    int value;
    while(true)
    {
        cout<<"==============================================college management========================================\n";
        cout<<"========================================================================================================\n";
        cout<<"press 1 to see admin portal \n";
        cout<<"press 2 to see faculty portal \n";
        cout<<"press 3 to see student portal \n";
        cout<<"press 4 to exit the database \n";
        cout<<"enter a valid number to get into the above portal\n";
        cin>>value;
        switch(value)
        {
            case 1:
            admin();
            break;
            case 2:
            faculty();
            break;
            case 3:
            student();
            break;
            case 4:
            exit(0);
            break;
            default :
            cout<<"u have enterd invalid number \n";
            break;
        }
    }
}

//OUTPUT OF THE CODE:-











//THIS PROJECT WAS DONE BY :
//NAME:- M.DEVENDER REDDY.
//ROLLNO:- 2001053.
//BRANCH:-ECE,2ND YEAR.