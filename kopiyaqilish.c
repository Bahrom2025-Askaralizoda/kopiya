#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear || cls");

    FILE *fayl = fopen("HDfoto.jpg", "rb");
    FILE *nusxa = fopen("HDkpiya.jpg", "wb");
    int bayt;
    int count = 0;
    while (fread(&bayt, 4, 1, fayl) > 0)
    {
        fwrite(&bayt, 4, 1, nusxa);
        printf("%d ", bayt);
        count++;
    };
    printf("%d - ta bayt  Rasm nusxalandi\n");
    fclose(nusxa);
    fclose(fayl);
    return 0;
}