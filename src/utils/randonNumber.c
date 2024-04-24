#include "../../includes/utils.h"

int randonNumber(int init, int end)
{
    srand(time(NULL));
    int random = rand() % end + init;

    return random;
}