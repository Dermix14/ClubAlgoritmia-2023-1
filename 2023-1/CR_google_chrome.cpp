#include <bits/stdc++.h>

using namespace std;

int main(){
    string intruccion;
    string pag_actual = "";
    stack<string> historial;

    ///intruccion = "A www.google.com" "R"/
    ///1. Leer la primera letra del string
    ///2. Por el tamaño si len = 1 entonces es R
    ///3. Slicing por espacio solamente cuando es A

    while(getline(cin, intruccion)){
        //cout<<intruccion<<endl;
        if(intruccion.size()>1){
            ///Entonces A
            if(pag_actual!=""){
                historial.push(pag_actual);
            }
            pag_actual = intruccion.substr(3/*, intruccion.size()-1*/);
            //cout<<pag_actual<<endl;
            
        }
        else{///Entonces R
            if(historial.size()==0){
                cout<<"Sin historial"<<endl;
            } 
            
            else{
                cout<<historial.top()<<endl;
                historial.pop();
            }    
        }
            //cout<<"Es una r"<<endl;
    }
    return 0;
}