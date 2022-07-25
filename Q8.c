
main()
{

    int a;
    printf("enter a year");
    scanf("%d",&a);
    if(a%100==0)
        if(a%4==0)
        printf("%d is leap year",a);
      else
        printf("%d is not a leap year",a);
   else
            printf("this is not a century year so %d is not a leap year",a);
    getch();

}
