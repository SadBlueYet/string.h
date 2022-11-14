#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
char* strcat(char* dest, const char* src)
{
    char* p = dest;
    int counter = 0;
    while (*p != '\0')
    {
        ++p;
        counter++;
       
        
    }
    while (*src != '\0')
    {
        *p++ = *src++;
        counter++;
        if (counter % 5 == 0) 
            *p = (char)realloc(dest, 5 * (counter / 5 + 1) * sizeof(char));
    }
    *p = '\0';
    return dest;
}
char* strcpy(char* to, const char* from)
{
    int i;
    int counter = 0;
    for ( i = 0; from[i] != '\0'; i++)
    {
        to[i] = from[i];
        counter++;
        if (counter % 3 == 0)
            *to = (char)realloc(to, 3 * (counter / 3 + 1) * sizeof(char));
    }

    *to = '\0';
    return to;
}
int strlen(char* a)
{
    int counter = 0;
    int i = 0;
    for (; a[i] != '\0'; i++) 
    {
        counter++;
    }
    return counter;
}

int main()
{
    setlocale(LC_ALL, "ru");
    char* buffer = (char*)malloc(5 * sizeof(char));
    char str[10] = "asdf";
    std::cin >> buffer;
    std::cout << strcat(buffer, str);
    return 0;
}

