main()
{

    int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d is greter",a);
    else if(a==b)
    {
        printf("%d and %d are same ",a,b);

    }
    else
        printf("%d is greter",b);
    getch();
}
