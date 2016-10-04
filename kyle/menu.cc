//Kyle Shiflett
//ks117713@ohio.edu
//CS 2401
//Project 5

#include <iostream>
#include <string>
#include <fstream>
#include "Home.h"
#include <list>

using namespace std;

void menu(){
    cout << "Please enter the number corresponding to your desired action below:\n"
         << "1. Order a new home\n"
         << "2. See all previous orders\n"
         << "3. Quit Program\n";
    }

void ordermenu(){
    cout << "What kind of home would you like to order?\n"
         << "1. Squirrel\n"
         << "2. Wolf\n"
         << "3. Ant\n"
         << "4. Pigeon\n"
         << "5. Frog\n"
         << "6. Go Back\n";
}

void ordermenu_action(int& htype, list<Home *>& collection){
    Home *tmp;
    switch(htype){
        case 1:
            tmp = new Squirrel;
            tmp->input(cin);
            collection.push_back(tmp);
            break;
        case 2:
            tmp = new Wolf;
            tmp ->input(cin);
            collection.push_back(tmp);
            break;
        case 3:
            tmp = new Ant;
            tmp->input(cin);
            collection.push_back(tmp);
            break;
        case 4:
            tmp = new Pigeon;
            tmp->input(cin);
            collection.push_back(tmp);
            break;
        case 5:
            tmp = new Frog;
            tmp->input(cin);
            collection.push_back(tmp);
            break;
        case 6:
            break;
        default:
            cout<< "Not An Option Please Try Again\n";
            break;
    }
}

void output_all(list<Home *>& collection){
    list<Home*>::iterator it;
    it = collection.begin();
    while(it != collection.end()){
        (*it)->output(cout);
        ++it;
    }
}