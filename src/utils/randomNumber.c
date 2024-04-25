#include "../../includes/utils.h"

/**
 * Function that generates random number among the past numbers
 * @Param limitNumber The last number he should look
 * @Return The random number
*/
int randomNumber(int limitNumber)
{
    srand(time(NULL));
    int random = rand() % limitNumber;

    return random;
}