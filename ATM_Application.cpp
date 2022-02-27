#include <iostream>

void ShowMenu(){
    std::cout << "***************WELCOME TO ZIRAAT BANK****************"<<std::endl;
    std::cout << "1-Check balance"<<std::endl;
    std::cout << "2-Deposit money"<<std::endl;
    std::cout << "3-Withdraw balance"<<std::endl;
    std::cout << "4-Exit"<<std::endl;
}

int main(){

    unsigned int option;
    double balance = 5000; // bu global olarak burada olmalı ki deposit ve withdraw da değeri değişebilsin

    while (option!=4)  //  do while olarak da yapılabilir
    {

    ShowMenu(); 
    
    std::cout << "Option:"<<std::endl;
    std::cin >> option;

    switch (option){
    case 1:
        std::cout << "Balance: "<< balance << std::endl;
        break;
    case 2:
        std::cout << "Enter money amount that you will deposit: "<< std::endl;
        double depositMoney;
        std::cin >> depositMoney;
        balance += depositMoney;
        break;
    case 3:
        std::cout << "Enter money amount that you will withdraw: "<< std::endl;
        double withdrawMoney;
        std::cin >> withdrawMoney;
        if(balance >= withdrawMoney)
            balance -= withdrawMoney;
        else    
            std::cout << "No enough money is available in your account!!!"<<std::endl;
        break;        
    }
    }
    //}while(option!=4); 

    return 0;
}  