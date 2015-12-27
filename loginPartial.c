#include "Read.h"
#include "UtilizadorController.h"

void loginPartial(Model utilizadorModel) {
    char userName[25];
    char password[25];
    puts("Login");
    puts("Username:");
    readString(userName);
    puts("Password");
    readString(password);
}