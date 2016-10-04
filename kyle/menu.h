//Kyle Shiflett
//ks117713@ohio.edu
//CS 2401
//Project 5

#ifndef Menu_h
#define Menu_h

#include <fstream>
#include <string>
#include <list>

void menu();

void ordermenu();

void ordermenu_action(int& htype, std::list<Home *>& collection);

void output_all(std::list<Home *>& collection);

#endif /* Menu_h */
