//Kyle Shiflett
//ks117713@ohio.edu
//CS 2401
//Project 5

#include <iostream>
#include <list>
#include <string>
#include <fstream>
#include "Home.h"
#include "menu.h"

using namespace std;

int main() {
    ifstream fin;
    ofstream fout;
    string username, filename;
    list<Home *> homes;
    int housetype;
    int selection;
    int sub_selection;
    
    //*********GREETING AND LOGIN**************//
    cout << "Welcome To Animal Home Construction Inc.\n";
    cout << "Please enter your username:\n";
    if(cin.peek() == '\n'){
        cin.ignore();
    }
    getline(cin, username);
    filename = username + ".txt";
    fin.open(filename.c_str());
    
    //load file if exists
    if(!fin.fail()){
        Home *tmp;
        fin >> housetype;
        while(!fin.eof()){
            switch(housetype){
                case 1:
                    tmp = new Squirrel;
                    tmp->input(fin);
                    homes.push_back(tmp);
                    break;
                case 2:
                    tmp = new Wolf;
                    tmp ->input(fin);
                    homes.push_back(tmp);
                    break;
                case 3:
                    tmp = new Ant;
                    tmp->input(fin);
                    homes.push_back(tmp);
                    break;
                case 4:
                    tmp = new Pigeon;
                    tmp->input(fin);
                    homes.push_back(tmp);
                    break;
                case 5:
                    tmp = new Frog;
                    tmp->input(fin);
                    homes.push_back(tmp);
                    break;
                default:
                    cout<< "Error loading from file\n";
                    break;
            }
            fin >> housetype;
        }
    }
    fin.close();
    
    //****************MENU & SELECTION*****************//
    
    //all lengths are in meters
    cout << "Please note that all length dimensions are in meters\n";
    
    do{
        menu();
        cin >> selection;
        switch(selection){
            case 1:
                ordermenu();
                cin >> sub_selection;
                ordermenu_action(sub_selection, homes);
                break;
            case 2:
                output_all(homes);
                break;
            case 3:
                break;
            default:
                cout << "Not An Option, Please Try Again\n";
                break;
        }
    }while(selection != 3);
    

    //*****OUTPUT FILE******//
    fout.open(filename.c_str());
    
    list<Home*>::iterator it;
    it = homes.begin();
    while(it != homes.end()){
        (*it)->output(fout);
        ++it;
    }
    fout.close();
    //******************//
    
    return 0;
}
