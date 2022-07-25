main()
{

    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    if(n%2==0&&n%3==0)
        printf("number is divisible by 2 and 3");
    else
        printf("number is not divisible by 2 and 3");
    getch();
}
