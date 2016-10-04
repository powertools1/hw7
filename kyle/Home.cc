//Kyle Shiflett
//ks117713@ohio.edu
//CS 2401
//Project 5

//all lengths are in meters

#include <iostream>
#include "Home.h"

using namespace std;

//********SQUIRREL**********
void Squirrel::input(istream& ins){
    if(&ins == &cin){
        cout << "Enter a Radius for the Squirrel's new Home\n";
        ins >> radius;
        cout << "Enter Volume of Acorn Storage (m^3)\n";
        ins >> acorn_storage;
        cout << "Enter Height of Home Walls\n";
        ins >> height;
        cout << "Enter Number of Windows\n";
        ins >> windows;
        //console input
    }else{
        //file input
        ins >> radius >> acorn_storage >> height >> windows;
    }
}

void Squirrel::output(ostream& outs){
    if(&outs == &cout){
        //console output
        outs << "Squirrel:\n"
             << "\tFloor Radius = " << radius << endl
             << "\tAcorn Storage (cm^3) = " << acorn_storage << endl
             << "\tWall Height = " << height << endl
             << "\tWindows = " << windows << endl;
    }else{
        //file output
        outs << "1\n"
             << radius << endl
             << acorn_storage << endl
             << height << endl
             << windows << endl;
    }
}

//**********WOLF*************
void Wolf::input(istream& ins){
    if(&ins == &cin){
        cout << "Enter a Length for the Wolf's new Home\n";
        ins >> length;
        cout << "Enter a Width for the Wolf's new Home\n";
        ins >> width;
        cout << "Enter Number of Stories for Home\n";
        ins >> stories;
        cout << "Include Security System? 1 = YES, 0 = NO\n";
        ins >> security_sys;
        //console input
    }else{
        //file input
        ins >> length >> width >> stories >> security_sys;
    }
}

void Wolf::output(ostream& outs){
    if(&outs == &cout){
        //console output
        outs << "Wolf:\n"
             << "\tFloor Length = " << length << endl
             << "\tFloor Width = " << width << endl
             << "\tStories = " << stories << endl
             << "\tSecurity System = ";
        if(security_sys == 1){
            outs << "YES" << endl;
        }else{
            outs << "NO" << endl;
        }
    }else{
        //file output
        outs << "2\n"
             << length << endl
             << width << endl
             << stories << endl
             << security_sys << endl;
    }
}

//************ANT***************
void Ant::input(istream& ins){
    if(&ins == &cin){
        cout << "Enter the Name of Soil Type\n";
        ins >> soil_type;
        cout << "Enter Total Tunnel Length\n";
        ins >> tot_tunnel_l;
        cout << "Enter the Number of Chambers\n";
        ins >> num_chambers;
        cout << "Include Anteater Radar System? 1 = YES, 0 = NO\n";
        ins >> anteater_radar;
        //console input
    }else{
        //file input
        if(ins.peek() == '\n'){
            ins.ignore();
        }
        getline(ins, soil_type);
        ins >> tot_tunnel_l >> num_chambers >> anteater_radar;

    }
}

void Ant::output(ostream& outs){
    if(&outs == &cout){
        outs << "Ant:\n"
             << "\tSoil Type = " << soil_type << endl
             << "\tTotal Length of Tunnels = " << tot_tunnel_l <<endl
             << "\tNumber of Chambers = " << num_chambers << endl
             << "\tAnteater Radar System = ";
        if(anteater_radar == 1){
            outs << "YES" << endl;
        }else{
            outs << "NO" << endl;
        }
        //console output
    }else{
        //file output
        outs << "3\n"
             << soil_type << endl
             << tot_tunnel_l << endl
             << num_chambers << endl
             << anteater_radar << endl;
        
    }
}

//*************PIGEON***************
void Pigeon::input(istream& ins){
    if(&ins == &cin){
        cout << "Enter the Material Type for the Nest\n";
        ins >> nest_mat;
        cout << "Enter Nest Wall Height\n";
        ins >> nest_height;
        cout << "Enter Nest Radius\n";
        ins >> nest_rad;
        //console input
    }else{
        //file input
        if(ins.peek() == '\n'){
            ins.ignore();
        }
        getline(ins, nest_mat);
        ins >> nest_height >> nest_rad;
    }
}

void Pigeon::output(ostream& outs){
    if(&outs == &cout){
        //console output
        outs << "Pigeon:\n"
             << "\tNest Material = " << nest_mat << endl
             << "\tNest Height = " << nest_height << endl
             << "\tNest Radius = " << nest_rad << endl;
    }else{
        //file output
        outs << "4\n"
             << nest_mat << endl
             << nest_height << endl
             << nest_rad << endl;
    }
}

//***********FROG*******************
void Frog::input(istream& ins){
    if(&ins == &cin){
        cout << "Include Water Filter? 1 = YES, 0 = NO\n";
        ins >> water_filter;
        cout << "Enter Radius of Lily Pad\n";
        ins >> lily_rad;
        cout << "Include Fly Trap? 1 = YES, 0 = NO\n";
        ins >> fly_trap;
        //console input
    }else{
        //file input
        ins >> water_filter >> lily_rad >> fly_trap;
    }
}

void Frog::output(ostream& outs){
    if(&outs == &cout){
        //console output
        outs << "Frog:\n"
             << "\tWater Filter = ";
        if(water_filter == 1){
            outs << "YES" << endl;
        }else{
            outs << "NO" << endl;
        }
        outs << "\tLily Pad Radius = " << lily_rad << endl
             << "\tFly Trap = ";
        if(fly_trap == 1){
            outs << "YES" << endl;
        }else{
            outs << "NO" << endl;
        }


    }else{
        //file output
        outs << "5\n"
             << water_filter << endl
             << lily_rad << endl
             << fly_trap << endl;
    }
}