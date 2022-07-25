main()
{

    char ch;
    printf("enter a alphabet\n");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("%c is uppercase",ch);
    else
        printf("%c is lowercase",ch);
    getch();

}
