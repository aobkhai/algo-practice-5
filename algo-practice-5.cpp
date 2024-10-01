#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

struct DiagnosticParameter {
    string name;
    double min;
    double max;
    double value;
};

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    DiagnosticParameter diagnosticParameters[5];
    
    cout << "Введіть час запізнення реографічної хвилі:" << endl;
    diagnosticParameters[0].name = "час запізнення реографічної хвилі";
    diagnosticParameters[0].min = 0.2;
    diagnosticParameters[0].max = 1.0;
    cin >> diagnosticParameters[0].value;

    cout << "Введіть тривалість анакроти:" << endl;
    diagnosticParameters[1].name = "тривалість анакроти";
    diagnosticParameters[1].min = 0.07;
    diagnosticParameters[1].max = 0.11;
    cin >> diagnosticParameters[1].value;

    cout << "Введіть діакратичний індекс:" << endl;
    diagnosticParameters[2].name = "діакратичний індекс";
    diagnosticParameters[2].min = 14;
    diagnosticParameters[2].max = 60;
    cin >> diagnosticParameters[2].value;

    cout << "Введіть середня швидкість миттєвого наповнення:" << endl;
    diagnosticParameters[3].name = "середня швидкість миттєвого наповнення";
    diagnosticParameters[3].min = 0.6;
    diagnosticParameters[3].max = 1.2;
    cin >> diagnosticParameters[3].value;

    cout << "Введіть діастолічний індекс:" << endl;
    diagnosticParameters[4].name = "діастолічний індекс";
    diagnosticParameters[4].min = 10;
    diagnosticParameters[4].max = 80;
    cin >> diagnosticParameters[4].value;
    
    cout << endl << endl << "ДІАГНОСТИКА ЗАВЕРШЕНА:" << endl;

    for (int i = 0; i < 5; i++) {
        if (diagnosticParameters[i].value < diagnosticParameters[i].min) {
            cout << diagnosticParameters[i].name << " менше норми" << endl;
        }
        else if (diagnosticParameters[i].value > diagnosticParameters[i].max) {
            cout << diagnosticParameters[i].name << " вище норми" << endl;
        }
        else {
            cout << diagnosticParameters[i].name << " в нормі" << endl;
        }
    }

    return 0;
}