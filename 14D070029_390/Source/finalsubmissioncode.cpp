#include<simplecpp>

//function for 1st index in simple ttt

int Sgeti(int x){
    int i=-1;
    if(x>1020&&x<1140){i=0;};
    if(x>1140&&x<1260){i=1;};
    if(x>1260&&x<1380){i=2;};
    return i;
}

//function for 2nd index in simple ttt

int Sgetj(int y){
    int j=-1;
    if(y>20&&y<140){j=0;};
    if(y>140&&y<260){j=1;};
    if(y>260&&y<380){j=2;};
    return j;
}

//function for X coordinate of square using index index in simple ttt


int ScenX(int i){
    int cenx;
    if(i==0){cenx=1080;};
    if(i==1){cenx=1200;};
    if(i==2){cenx=1320;};
     return cenx;
}

//function for Y coordinate of square using index index in simple ttt

int ScenY(int j){
    int ceny;
    if(j==0){ceny=80;};
    if(j==1){ceny=200;};
    if(j==2){ceny=320;};
     return ceny;
}

// function for player X winning code for simple ttt

int SwinX(char A[3][3]){int win=0;
    if(A[0][0]=='X'&&A[0][1]=='X'&&A[0][2]=='X')
    {win++;};
    if(A[1][0]=='X'&&A[1][1]=='X'&&A[1][2]=='X')
    {win++;};
    if(A[2][0]=='X'&&A[2][1]=='X'&&A[2][2]=='X')
    {win++;};
    if(A[0][0]=='X'&&A[1][0]=='X'&&A[2][0]=='X')
    {win++;};
    if(A[0][1]=='X'&&A[1][1]=='X'&&A[2][1]=='X')
    {win++;};
    if(A[0][2]=='X'&&A[1][2]=='X'&&A[2][2]=='X')
    {win++;};
    if(A[0][0]=='X'&&A[1][1]=='X'&&A[2][2]=='X')
    {win++;};
    if(A[0][2]=='X'&&A[1][1]=='X'&&A[2][0]=='X')
    {win++;};
    return win;
}

// function for player O winning code for simple ttt

int SwinO(char A[3][3]){int win=0;
    if(A[0][0]=='O'&&A[0][1]=='O'&&A[0][2]=='O')
    {win++;};
    if(A[1][0]=='O'&&A[1][1]=='O'&&A[1][2]=='O')
    {win++;};
    if(A[2][0]=='O'&&A[2][1]=='O'&&A[2][2]=='O')
    {win++;};
    if(A[0][0]=='O'&&A[1][0]=='O'&&A[2][0]=='O')
    {win++;};
    if(A[0][1]=='O'&&A[1][1]=='O'&&A[2][1]=='O')
    {win++;};
    if(A[0][2]=='O'&&A[1][2]=='O'&&A[2][2]=='O')
    {win++;};
    if(A[0][0]=='O'&&A[1][1]=='O'&&A[2][2]=='O')
    {win++;};
    if(A[0][2]=='O'&&A[1][1]=='O'&&A[2][0]=='O')
    {win++;};
    return win;
}

//function for 1st index of large square array in alpha

int AgetI(int x){
    int i=-1;
    if(x>525&&x<675){i=0;};
    if(x>675&&x<825){i=1;};
    if(x>825&&x<975){i=2;};
    return i;
}

//function for 2nd index of small square array in alpha

int Ageti(int x){int i=-1;
    if((x>525&&x<575)||(x>675&&x<725)||(x>825&&x<875))
    i=0;
    if((x>575&&x<625)||(x>725&&x<775)||(x>875&&x<925))
    i=1;
    if((x>625&&x<675)||(x>775&&x<825)||(x>925&&x<975))
    i=2;
    return i;
}

//function for 3rd index of small square array in alpha

int Agetj(int y){int j=-1;
    if((y>25&&y<75)||(y>175&&y<225)||(y>325&&y<375))
    j=0;
    if((y>75&&y<125)||(y>225&&y<275)||(y>375&&y<425))
    j=1;
    if((y>125&&y<175)||(y>275&&y<325)||(y>425&&y<475))
    j=2;
    return j;
}

//function for 2nd index of large square array in alpha

int AgetJ(int y){
    int j=-1;
    if(y>25&&y<175)j=0;
    if(y>175&&y<325)j=1;
    if(y>325&&y<475)j=2;
    return j;
}

//function for 1st index of small square array in alpha

int AgetK(int I,int J)
    {int k;
    if(I==0&&J==0)k=0;
    if(I==0&&J==1)k=1;
    if(I==0&&J==2)k=2;
    if(I==1&&J==0)k=3;
    if(I==1&&J==1)k=4;
    if(I==1&&J==2)k=5;
    if(I==2&&J==0)k=6;
    if(I==2&&J==1)k=7;
    if(I==2&&J==2)k=8;
    return k;
}

//function for X coordinate of large square in alpha ttt

int AcenX(int i){
    int cenx;
    if(i==0)cenx=600;
    if(i==1)cenx=750;
    if(i==2)cenx=900;
     return cenx;
}


//function for X coordinate of large square in alpha ttt

int AcenY(int j){
    int ceny;
    if(j==0)ceny=100;
    if(j==1)ceny=250;
    if(j==2)ceny=400;
     return ceny;
}

//function for X coordinate of small square in alpha ttt

int Acenx(int i,int I){
     int cenx;
     if(i==0&&I==0)
     {cenx=550;}
     if(i==0&&I==1)
     {cenx=700;}
      if(i==0&&I==2)
     {cenx=850;}
       if(i==1&&I==0)
     {cenx=600;}
      if(i==1&&I==1)
     {cenx=750;}
      if(i==1&&I==2)
     {cenx=900;}
      if(i==2&&I==0)
     {cenx=650;}
      if(i==2&&I==1)
     {cenx=800;}
      if(i==2&&I==2)
     {cenx=950;}
     return cenx;
}

//function for Y coordinate of small square in alpha ttt

int Aceny(int i,int I){
     int cenx;
     if(i==0&&I==0)
     {cenx=50;}
     if(i==0&&I==1)
     {cenx=200;}
      if(i==0&&I==2)
     {cenx=350;}
       if(i==1&&I==0)
     {cenx=100;}
      if(i==1&&I==1)
     {cenx=250;}
      if(i==1&&I==2)
     {cenx=400;}
      if(i==2&&I==0)
     {cenx=150;}
      if(i==2&&I==1)
     {cenx=300;}
      if(i==2&&I==2)
     {cenx=450;}
     return cenx;
}

//function for player X winning in large square in alpha


int AwinX(char A[3][3]){int win=0;
    if(A[0][0]=='X'&&A[0][1]=='X'&&A[0][2]=='X')
    {win++;};
    if(A[1][0]=='X'&&A[1][1]=='X'&&A[1][2]=='X')
    {win++;};
    if(A[2][0]=='X'&&A[2][1]=='X'&&A[2][2]=='X')
    {win++;};
    if(A[0][0]=='X'&&A[1][0]=='X'&&A[2][0]=='X')
    {win++;};
    if(A[0][1]=='X'&&A[1][1]=='X'&&A[2][1]=='X')
    {win++;};
    if(A[0][2]=='X'&&A[1][2]=='X'&&A[2][2]=='X')
    {win++;};
    if(A[0][0]=='X'&&A[1][1]=='X'&&A[2][2]=='X')
    {win++;};
    if(A[0][2]=='X'&&A[1][1]=='X'&&A[2][0]=='X')
    {win++;};
    return win;
    }

//function for player O winning in large square in alpha

int AwinO(char A[3][3]){int win=0;
    if(A[0][0]=='O'&&A[0][1]=='O'&&A[0][2]=='O')
    {win++;};
    if(A[1][0]=='O'&&A[1][1]=='O'&&A[1][2]=='O')
    {win++;};
    if(A[2][0]=='O'&&A[2][1]=='O'&&A[2][2]=='O')
    {win++;};
    if(A[0][0]=='O'&&A[1][0]=='O'&&A[2][0]=='O')
    {win++;};
    if(A[0][1]=='O'&&A[1][1]=='O'&&A[2][1]=='O')
    {win++;};
    if(A[0][2]=='O'&&A[1][2]=='O'&&A[2][2]=='O')
    {win++;};
    if(A[0][0]=='O'&&A[1][1]=='O'&&A[2][2]=='O')
    {win++;};
    if(A[0][2]=='O'&&A[1][1]=='O'&&A[2][0]=='O')
    {win++;};
    return win;
    }

//function for player X winning in small square in alpha

int Awinx(char a[9][3][3],int k){int win=0;
    if(a[k][0][0]=='x'&&a[k][0][1]=='x'&&a[k][0][2]=='x')
    {win++;};
    if(a[k][1][0]=='x'&&a[k][1][1]=='x'&&a[k][1][2]=='x')
    {win++;};
    if(a[k][2][0]=='x'&&a[k][2][1]=='x'&&a[k][2][2]=='x')
    {win++;};
    if(a[k][0][0]=='x'&&a[k][1][0]=='x'&&a[k][2][0]=='x')
    {win++;};
    if(a[k][0][1]=='x'&&a[k][1][1]=='x'&&a[k][2][1]=='x')
    {win++;};
    if(a[k][0][2]=='x'&&a[k][1][2]=='x'&&a[k][2][2]=='x')
    {win++;};
    if(a[k][0][0]=='x'&&a[k][1][1]=='x'&&a[k][2][2]=='x')
    {win++;};
    if(a[k][0][2]=='x'&&a[k][1][1]=='x'&&a[k][2][0]=='x')
    {win++;};
    return win;
    }

//function for player O winning in small square in alpha

int Awino(char a[9][3][3],int k){int win=0;
    if(a[k][0][0]=='o'&&a[k][0][1]=='o'&&a[k][0][2]=='o')
    {win++;};
    if(a[k][1][0]=='o'&&a[k][1][1]=='o'&&a[k][1][2]=='o')
    {win++;};
    if(a[k][2][0]=='o'&&a[k][2][1]=='o'&&a[k][2][2]=='o')
    {win++;};
    if(a[k][0][0]=='o'&&a[k][1][0]=='o'&&a[k][2][0]=='o')
    {win++;};
    if(a[k][0][1]=='o'&&a[k][1][1]=='o'&&a[k][2][1]=='o')
    {win++;};
    if(a[k][0][2]=='o'&&a[k][1][2]=='o'&&a[k][2][2]=='o')
    {win++;};
    if(a[k][0][0]=='o'&&a[k][1][1]=='o'&&a[k][2][2]=='o')
    {win++;};
    if(a[k][0][2]=='o'&&a[k][1][1]=='o'&&a[k][2][0]=='o')
    {win++;};
    return win;
    }

// function for getting grid number in interstellar

int Ilayer(int x,int y){
       int GridNum;
      if(x>=12&&x<=162&&y>=125&&y<=275)
     {GridNum=0;};
      if(x>=175&&x<=325&&y>=125&&y<=275)
     {GridNum=1;};
      if(x>=338&&x<=488&&y>=125&&y<=275)
     {GridNum=2;};
      if(x>=12&&x<=162&&y>=325&&y<=475)
     {GridNum=3;};
      if(x>=175&&x<=325&&y>=325&&y<=475)
     {GridNum=4;};
          return GridNum;
    }

// functin for getting column in interstellar

int Igeti(int x){
       int i;
        if((x>12&&x<62)||(x>175&&x<225)||(x>338&&x<388))
     { i=0;};
      if((x>62&&x<112)||(x>225&&x<275)||(x>388&&x<438))
      {i=1;};
        if((x>122&&x<162)||(x>275&&x<325)||(x>438&&x<488))
       {i=2;};
        return i;
    }

// function for getting row number in interstellar

int Igetj(int y){
      int j;
        if((y>125&&y<175)||(y>325&&y<375))
      {j=0;};
     if((y>175&&y<225)||(y>375&&y<425))
      {j=1;};
     if((y>225&&y<275)||(y>425&&y<475))
      {j=2;};
          return j;
    }

// function for calculating X-co-ordinate of centre square  in interstellar

int IcenX(int l,int i){
     int centx;
      if((l==0||l==3)&&i==0)
     {centx=37;};
      if((l==0||l==3)&&i==1)
     {centx=87;};
      if((l==0||l==3)&&i==2)
     {centx=137;};
      if((l==1||l==4)&&i==0)
     {centx=200;};
      if((l==1||l==4)&&i==1)
     {centx=250;};
      if((l==1||l==4)&&i==2)
     {centx=300;};
      if(l==2&&i==0)
     {centx=363;};
      if(l==2&&i==1)
     {centx=413;};
      if(l==2&&i==2)
     {centx=463;};
       return centx;
    }

// function for calculating Y-co-ordinate of centre square  in interstellar


int IcenY(int l,int j){
      int ceny;
     if((l==0||l==1||l==2)&&j==0)
      {ceny=150;};
     if((l==0||l==1||l==2)&&j==1)
      {ceny=200;};
     if((l==0||l==1||l==2)&&j==2)
      {ceny=250;};
     if((l==3||l==4)&&j==0)
      {ceny=350;};
     if((l==3||l==4)&&j==1)
      {ceny=400;};
     if((l==3||l==4)&&j==2)
      {ceny=450;};
          return ceny;
    }

// function if X wins and its point get incremeted in interstellar

int IwinX(char arr[5][3][3] ){
    int p,win=0;
    for(p=0;p<5;p++){
    if(arr[p][0][0]=='X'&&arr[p][0][1]=='X'&&arr[p][0][2]=='X')
    {win++;};
    if(arr[p][1][0]=='X'&&arr[p][1][1]=='X'&&arr[p][1][2]=='X')
    {win++;};
    if(arr[p][2][0]=='X'&&arr[p][2][1]=='X'&&arr[p][2][2]=='X')
    {win++;};
    if(arr[p][0][0]=='X'&&arr[p][1][0]=='X'&&arr[p][2][0]=='X')
    {win++;};
    if(arr[p][0][1]=='X'&&arr[p][1][1]=='X'&&arr[p][2][1]=='X')
    {win++;};
    if(arr[p][0][2]=='X'&&arr[p][1][2]=='X'&&arr[p][2][2]=='X')
    {win++;};
    if(arr[p][0][0]=='X'&&arr[p][1][1]=='X'&&arr[p][2][2]=='X')
    {win++;};
    if(arr[p][0][2]=='X'&&arr[p][1][1]=='X'&&arr[p][2][0]=='X')
    {win++;};
    }
    return win;
    }

// function if O wins and its point get incremeted in interstellar

int IwinO(char arr[5][3][3] ){
    int p,win=0;
    for(p=0;p<5;p++){
    if(arr[p][0][0]=='O'&&arr[p][0][1]=='O'&&arr[p][0][2]=='O')
    {win++;};
    if(arr[p][1][0]=='O'&&arr[p][1][1]=='O'&&arr[p][1][2]=='O')
    {win++;};
    if(arr[p][2][0]=='O'&&arr[p][2][1]=='O'&&arr[p][2][2]=='O')
    {win++;};
    if(arr[p][0][0]=='O'&&arr[p][1][0]=='O'&&arr[p][2][0]=='O')
    {win++;};
    if(arr[p][0][1]=='O'&&arr[p][1][1]=='O'&&arr[p][2][1]=='O')
    {win++;};
    if(arr[p][0][2]=='O'&&arr[p][1][2]=='O'&&arr[p][2][2]=='O')
    {win++;};
    if(arr[p][0][0]=='O'&&arr[p][1][1]=='O'&&arr[p][2][2]=='O')
    {win++;};
    if(arr[p][0][2]=='O'&&arr[p][1][1]=='O'&&arr[p][2][0]=='O')
    {win++;};
    }
    return win;
    }




main_program{

    initCanvas("TIC MANIA",1400,700);

    Rectangle mr1(700,660,1400,80);
    mr1.setFill(true);
    mr1.setColor(COLOR("yellow"));
    Rectangle mr2(700,430,1400,50);
    mr2.setFill(true);
    mr2.setColor(COLOR("red"));

    Text mt1(700,660,"PLAY GAME");
    Text mt2(700,20,"INSTRUCTIONS");
    Text mt3(700,40," These  games is for two players, X and O, who take turns marking the empty spaces in given grids");
    Text mt4(700,60,"and x moves first.  The player who succeeds in placing three respective marks in a horizontal, ");
    Text mt5(700,80,"vertical, or diagonal row wins. ");
    Text mt6(700,120,"1. SIMPLE TTT -");
    Text mt7(700,140,"  If any of X or O wins in given 3x3 grid he wins the game");
    Text mt8(700,180,"2. ALPHA TTT -");
    Text mt9(700,200,"Game is played in 9×9 grid which is divided into 9 different  3×3 Grids IN WHICH RULES ARE SAME ");
    Text mt10(700,220,"AS THAT IN SIMPLE TTT. When a player wins in a particular 3*3 grid, a bigger symbol (x or o)appears ");
    Text mt11(700,240,"in that 3*3 grid and game is now also in 9 grids considering each grid as space.");
    Text mt12(700,280,"3. INTERSTELLAR TTT -");
    Text mt13(700,300,"  Game is played  in 5 3x3grids. If in a particular 3*3 grid player wins,  he gets a point and also gets a ");
    Text mt14(700,320,"bonus move which he can make in any grid except the grid in which he won. At the end when no ");
    Text mt15(700,340,"space is empty, the player with more point wins.");
    Text mt16(700,390,"IMPORTANT NOTE ");
    Text mt17(700,430,"YOU CAN START TO PLAY AT ANY LEVEL BUT TO MOVE TO NEXT LEVEL YOU HAVE TO WIN THAT LEVEL");
    while(true){
    int mw,mx,my;
    mw=getClick();
    mx=mw/65536;
    my=mw%65536;

    if(my>620){

    //hiding instructions
    mt1.hide();
    mt2.hide();
    mt3.hide();
    mt4.hide();
    mt5.hide();
    mt6.hide();
    mt7.hide();
    mt8.hide();
    mt9.hide();
    mt10.hide();
    mt11.hide();
    mt12.hide();
    mt13.hide();
    mt14.hide();
    mt15.hide();
    mt16.hide();
    mt17.hide();
    mr1.hide();
    mr2.hide();



    Rectangle Mr1(250,250,500,500);
    Rectangle Mr2(750,300,500,600);
    Rectangle Mr3(1200,250,400,500);
    Rectangle Mr4(250,650,500,100);
    Rectangle Mr5(750,650,500,100);
    Rectangle Mr6(1200,650,400,100);

    Mr4.setFill(true);
    Mr4.setColor(COLOR("red"));

    Mr5.setFill(true);
    Mr5.setColor(COLOR("yellow"));

    Mr6.setFill(true);
    Mr6.setColor(COLOR("green"));


    Text Mt1(250,650,"INTERSTELLAR");
    Text Mt2(750,650,"ALPHA");
    Text Mt3(1200,650,"SIMPLE");


    Text MMt1(250,625,"LEVEL 3");
    Text MMt2(750,625,"LEVEL 2");
    Text MMt3(1200,625,"LEVEL 1");



    A:
    int Mw,Mx,My;
    Mw=getClick();
    Mx=Mw/65536;
    My=Mw%65536;


    if(Mx>0&&Mx<500&&My<700&&My>600){

    Line l1(0,100,500,100);
    Line l2(0,300,500,300);
    Line l3(12,125,162,125), l4(175,125,325,125) ,l6(338,125,488,125);
    Line l7(12,175,162,175), l8(175,175,325,175) ,l9(338,175,488,175);
    Line l10(12,225,162,225), l11(175,225,325,225) ,l12(338,225,488,225);
    Line l13(12,275,162,275), l14(175,275,325,275) ,l15(338,275,488,275);
    Line l16(12,125,12,275),l17(62,125,62,275),l18(112,125,112,275);
    Line l19(162,125,162,275),l20(175,125,175,275),l21(225,125,225,275);
    Line l22(275,125,275,275),l23(325,125,325,275),l24(338,125,338,275);
    Line l25(388,125,388,275),l26(488,125,488,275),l27(438,125,438,275);
    Line l28(12,325,162,325),l29(175,325,325,325);
    Line l30(12,375,162,375),l31(175,375,325,375);
    Line l43(12,425,162,425),l32(175,425,325,425);
    Line l33(12,475,162,475),
       l34(175,475,325,475);
    Line l35(12,325,12,475),
     l36(62,325,62,475);
    Line l37(112,325,112,475),
      l38(162,325,162,475);
    Line l39(175,325,175,475),
     l40(225,325,225,475);
    Line l41(275,325,275,475),
     l42(325,325,325,475);
    Rectangle Rout(250,250,500,500);


    Text Ittt3(50,75,"X_SCORE:");
    Ittt3.imprint();
    Text Ittt4(300,75,"O_SCORE:");
    Ittt4.imprint();



    char Iarr[5][3][3];int Ii,Ij,Il,IwinX_history=0,IwinO_history=0;

      for(Il=0;Il<5;Il++){
        for(Ii=0;Ii<3;Ii++){
            for(Ij=0;Ij<3;Ij++){
                Iarr[Il][Ii][Ij]='_';
            }
        }
    }

    while(1)
    {
    int IwinGrid=10;
     Ix1:
     Text Ittt1(250,25,"player_X_turn");
     int Iw=getClick();
      int Ix=Iw/65536;
       int Iy=Iw%65536;


       int Ii=Igeti(Ix);
     int Ij=Igetj(Iy);
       int Il=Ilayer(Ix,Iy);


     if(IwinGrid==Il)
    {
      cout<<"Invalid Grid"<<endl;
      Text Itt12(400,375,"INVALID");
      Text Itt13(400,425,"GRID");
      wait(0.5);
      goto Ix1;
      }
    if(Iarr[Il][Ii][Ij]=='_')
     {

     Rectangle Ir1(IcenX(Il,Ii),IcenY(Il,Ij),45,8);
    Rectangle Ir2(IcenX(Il,Ii),IcenY(Il,Ij),45,8);
    Ir1.rotate(PI/4);
    Ir2.rotate(7*PI/4);
    Ir1.setFill(true);
    Ir2.setFill(true);
    Ir1.setColor(COLOR("red"));
    Ir2.setColor(COLOR("red"));
    Ir1.imprint();
    Ir2.imprint();


     Iarr[Il][Ii][Ij]='X';
    }
     else{
      cout<<"Invalid Input"<<endl;
      goto Ix1;
      }
    cout<<"Score of X is_"<<IwinX(Iarr)<<endl;
    Text Ittt5(100,75,IwinX(Iarr));

    Ittt5.imprint();
    IwinGrid=10;
    if(IwinX(Iarr)>IwinX_history)
    {
     IwinX_history=IwinX(Iarr);
      IwinGrid=Il;
       goto Ix1;
      }
    Io1:
    Text Ittt2(250,25,"player_O_turn");
    Iw=getClick();
       Ix=Iw/65536;
      Iy=Iw%65536;
       Ii=Igeti(Ix);
      Ij=Igetj(Iy);
        Il=Ilayer(Ix,Iy);
     if(Il==IwinGrid)
      {
      cout<<" Invalid Grid"<<endl;
      Text Itt12(400,375,"INVALID");
      Text Itt13(400,425,"GRID");
      wait(0.5);


      goto Io1;
     }
     if(Iarr[Il][Ii][Ij]=='_')
    {


     Circle IC1(IcenX(Il,Ii),IcenY(Il,Ij),22), IC2(IcenX(Il,Ii),IcenY(Il,Ij),17);
    IC1.setFill(true);
    IC2.setFill(true);
    IC1.setColor(COLOR("blue"));
    IC2.setColor(COLOR("white"));
    IC1.imprint();
    IC2.imprint();


     Iarr[Il][Ii][Ij]='O';
    }
    else
     {
       cout<<"Invalid Input"<<endl;
         goto Io1;
     }
    cout<<"Score of O is_"<<IwinO(Iarr)<<endl;
    Text Ittt6(350,75,IwinO(Iarr));

     Ittt6.imprint();
     IwinGrid=10;
    if(IwinO(Iarr)>IwinO_history)
    {
    IwinO_history=IwinO(Iarr);
        IwinGrid=Il;
      goto Io1;
     }
    }

    }

    //int Mw,Mx,My;
    //Mw=getClick();
    //Mx=Mw/65536;
    //My=Mw%65536;

    if(Mx>500&&Mx<1000&&My<700&&My>600)
    {


    int Al ,Aw;
    for(Al=25;Al<500;Al+=50){
    Line Al1(525,Al,975,Al);

    Al1.setFill(true);
    Al1.setColor(COLOR("green"));
    Al1.imprint();}
    for(Aw=525;Aw<1000;Aw+=50){
    Line Al2(Aw,25,Aw,475);

    Al2.setFill(true);
    Al2.setColor(COLOR("green"));
    Al2.imprint();
    }


    Line All1(525,325,975,325);
    Line All2(525,175,975,175);
    Line All3(675,25,675,475);
    Line All4(825,25,825,475);
    All1.setFill(true);
    All2.setFill(true);
    All3.setFill(true);
    All4.setFill(true);
    All1.setColor(COLOR("blue"));
    All2.setColor(COLOR("blue"));
    All3.setColor(COLOR("blue"));
    All4.setColor(COLOR("blue"));

    All1.imprint();
    All2.imprint();
    All3.imprint();
    All4.imprint();

    int AI,AJ;
    char AA[3][3];
    for(AI=0;AI<3;AI++){
    for(AJ=0;AJ<3;AJ++){
    AA[AI][AJ]='_';}
    }
    int Ai,Aj,Ak;
    char Aa[9][3][3];
    for(Ak=0;Ak<9;Ak++)
    for(Ai=0;Ai<3;Ai++)
    for(Aj=0;Aj<3;Aj++)
    Aa[Ak][Ai][Aj]='-';


    while(1){
    int Ax,Ay,AI,AJ,Aw,Ai,Aj;
    AX:
    Text Att1(750,550,"player_X_turn");
    Aw=getClick();
       Ax=Aw/65536;
      Ay=Aw%65536;
       AI=AgetI(Ax);
      AJ=AgetJ(Ay);
      Ai=Ageti(Ax);
      Aj=Agetj(Ay);
      Ak=AgetK(AI,AJ);
     int Acen_X=AcenX(AI);
     int Acen_Y=AcenY(AJ);
     int Acen_x=Acenx(Ai,AI);
     int Acen_y=Aceny(Aj,AJ);

    if(AA[AI][AJ]=='_'){
    if(Aa[Ak][Ai][Aj]=='-'){
    Aa[Ak][Ai][Aj]='Ax';
    Rectangle Ar1(Acen_x,Acen_y,45,8);
    Rectangle Ar2(Acen_x,Acen_y,45,8);
    Ar1.rotate(PI/4);
    Ar2.rotate(7*PI/4);
    Ar1.setFill(true);
    Ar2.setFill(true);
    Ar1.setColor(COLOR("red"));
    Ar2.setColor(COLOR("red"));
    Ar1.imprint();
    Ar2.imprint();

    }
    else{cout<<"invalid input"<<endl; goto AX;}
    int Awin_x=Awinx(Aa,Ak);
    if(Awin_x>0){
    AA[AI][AJ]='AX';
    Rectangle AR1(Acen_X,Acen_Y,125,20);
    AR1.setFill(true);
    AR1.setColor(COLOR("red"));
    AR1.rotate(PI/4);
    AR1.imprint();
    Rectangle AR2(Acen_X,Acen_Y,125,20);
    AR2.setFill(true);
    AR2.setColor(COLOR("red"));
    AR2.rotate(7*PI/4);
    AR2.imprint();
    cout<<AwinX(AA)<<endl;
    }
    if(AwinX(AA)>0){cout<<"player_X_won_GAME OVER";Text Att3(750,550,"player_X_won_GAME_OVER");Att3.imprint();wait(0.5);goto A;}
    }
    else {cout<<"invalid input"<<endl; goto AX;}

    AO:
    Text Att2(750,550,"player_O_turn");
    Aw=getClick();
       Ax=Aw/65536;
      Ay=Aw%65536;
       AI=AgetI(Ax);
      AJ=AgetJ(Ay);
      Ai=Ageti(Ax);
      Aj=Agetj(Ay);
      Ak=AgetK(AI,AJ);
      Acen_X=AcenX(AI);
      Acen_Y=AcenY(AJ);
      Acen_x=Acenx(Ai,AI);
      Acen_y=Aceny(Aj,AJ);

    if(AA[AI][AJ]=='_'){
    if(Aa[Ak][Ai][Aj]=='-'){
    Aa[Ak][Ai][Aj]='Ao';
    Circle Ac1(Acen_x,Acen_y,22);
    Circle Ac2(Acen_x,Acen_y,17);

    Ac1.setFill(true);
    Ac2.setFill(true);
    Ac1.setColor(COLOR("blue"));
    Ac2.setColor(COLOR("white"));
    Ac1.imprint();
    Ac2.imprint();

    }
    else{cout<<"invalid input"<<endl; goto AO;}
    int Awin_o=Awino(Aa,Ak);
    if(Awin_o>0){
    AA[AI][AJ]='AO';

    Circle AC1(Acen_X,Acen_Y,65), AC2(Acen_X,Acen_Y,50);
    AC1.setFill(true);
    AC2.setFill(true);
    AC1.setColor(COLOR("blue"));
    AC2.setColor(COLOR("white"));
    AC1.imprint();
    AC2.imprint();

    cout<<AwinO(AA)<<endl;
    }
    if(AwinO(AA)>0){cout<<"player_O_won_GAME OVER";Text Att4(750,550,"player_O_won_GAME_OVER");Att4.imprint();wait(0.5);goto A;}
    }
    else {cout<<"invalid input"<<endl; goto AO;}
    }
    }



    if(Mx>1000&&Mx<1400&&My<700&&My>600){

    int Sl ,Sw;
    for(Sl=20;Sl<400;Sl+=120){
    Line Sl1(1020,Sl,1380,Sl);
    Sl1.imprint();}
    for(Sw=1020;Sw<1400;Sw+=120){
    Line Sl2(Sw,20,Sw,380);
     Sl2.imprint();
     };
    int Si,Sj;
    char Sarr[3][3];
    for(Si=0;Si<3;Si++){
    for(Sj=0;Sj<3;Sj++){
    Sarr[Si][Sj]='_';}
    }
    while(1){
    int Sx,Sy,Si=-1,Sj=-1,Sw;
    Sx:
    Text St1(1200,450,"player_X_turn");
    Sw=getClick();
       Sx=Sw/65536;
      Sy=Sw%65536;
       Si=Sgeti(Sx);
      Sj=Sgetj(Sy);
     int Scenx=ScenX(Si);
     int Sceny=ScenY(Sj);



    if(Sarr[Si][Sj]=='_'){
    Sarr[Si][Sj]='SX';
    Rectangle Sr1(Scenx,Sceny,100,20);
    Sr1.setFill(true);
    Sr1.setColor(COLOR("red"));
    Sr1.rotate(PI/4);
    Sr1.imprint();
    Rectangle Sr2(Scenx,Sceny,100,20);
    Sr2.setFill(true);
    Sr2.setColor(COLOR("red"));
    Sr2.rotate(7*PI/4);
    Sr2.imprint();
    int Swin=SwinX(Sarr);
    if (Swin>0){cout<<"player_X_won"<<endl; Text St3(1200,450,"player_X_won_GAME_OVER"); St3.imprint();wait(0.5);goto A;
     }

 }
    else {cout<<"Invalid Input"<<endl;
    goto Sx;}

    So:
    Text St2(1200,450,"player_O_turn");

      Sw=getClick();
       Sx=Sw/65536;
      Sy=Sw%65536;
       Si=Sgeti(Sx);
     Sj=Sgetj(Sy);
      Scenx=ScenX(Si);
      Sceny=ScenY(Sj);

    if(Sarr[Si][Sj]=='_'){
    Sarr[Si][Sj]='SO';
    Circle Sc1(Scenx,Sceny,55), Sc2(Scenx,Sceny,38);
    Sc1.setFill(true);
    Sc2.setFill(true);
    Sc1.setColor(COLOR("blue"));
    Sc2.setColor(COLOR("white"));
    Sc1.imprint();
    Sc2.imprint();
    int Swin=SwinO(Sarr);
    if (Swin>0){cout<<"player_O_won"<<endl;Text St4(1200,450,"player_O_won_GAME_OVER");St4.imprint();wait(0.5);goto A;}

    }
    else{
    cout<<"Invalid Input"<<endl;
    goto So;
    }

           }

        }
     }
    }
}
