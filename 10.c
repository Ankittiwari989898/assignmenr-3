main()
{

    int cp,sp,p,l;
    float profit,loss;
    printf("enter the cp and sp of the product");
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    {
        p=sp-cp;
        profit=p*100/cp;

        printf(" profit percent is %2.f",profit);


    }
    else
    {
     l=cp-sp;
        loss=l*100/cp;


    printf(" loss percent is %f",loss);

    getch();
}









}
