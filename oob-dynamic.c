#include <stdlib.h>
#include <time.h>

void oob(int x)
{
    int buf[10];
    buf[x] = 0; // <- POTENTIAL ERROR
    if (x == 1000) {}
}

int main() {
	srand(time(NULL));
	oob(rand()%15);
}
