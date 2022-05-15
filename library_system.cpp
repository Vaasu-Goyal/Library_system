#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Library
{
    public:
    int id;
    char bname[80];
    char author_name[100];
    char student_name[100];
    int price,pages;

};


int main(){
    Library lib[30];
    int input=0;
    int count=0;

    while(input!=3){
        cout<<"Press 1 to input detail of id, book name,author_name,student_name ,price and pages"<<endl;
        cout<<"Press 2 to display the details: "<<endl;
        cout<<"Press 3 to quit the system"<<endl;
        cin>>input;

        switch(input)
        {

            case 1:
            start:
            cout<<"Enter the Book Id:"<<endl;
            cin>>lib[count].id;
            cout<<"Enter the Book Name:"<<endl;
            cin.getline(lib[count].bname,100,'.');
            cout<<"Enter the Author Name:"<<endl;
            cin.getline(lib[count].author_name,100,'.');
            cout<<"Enter the Student Name:"<<endl;
            cin.getline(lib[count].student_name,100,'.');
            cout<<"Enter the Price:\n$"<<endl;
            cin>>lib[count].price;
            count++;
            break;


            case 2:
            for(int i=0;i<count;i++)
            {
                cout<<"The Book Id is :"<<lib[i].id<<endl;
                cout<<"The Book name is :"<<lib[i].bname<<endl;
                cout<<"The Author name is :"<<lib[i].author_name<<endl;
                cout<<"The Student name is :"<<lib[i].student_name<<endl;
                cout<<"The Price of book is :\n$"<<lib[i].price<<endl;

            }
            break;

            case 3:
            exit(0);
            break;

            default:
            cout<<"You have enter wrong value,please try again"<<endl;
            goto start;






        }

    }
}
