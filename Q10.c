main()
{

    int cp,sp;
    float p,l;
    printf("enter the value of cost price and selling price\n");
    scanf("%d%d",&cp,&sp);
    if(cp<sp)
    {


        p=sp-cp*100/cp;
    printf(" profit percent is %f",p);
    }
    else
    {


        l=cp-sp*100/cp;
        printf(" loss percent is %f",l);
    }
        getch();


}
