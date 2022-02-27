#include <iostream>
using namespace std;

int main(){

    int Qrooms=0, Qpastas=0, Qburgers=0, Qnoodles=0, Qshakes=0, Qchickens=0;
    int Srooms=0, Spastas=0, Sburgers=0, Snoodles=0, Sshakes=0, Schickens=0;
    int Trooms=0, Tpastas=0, Tburgers=0, Tnoodles=0, Tshakes=0, Tchickens=0;

    cout << "Rooms available:" << endl;
    cin >> Qrooms;
    cout << "Pastas available:" << endl;
    cin >> Qpastas;
    cout << "Burgers available:" << endl;
    cin >> Qburgers;
    cout << "Noddles available:" << endl;
    cin >> Qnoodles;
    cout << "Shakes available:" << endl;
    cin >> Qshakes;
    cout << "Chickens available:" << endl;
    cin >> Qchickens;

    int option = 0;
    
    //do{
    while(option!=8){
        
    cout << "****************MENU**************"<< endl;
    cout << "1 - Room" << endl;
    cout << "2 - Pasta" << endl;
    cout << "3 - Burger" << endl;
    cout << "4 - Noodle" << endl;
    cout << "5 - Shake" << endl;
    cout << "6 - Chicken" << endl;
    cout << "7 - More Details" << endl;
    cout << "8 - Exit" << endl;

    cout << "Option:" << endl;
    cin >> option;
    
    int number = 0;

    switch(option){
        case 1:
        cout << "Enter number of rooms you want to rent:"<< endl;
        cin >> number;
        if(Qrooms - Srooms >= number){
            Srooms += number;
            Trooms += number * 2000;
        }    
        else    
            cout << "No enough number of rooms, Sorry !!!";    
        break;

        case 2:
        cout << "Enter number of pastas you want to have:"<< endl;
        cin >> number;
        if(Qpastas - Spastas >= number){
            Spastas += number;
            Tpastas += number * 100;
        }    
        else    
            cout << "No enough number of pastas, Sorry !!!";    
        break;

        case 3:
        cout << "Enter number of burgers you want to eat:"<< endl;
        cin >> number;
        if(Qburgers - Sburgers >= number){
            Sburgers += number;
            Tburgers += number * 50;
        }    
        else    
            cout << "No enough number of burgers, Sorry !!!";    
        break;

        case 4:
        cout << "Enter number of noodles you want to eat:"<< endl;
        cin >> number;
        if(Qnoodles - Snoodles >= number){
            Snoodles += number;
            Tnoodles += number * 20;
        }    
        else    
            cout << "No enough number of noodles, Sorry !!!";    
        break;

        case 5:
        cout << "Enter number of shakes you want to drink:"<< endl;
        cin >> number;
        if(Qshakes - Sshakes >= number){
            Sshakes += number;
            Tshakes += number * 15;
        }    
        else    
            cout << "No enough number of shakes, Sorry !!!";    
        break;

        case 6:
        cout << "Enter number of chickens you want to eat:"<< endl;
        cin >> number;
        if(Qchickens - Schickens >= number){
            Schickens += number;
            Tchickens += number * 60;
        }    
        else    
            cout << "No enough number of rooms, Sorry !!!";    
        break;

        case 7:
        cout << "More details: "<< endl<<endl;
        cout << "Number of rooms we had: " << Qrooms <<endl;
        cout << "Number of rooms we sold: " << Srooms << endl;
        cout << "Remaining rooms: " << Qrooms - Srooms <<endl;
        cout << "Total gain from rooms: " << Trooms << endl << endl; 

        cout << "Number of pastas we had: " << Qpastas <<endl;
        cout << "Number of pastas we sold: " << Spastas << endl;
        cout << "Remaining pastas: " << Qpastas - Spastas <<endl;
        cout << "Total gain from pastas: " << Tpastas << endl << endl; 

        cout << "Number of burgers we had: " << Qburgers <<endl;
        cout << "Number of burger we sold: " << Sburgers << endl;
        cout << "Remaining burgers: " << Qburgers - Sburgers <<endl;
        cout << "Total gain from burgers: " << Tburgers << endl << endl; 

        cout << "Number of noodle we had: " << Qnoodles <<endl;
        cout << "Number of noodles we sold: " << Snoodles << endl;
        cout << "Remaining noodles: " << Qnoodles - Snoodles <<endl;
        cout << "Total gain from noodles: " << Tnoodles << endl << endl; 

        cout << "Number of shakes we had: " << Qshakes <<endl;
        cout << "Number of shakes we sold: " << Sshakes << endl;
        cout << "Remaining shakes: " << Qshakes - Sshakes <<endl;
        cout << "Total gain from shakes: " << Tshakes << endl << endl; 

        cout << "Number of chickens we had: " << Qchickens <<endl;
        cout << "Number of chickens we sold: " << Schickens << endl;
        cout << "Remaining chickens: " << Qchickens - Schickens <<endl;
        cout << "Total gain from chickens: " << Tchickens << endl << endl;  

        cout << "Total gain from all assets: " << Trooms + Tpastas + Tburgers + Tnoodles + Tshakes + Tchickens<< endl; 
        break;

        case 8:
            exit(0);
        break;

        default:
            cout << "Please enter a valid number!";
        break;

    }
    }
    //}while(option!=8);
    
    //goto m;
    return 0;
}