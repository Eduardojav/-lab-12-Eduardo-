#include<iostream>
using namespace std;
class Edificio{
public:
    int pisos;
 void piss(npisos){
      cout<<pisos<<endl;
      }
};
class bar : public Edificio{
  public:
  void piss(npisos){
      cout<<pisos<<endl;
      }
};
class restaurant: public Edificio{
  public:
      cout<<pisos<<endl;
 
};
class D : public bar,public restaurant{
  void piss(npisos){
      cout<<pisos<<endl;}

};
