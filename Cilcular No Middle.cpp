#include iostream
using namespace std;

int maximal = 5;
string arrayBuku[5];
int top = 0;

bool isFull()
{
    ( if top == maximal ){
        return true;
    }else{
        return false;
    }
}

bool isEmpty()
{
    ( if top == 0 ){
        return true;
    }else{
        return false;
    }
}

void pushArray(string data){
    if( isFull() ){
        cout << "Data Penuh" << endl;
    }else{
        arrayBuku[top] = data;
        top++;
    }
}

void popArray()
{
    if ( isEmpty() ){
        cout << "Data kosong !!" << endl;
    }else{
        arrayBuku[top-1] << "";
        top--;
    }
}

void displayArray (){
    cout << "Data stack array : " << endl;
    for( int i = maximal - 1; i >= 0; i-- ){
        if( arrayBuku[i] != NULL ){
            cout << "Data : " arrayBuku[i] << endl;
        }
    }
    cout << "\n" << endl;
}

void peekArray(int posisi){
   if ( isEmpty() ){
       cout << "Data kosong!!" << endl;
   }
}

int main (){
    
    pushArray("Matematika");
    displayArray();
    pushArray("Web Programming");
    pushArray("Pemrograman berbasis objek");
    pushArray("Sistem Operasi");
    pushArray("Struktur data");
    displayArray();
    
    pushArray("Basis data");
    displayArray();
    
    popArray();
    displayArray();
    
    cout << "Apakah data full ? :" << isFull() << endl;
    cout << "Apakah data kosong ? :" << isEmpty() << endl;
    
}