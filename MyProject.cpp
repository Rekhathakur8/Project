#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class Student{
    string userid,password,Name,Father_Name,Mother_Name;
    int Age,Roll_No;
    char Gender;
    public:
    string accessN(){
        return Name;
    }
    int accessR(){
        return Roll_No;}
    string showId(){
        return userid; }
        string showpass(){
            return password;
        }
    void getUserId(){
        cout<<"SIGN UP"<<endl;
        cout<<endl<<endl;
        cout<<"USER ID    ";
        cin>>userid;
        cout<<"PASSWORD   ";
        cin>>password;
    cout<<"your id is created successfully"<<endl;}
   void getdata(){
     cout<<"ROLLNO   ";
     cin>>Roll_No;
     cout<<"NAME    ";
     cin>>Name;
     cout<<"FATHER NAME  ";
     cin>>Father_Name;
     cout<<"MOTHER NAME  ";
     cin>>Mother_Name;
     cout<<"GENDER  ";
     cin>>Gender; }
    void showdata(){
        cout<<"ROLLNO   "<<Roll_No<<endl;
     cout<<"NAME    "<<Name<<endl;
     cout<<"FATHER NAME  "<<Father_Name<<endl;
     cout<<"MOTHER NAME "<<Mother_Name<<endl;
     cout<<"GENDER  "<<Gender<<endl;
    }
    void heading(){
        cout.setf(ios::left);
        cout<<setw(20)<<"ROLLNO";
        cout<<setw(20)<<"NAME";
        cout<<setw(20)<<"FATHER NAME";
        cout<<setw(20)<<"MOTHER NAME";
        cout<<setw(20)<<"GENDER";
        cout<<endl; }
   void listdata(){
     cout.setf(ios::left);
        cout<<setw(20)<<Roll_No;
        cout<<setw(20)<<Name;
        cout<<setw(20)<<Father_Name;
        cout<<setw(20)<<Mother_Name;
        cout<<setw(20)<<Gender;
        cout<<endl;}
    void datamodify(){
     cout<<"NAME    ";
     cin>>Name;
     cout<<"FATHER NAME  ";
     cin>>Father_Name;
     cout<<"MOTHER NAME  ";
     cin>>Mother_Name;
     cout<<"GENDER  ";
     cin>>Gender;
    }
    };
void menu(){
        cout<<"Students record 2023"<<endl;
        cout<<"B.tech (computer science department)"<<endl;
        cout<<"1.  ENTER STUDENT DATA"<<endl;
        cout<<"2.  SHOW ALL THE DATA"<<endl;
        cout<<"3.  SEARCH STUDENT DATA(ENTER ROLL NUMBER)"<<endl;
        cout<<"4.  SEARCH STUDENT DATA(ENTER STUDENT NEME)"<<endl;
        cout<<"5.  DATA MODIFYCATION"<<endl;
        cout<<"6.  DELETE DATA"<<endl;
        cout<<"ENTER YOUR CHOICE"<<endl; }
int main(){
       Student Professor;
       Professor.getUserId();
        system("cls");
        system("pause");
       string USERid,Password;
       cout<<"LOGIN"<<endl;
       cout<<"USER ID  "; cin>>USERid; cout<<"PASSWORD  "; cin>>Password;
    if(USERid==Professor.showId() && Password==Professor.showpass()){
             cout<<"login succesfully-_---:"<<endl;
       }
       else{
        cout<<"please try again letter:"<<endl;
       }
      // process afeter login
      int choice,n=0,rollnum,pos; string NAME;
      Student s[100];
      do{
        system("cls");
        menu();
        cin>>choice;
        switch (choice) {
    case 1:  s[n].getdata(),n++;
         cout<<"data saved successfully  "<<endl;
            break;
    case 2: if(n>0){
            s[0].heading();
            for(int i=0; i<n; i++){
                s[i].listdata();
                 }}else{cout<<"no record here"<<endl;} 
                break;
    case 3: if(n>0){
            cout<<"SEARCH"<<endl;
            cout<<"ENTER ROLLNUMBER"<<endl;
            cin>>rollnum;
            for(int i=0; i<n; i++){
            if(rollnum==s[i].accessR()){
                s[i].showdata(); 
                break;}
                else{cout<<"please enter correct rollnumber";}
            }}else{cout<<"no record here"<<endl;} 
           break;
    case 4: if(n>0){
            cout<<"SEARCH"<<endl;
            cout<<"ENTER NAME"<<endl;
            cin>>NAME;
            for(int i=0; i<n; i++){
            if(NAME==s[i].accessN()){
                s[i].showdata();
                break; }
                else{cout<<"please enter correct rollnumber";}
            }}else{cout<<"no record here"<<endl;} 
           break;
    case 5:  if(n>0){
            cout<<"SEARCH"<<endl;
            cout<<"ENTER ROLLNUMBER"<<endl;
            cin>>rollnum;
            for(int i=0; i<n; i++){
            if(rollnum==s[i].accessR()){
                cout<<"DATA FOR MODIFICATION"<<endl;
                s[i].showdata();
                cout<<"now modify the data:"<<endl;
                s[i].datamodify();
                cout<<"data modification done successfully"<<endl;
                break; }
                else{cout<<"please enter correct rollnumber";}
            }}else{cout<<"no record here"<<endl;} 
           break;
    case 6: cout<<"SEARCH"<<endl;
            cout<<"ENTER ROLLNUMBER"<<endl;
            cin>>rollnum;
            for(int i=0; i<n; i++){
            if(rollnum==s[i].accessR()){
                cout<<"data which has to be deleted"<<endl;
                s[i].showdata();
                pos=i;
                }
                for(int i=pos; i<n-1; i++){
                    s[i]=s[i+1];
                    n--;}
                    cout<<"date deleted successfull";
            } 
           break;
           } 
        system("pause");
      }
      while(choice);
      
    return 0;
}
