//Ayfdeveloper

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

int main()
{

    int R1, R2, R3, R4, R5, soluciones = 0;
    int opc, time = 0;

   



    std::cout << R"(
______          _     _                        _   _       ______ _____ _____ _   _   ___   _____ 
| ___ \        | |   | |                      | \ | |      | ___ \  ___|_   _| \ | | / _ \ /  ___|
| |_/ / __ ___ | |__ | | ___ _ __ ___   __ _  |  \| |______| |_/ / |__   | | |  \| |/ /_\ \\ `--. 
|  __/ '__/ _ \| '_ \| |/ _ \ '_ ` _ \ / _` | | . ` |______|    /|  __|  | | | . ` ||  _  | `--. \
| |  | | | (_) | |_) | |  __/ | | | | | (_| | | |\  |      | |\ \| |___ _| |_| |\  || | | |/\__/ /
\_|  |_|  \___/|_.__/|_|\___|_| |_| |_|\__,_| \_| \_/      \_| \_\____/ \___/\_| \_/\_| |_/\____/  
)" << '\n';
       cout << "\n \n Escoge el nivel de velocidad:";
       cout << "\n1 - Despacio" << endl;
       cout << "2 - Regular" << endl;
       cout << "3 - Rapido" << endl;
       cout << "4 - Mas rapido" << endl;
       cout << "5 - Demasido rapido" << endl;
       cout << "Elige una opcion: ";
    cin >> opc;

    if (opc == 1)
    {
        time = 1000;
    }

    else if (opc == 2)
    {
        time = 500;
    }

    else if (opc == 3)
    {
        time = 50;
    }

    else if (opc == 4)
    {
        time = 1;
    }

    else if (opc == 5)
    {
        time = 0.1;
    }

    system("cls");

    std::cout << R"(
.__       .  .             .  .     .__ .___._..  ..__. __.
[__)._. _ |_ | _ ._ _  _.  |\ | ___ [__)[__  | |\ |[__](__ 
|   [  (_)[_)|(/,[ | )(_]  | \|     |  \[____|_| \||  |.__)
)" << '\n';
    

    gotoxy(2, 5);    cout << "O _ _ _ _" << endl;
    gotoxy(2, 6);    cout << "O _ _ _ _" << endl;
    gotoxy(2, 7);    cout << "O _ _ _ _" << endl;
    gotoxy(2, 8);    cout << "O _ _ _ _" << endl;
    gotoxy(2, 9);    cout << "O _ _ _ _" << endl;

    gotoxy(2, 13);    cout << "Soluciones examinadas: " << soluciones << endl;

    for (R1 = 1; R1 <= 5; R1++)
        for (R2 = 1; R2 <= 5; R2++)
            for (R3 = 1; R3 <= 5; R3++)
                for (R4 = 1; R4 <= 5; R4++)
                    for (R5 = 1; R5 <= 5; R5++)
                    {
                        gotoxy(2, 11);    cout << "                                       " << endl;
                        gotoxy(0, 15);    cout << "                                       " << endl;
                        Sleep(time);

                        if (R5 == 1)
                        {
                            gotoxy(2, 9);    cout << "O _ _ _ _" << endl;
                        }

                        if (R5 == 2)
                        {
                            gotoxy(2, 9);    cout << "_ O _ _ _" << endl;
                        }

                        if (R5 == 3)
                        {
                            gotoxy(2, 9);    cout << "_ _ O _ _" << endl;
                        }

                        if (R5 == 4)
                        {
                            gotoxy(2, 9);    cout << "_ _ _ O _" << endl;
                        }

                        if (R5 == 5)
                        {
                            gotoxy(2, 9);    cout << "_ _ _ _ O" << endl;
                        }

                        /*---------------------------------------*/

                        if (R4 == 1)
                        {
                            gotoxy(2, 8);    cout << "O _ _ _ _" << endl;
                        }

                        if (R4 == 2)
                        {
                            gotoxy(2, 8);    cout << "_ O _ _ _" << endl;
                        }

                        if (R4 == 3)
                        {
                            gotoxy(2, 8);    cout << "_ _ O _ _" << endl;
                        }

                        if (R4 == 4)
                        {
                            gotoxy(2, 8);    cout << "_ _ _ O _" << endl;
                        }

                        if (R4 == 5)
                        {
                            gotoxy(2, 8);    cout << "_ _ _ _ O" << endl;
                        }

                        /*---------------------------------------*/

                        if (R3 == 1)
                        {
                            gotoxy(2, 7);    cout << "O _ _ _ _" << endl;
                        }

                        if (R3 == 2)
                        {
                            gotoxy(2, 7);    cout << "_ O _ _ _" << endl;
                        }

                        if (R3 == 3)
                        {
                            gotoxy(2, 7);    cout << "_ _ O _ _" << endl;
                        }

                        if (R3 == 4)
                        {
                            gotoxy(2, 7);    cout << "_ _ _ O _" << endl;
                        }

                        if (R3 == 5)
                        {
                            gotoxy(2, 7);    cout << "_ _ _ _ O" << endl;
                        }

                        /*---------------------------------------*/

                        if (R2 == 1)
                        {
                            gotoxy(2, 6);    cout << "O _ _ _ _" << endl;
                        }

                        if (R2 == 2)
                        {
                            gotoxy(2, 6);    cout << "_ O _ _ _" << endl;
                        }

                        if (R2 == 3)
                        {
                            gotoxy(2, 6);    cout << "_ _ O _ _" << endl;
                        }

                        if (R2 == 4)
                        {
                            gotoxy(2, 6);    cout << "_ _ _ O _" << endl;
                        }

                        if (R2 == 5)
                        {
                            gotoxy(2, 6);    cout << "_ _ _ _ O" << endl;
                        }

                        /*---------------------------------------*/

                        if (R1 == 1)
                        {
                            gotoxy(2, 5);    cout << "O _ _ _ _" << endl;
                        }

                        if (R1 == 2)
                        {
                            gotoxy(2, 5);    cout << "_ O _ _ _" << endl;
                        }

                        if (R1 == 3)
                        {
                            gotoxy(2, 5);    cout << "_ _ O _ _" << endl;
                        }

                        if (R1 == 4)
                        {
                            gotoxy(2, 5);    cout << "_ _ _ O _" << endl;
                        }

                        if (R1 == 5)
                        {
                            gotoxy(2, 5);    cout << "_ _ _ _ O" << endl;
                        }

                        if ((R1 != R2) && (R1 != R2) && (R1 != R3) && (R1 != R4) && (R1 != R5) && (R2 != R3) && (R2 != R4) && (R2 != R5) && (R3 != R4) && (R3 != R5) && (R4 != R5) &&
                            (R2 != R1 + 1) && (R2 != R1 - 1) && (R3 != R1 + 2) && (R3 != R1 - 2) && (R4 != R1 + 3) && (R4 != R1 - 3) && (R5 != R1 + 4) && (R5 != R1 - 4) &&
                            (R3 != R2 + 1) && (R3 != R2 - 1) && (R4 != R2 + 2) && (R4 != R2 - 2) && (R5 != R2 + 3) && (R5 != R2 - 3) &&
                            (R4 != R3 + 1) && (R4 != R3 - 1) && (R5 != R3 + 2) && (R5 != R3 - 2) &&
                            (R5 != R4 + 1) && (R5 != R4 - 1))
                        {
                            soluciones++;
                            gotoxy(2, 11);    cout << "SE ENCONTRO UNA SOLUCION" << endl;
                            gotoxy(2, 13);    cout << "Soluciones examinadas: " << soluciones << " de 10 posibles " << endl << endl;
                            system("pause");

                        }
                    }
    gotoxy(2, 11);   cout << "Todas las posisbilades soluciones se encontraron " << endl << endl;
    cout << endl << endl;
    system("pause");
}
