#include <iostream>
using namespace std;

    int a = 5;
    int b =8;
    int c = 5;
    int d = 10;

void persergipanjang(int a, int b) {
    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= b; j++) {
            cout << " * ";
        }
        cout << "  "<< endl;
    }
}

void persergipanjanggaris(int a, int b) {
    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= b; j++) {
            if (i == 1 || i == a || j == 1 || j == b) 
            {
                cout << "* ";
            } else {
                cout << "  "; // dua spasi untuk menjaga bentuk persegi
            }
        }
        cout << " "<< endl;
    }
}



void persegi(int c) {
    for(int i = 1; i <= c; i++) {
        for(int j = 1; j <= c; j++) {
            cout << " * ";
        }
        cout << "  "<< endl;
    }
}

void  persegigaris(int c) {
    for(int i = 1; i <= c; i++) {
        for(int j = 1; j <= c; j++) {
            if(i == 1 || i == c || j == 1 || j == c) {
                cout << "* ";
            } else {
                cout << "  "; // dua spasi untuk menjaga bentuk persegi
            }
        }
    cout << " "<< endl;
    }
}

void segitigasamakaki(int d) {
    for (int i = 1; i <= d; i++) {
        for (int j = 1; j <= d + i - 1; j++) {
            cout << (j < d - i + 1 ? "  " : "* ");
        }
        cout << endl;
    }
}

void segitigasamakakigaris(int d) {
    for (int i = 1; i <= d; i++) {
        for (int j = 1; j <= d + i - 1; j++) {
            if (j == d - i + 1 || j == d + i - 1 || i == d) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void segitigasikusiku(int a) {
    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= i; j++) {
            cout << " * ";
        }
        cout << endl;
    }
}

void segitigagaris(int b) {
    for(int i = 1; i <= b; i++) {
        for(int j = 1; j <= i; j++) {
            if(i == 1 || i == b || j == 1 || j == i) {
                cout << "* ";
            } else {
                cout << "  "; // dua spasi untuk menjaga bentuk persegi
            }
        }
    cout << " "<< endl;
    }
}


int main() {

    cout << "Membuat bentuk persegi panjang dengan bintang \n" << endl;
    persergipanjang(a, b);
    
    cout <<"\n";

    cout << "Membuat bentuk persegi panjang dengan bintang dan garis\n" << endl;
    persergipanjanggaris(a, b);

    cout <<"\n";

    cout << "Membuat bentuk persegi dengan bintang\n" << endl;
    persegi(c);

    cout <<"\n";

    cout << "Membuat bentuk persegi dengan bintang dan garis\n" << endl;
    persegigaris(c);

    cout <<"\n";

    cout << "Membuat bentuk segitiga sama kaki dengan bintang\n" << endl;
    segitigasamakaki(d);

    cout <<"\n";

    cout << "Membuat bentuk segitiga sama kaki dengan bintang dan garis\n" << endl;
    segitigasamakakigaris(d);

    cout <<"\n";

    cout << "Membuat bentuk segitiga siku-siku dengan bintang\n" << endl;
    segitigasikusiku(a);

    cout <<"\n";

    cout << "Membuat bentuk segitiga siku- siku dengan bintang dan garis\n" << endl;
    segitigagaris(b);

    cout <<"\n";

    return 0;
}