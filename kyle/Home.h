//Kyle Shiflett
//ks117713@ohio.edu
//CS 2401
//Project 5

#ifndef Home_h
#define Home_h

#include <iostream>
#include <cmath>
#include <string>

class Home {
public:
    Home(){}
    virtual void input(std::istream& ins) = 0;
    virtual void output(std::ostream& outs) = 0;
    
private:
    
};

//**************

class Squirrel: public Home {
public:
    Squirrel(double r = 0.70, double a_s = 35, int h = 3, int w = 4){radius = r, acorn_storage = a_s, height = h, windows = w;}
    void input(std::istream& ins);
    void output(std::ostream& outs);
    
private:
    double radius; //meters
    double acorn_storage; //volume of acorn pantry
    int height;
    int windows;
};

//***************

class Wolf:public Home{
public:
    Wolf(int l = 5, int w = 8, bool sys = 0, int s = 1){length = l, width = w, security_sys = sys, stories = s;}
    void input(std::istream& ins);
    void output(std::ostream& outs);
private:
    int length;
    int width;  //meters
    int stories;
    bool security_sys;
};

//***************

class Ant:public Home{
public:
    Ant(std::string s_t = "Loam", double tun_l = 35, int n_ch = 17, bool a_rdr = 1){soil_type = s_t, tot_tunnel_l = tun_l, num_chambers = n_ch, anteater_radar = a_rdr;}
    void input(std::istream& ins);
    void output(std::ostream& outs);
    
private:
    std::string soil_type;
    double tot_tunnel_l; //total tunnel length (m)
    int num_chambers;
    bool anteater_radar;
};

//***************

class Pigeon:public Home{
public:
    Pigeon(std::string nst_m = "Grass", int h = 2, double n_rad = 6){nest_mat = nst_m, nest_height = h, nest_rad = n_rad;}
    void input(std::istream& ins);
    void output(std::ostream& outs);
    
private:
    std::string nest_mat; //nest material
    int nest_height;
    double nest_rad;
};

//***************

class Frog: public Home{
public:
    Frog(bool w_f = 1, int l_rad = 4, bool f_trp = 0){water_filter = w_f, lily_rad = l_rad, fly_trap = f_trp;}
    void input(std::istream& ins);
    void output(std::ostream& outs);
    
private:
    bool water_filter;
    int lily_rad;
    bool fly_trap;
};

#endif /* Home_h */
