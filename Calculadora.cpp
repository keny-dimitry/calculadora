#include<iostream>
#include<cstdlib>
using namespace std;
    main(){
        int suma,resta,mul;
        float div,a,b;
        cout<<"ingrese el valor del 1er numero: "<<endl;
        cin>>a;
        cout<<"ingrese el valor del 2do numero: "<<endl;
        cin>>b;
        suma=a+b;
        resta=a-b;
        mul=a*b;
        div=a/b;
        cout<<"la suma es: "<<suma<<endl;
        cout<<"la resta es: "<<resta<<endl;
        cout<<"la multiplicación es: "<<mul<<endl;
        cout<<"la divición es: "<<div<<endl;
        return 0;
    }
