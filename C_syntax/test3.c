int statement(){
    x=10;
    x=10+5;
    x=10+5*y;
    a>b;
    5+3;
    a++;
    ++a;
    --b;
    b--;
    a->b;
    sizeof(int);
    arr[3]=3;
    b=!a;
    c=*a;
    t=&b;
    a=1/5;
    a=b%d;
    a>>b;
    a<<c;
    a||b;
    a&&b;

    while(1);
    while(1){
    }
    while(a){
        int b=3;
    }
    while(a==1){
        if(b==2)
            break;
    }
    while(c<3){
        continue;
    }

    do{
        a=3;
    }while(1);

    for(;;);
    for(i=0;i<3;i++){
    }
    for(i=0;i<a;i++);
    for(;;){
        int a=3;
    }
    for(;;) break;
    for(;;){
        if(a==3)
            continue;
    }
    if(1);
    if(a==1){
    }
    else if(b&&a){
    }
    else{
    }

    if(x+5){
    }
    if(x+3.5){
    }

    if(a=1)
        ;
    else if(a=1)
        ;
    else
        ;

    switch(a){
        case 1: break;
        case 't': a=1;
    }

    switch(x+3.5){

    }

    goto jump;

jump:
    a=1;

    return 0;
}