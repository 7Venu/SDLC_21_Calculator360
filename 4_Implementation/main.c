#include "electricalcalc.h"
#include "Electronics.h"
#include "calculator.h"
int main()
{
    printf("Choose your option \n 1.Electrical \n 2.Electronic \n 3.Arithmetic");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        electricalcalc();
        break;
     case 2:
        Electronicsfun();
        break;   
     case 3;
        mathcalc();
        break;
    }
    return 0;
}
