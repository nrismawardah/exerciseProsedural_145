#include <iostream>
using namespace std;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status (double c){
    if (c >= 70)
        return "Lulus";
    else
        return "Gagal";
}

string status2(double rata, double nilai) {
    if (rata >= 70 || nilM > 80)
        return "Lulus";
    else
        return "Gagal";
}

int main() {
    double nilM, nilB;
    cout << "Masukkan nilai Matematika = ";
    cin >> nilM;
    cout << "Masukkan nilai Bahasa Inggris = ";
    cin >> nilB;
    cout << "Status kelulusan = " << status(rerata(nilM, nilB));
    cout << "\nStatus kelulusan ke-2 = " << status2(rerata(nilM, nilB), nilM);
    return 0;
}