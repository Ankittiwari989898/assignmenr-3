main()
{

    int a,b,c;
    printf("enter the sides of a triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c)
        printf("vallid triangle");
    else if(a+c>b)
        printf("vallid triangle");
    else if(b+c>a)
    printf("vallid triangle");
    else
        printf("traingle is not vallid");
    getch();


}
