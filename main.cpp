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

    cout<<"---------------------------\n";
    cout<<" ARRAY & LOOP "<<endl;
    //size = N, iterasi : mulai dari 0 hingga N-1
    int I[3] = {1,2,3};
    int I2[3][3] = {{1, 0, 0},
                    {0, 1, 0},
                    {0, 0, 1}};

    int I_kosong[3];
    int I2_kosong[3][3];

    string S[2] = {"string 1", "string 2"};
    // mulai dari 0 hingga N-1
    cout<<I2[2][2]<<endl;

    I_kosong[0] = 7;
    I_kosong[2] = 100;

    I2_kosong[0][0] = 11;
    I2_kosong[1][1] = 21;

    cout<<I_kosong[0]<<endl;
    cout<<I_kosong[2]<<endl;

    cout<<I2_kosong[1][1]<<endl;

    cout<<"--------------------------------------\n";
    cout<<"LOOP "<<endl;
    //for


    for(int x=0; x<3; x++){
        for(int y=0; y<3; y++){
            cout<<I2[x][y]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int T[3][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    cout<<"sebelum transpose \n";
    for(int x=0; x<3; x++){
        for(int y=0; y<3; y++){
            cout<<T[x][y]<<" ";
        }
        cout<<endl;
    }
    cout<<"sesudah transpose \n";
    for(int x=0; x<3; x++){
        for(int y=0; y<3; y++){
            cout<<T[y][x]<<" ";
        }
        cout<<endl;
    }

    cout<<"while loop \n";
    int x=0;
    while(x<3){
        cout<<I[x]<<" ";
        x++;
    }
    cout<<endl;

    cout<<"while loop 2d \n";
    x=0;
    while(x<3){
        int y=0;
        while(y<3){
            cout<<I2[x][y]<<" ";
            y++;
        }
        cout<<endl;
        x++;
    }

    return 0;
}
