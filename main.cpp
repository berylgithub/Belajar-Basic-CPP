#include <iostream>
#include <string>


using namespace std;

int main()
{
    int A=1, B=2, C;
    cout<<"A = "<<A<<" B="<<B<<"\n";
    C=A;
    A=B;
    B=C;
    cout<<"A = "<<A<<" B="<<B<<endl;

    cout<<"---------------------------\n";
    string S1="Belajar";
    string S2="C++";
    string S3="Di Laboratorium 'Komputer' ";
    cout<<S1<<endl;
    cout<<S2<<endl;
    cout<<S3<<endl;
    cout<<"---------------------------\n";
    string nim;
    int nim_angka = 20918001;
    //cast string to integer --> to_string()
    //comment
    nim = to_string(nim_angka);
    cout<<nim<<endl;
    return 0;
}
