main()
{

    int a,b,c,d;
    printf("enter the value of a,b,c ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
        printf("roots are real and distinct");
    else if(d==0)
    printf("roots are real and equal");
    else
        printf("roots are imaginary");
    getch();


}
