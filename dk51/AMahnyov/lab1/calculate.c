#include <stdio.h>
#include "calculate.h"
#include "biclycleMath.h"
#include "getInput.h"

static void doFormula(int arguments[2]);

void doCalculation()
{
    char *answer = "y";
    while(answer == "y" || answer == "Y"){
    int *arguments;
    arguments = getInput(2); //gets input from user, as an array: A-0 B-1 C-2
    doFormula(arguments);
    printf("Again? [Y/N]: ");
    scanf("%с", answer);
    }
}

void doFormula(int arguments[2]){ //calculates the result, with bicyleMath formulas
    double finalResult = bicycleModulo(arguments[0]*arguments[2]-arguments[1]) / bicyclePow(arguments[2], 3) * bicycleSum(arguments[0]); //main formula
    printf("Final result: %f", finalResult);
}
