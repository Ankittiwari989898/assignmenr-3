main()
{

    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("character is upper case of a alphabet");
    else if(ch>='a'&&ch<='z')
        printf("character is lower case of an alphabet");
    else if(ch>='0'&&ch<='9')
        printf("character is digit");
    else
        printf("character is special symbol");
    getch();

}
