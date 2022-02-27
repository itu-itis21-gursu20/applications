#include <iostream>
#include<windows.h>

// for içindeki break ler döngüyü kırıyor çünkü sürekli tekrar etmemeli ama kayıtlı hesaplar da aranmalı

using namespace std;

class Bank{
private:
    int total;
    string id;
    struct person{
        string name, ID, address;
        int contact, cash;
    }person[100];

public:
    Bank(){ total = 0;}
    void choice();
    void addData();
    void show();
    void update();
    void search();
    void transaction();
    void del();
    
};


int main(){

    Bank b;
    b.choice();

    return 0;
}


void Bank::choice(){

    while(1){

        cout << "PRESS" << endl;
        cout << "1. Create new account." << endl;
        cout << "2. View customer list." <<endl;
        cout << "3. Update information of an existing account." <<endl;
        cout << "4. Check the details of an existing account." <<endl;
        cout << "5. For transactions." << endl;
        cout << "6. Delete either a specific record or all records." << endl;
        cout << "7. Exit" << endl;

        int opt;
        cin >> opt;
        
            switch(opt){
                case 1 : Bank::addData(); break;
                
                case 2 : 

                    if(total==0)

                        cout<<"No data is entered"<<endl;
                    
                    else
                        Bank::show();

                break;


                case 3:

                    if(total==0)

                    cout<<"No data is entered"<<endl;

                    else

                    Bank::update();

                    break;
                case 4:

                    if(total==0)

                    cout<<"No data is entered"<<endl;

                    else

                    Bank::search();

                    break;

                case 5 :

                    if(total==0)

                    cout<<"No data is entered"<<endl;

                    else

                    Bank::transaction();

                    break;

                case 6:

                    if(total==0)

                    cout<<"No data is entered"<<endl;

                    else

                    Bank::del();

                    break;

                case 7 : exit(0); break;
                default : cout << "Invalid input" << endl; break;
            }
    }

}

void Bank::addData(){

    cout<< "Enter data of person" << total + 1 <<endl;
    cout << "Enter name "<<endl;
    cin >> person[total].name;
    cout << "Enter ID "<<endl;
    cin >> person[total].ID;
    cout << "Enter address "<<endl;
    cin >> person[total].address;
    cout << "Enter contact "<<endl;
    cin >> person[total].contact;
    cout << "Enter cash "<<endl;
    cin >> person[total].cash;
    total++;  // hep yeniden başlatıp yeni kişiler girilecek

}

void Bank::show(){
    for(int i=0; i<total; i++){
        cout << "Data of person " <<i+1<<endl;
        cout << "Name:" << person[i].name << endl;
        cout << "ID:" << person[i].ID << endl;
        cout << "Address:" << person[i].address << endl;
        cout << "Contact:" << person[i].contact << endl;
        cout << "Cash:" << person[i].cash << endl<<endl;
    }
}

void Bank::update(){
    //string id;
    cout<< "Enter ID of the person: " <<endl;
    cin >> id;

    for(int i = 0; i<total; i++){
        if(id == person[i].ID){
            cout << "Previous data" <<endl;
            cout<<"Data of person "<<i+1<<endl;
            cout << "Name:" << person[i].name << endl;
            cout << "ID:" << person[i].ID << endl;
            cout << "Address:" << person[i].address << endl;
            cout << "Contact:" << person[i].contact << endl;
            cout << "Cash:" << person[i].cash << endl;

            cout << "Enter the new information that you want to update"<<endl;
            cout << "Enter name "<<endl;
            cin >> person[i].name;
            cout << "Enter ID "<<endl;
            cin >> person[i].ID;
            cout << "Enter address "<<endl;
            cin >> person[i].address;
            cout << "Enter contact "<<endl;
            cin >> person[i].contact;
            cout << "Enter cash "<<endl;
            cin >> person[i].cash;
        
        break;
        }
        
    }
}

void Bank::search(){
    //string id;
    cout<< "Enter ID of the person: " <<endl;
    cin >> id;

    for(int i = 0; i<total; i++){
        if(id == person[i].ID){
            cout << "Information of that person is loading..." <<endl;
            cout << "Name:" << person[i].name << endl;
            cout << "ID:" << person[i].ID << endl;
            cout << "Address:" << person[i].address << endl;
            cout << "Contact:" << person[i].contact << endl;
            cout << "Cash:" << person[i].cash << endl;
          break;  
        }
        
    }
}

void Bank::transaction(){
    int amount;
    //string id;
    cout<< "Enter ID of the person: " <<endl;
    cin >> id;

    for(int i = 0; i<total; i++){
        if(id == person[i].ID){
            cout << "Information of that person is loading..." <<endl;
            cout << "Name:" << person[i].name << endl;
            cout << "ID:" << person[i].ID << endl;
            cout << "Address:" << person[i].address << endl;
            cout << "Contact:" << person[i].contact << endl;
            cout << "Cash:" << person[i].cash << endl;
        
    

        cout << "Press 1 to deposit money" << endl;
        cout << "Press 2 to withdraw money" << endl;
        int opt;
        cin >> opt;
        switch(opt){
            case 1 : 
            cout << "How much do you want to deposit to account?"<<endl;
            
            cin >> amount;
            person[i].cash += amount;
            cout << "Your new cash is "<< person[i].cash<<endl;
            break;

            case 2 :
            cout << "How much do you want to withdraw from account?"<<endl;
            x:
            //int amount;
            cin >> amount;
                if(amount > person[i].cash){
                    cout << "No enough money is available in account"<<endl;
                    Sleep(3000);
                    goto x;
                }
                    
                    person[i].cash -= amount;
                    cout << "Your new cash is "<< person[i].cash<<endl;
                
            break;        
        }
        }
    }
}

void Bank::del(){
    int opt;
    cout << "1 for deleting specific record"<<endl;
    cout << "2 for deleting all records"<<endl;
    cin >> opt;

    switch(opt){
        case 1 : {
        cout<< "Enter ID of the person: " <<endl;
        string id;
        cin >> id;

        for(int i = 0; i<total; i++){
            if(id == person[i].ID){
                for(int j=i; j<total; j++){
                    person[j].name = person[j+1].name ;
                    person[j].ID = person[j+1].ID ;
                    person[j].address = person[j+1].address ;
                    person[j].contact = person[j+1].contact ;
                    person[j].cash = person[j+1].cash ;
                    total--;
                    cout << "Your required data is deleted" << endl;
                    
                }
            }
            break;   //  for u kırıyor
        }
        break;  // case 1 i kırıyor
        }

        case 2:
            total = 0;
            cout << "All records are deleted from system"<<endl;
        break;  // case 2 yi kırıyor

    }

}

