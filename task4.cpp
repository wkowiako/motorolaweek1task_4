#include <iostream>
#include <string>

int a = 0 ,b = 0 ,c;
void square_X(int a ,int b )
{
    for(int i = 1 ; i <=a ; i++)
    {
        for(int j = 1 ; j <= b ; j++)
            {
             std::cout << "X"  ;   
            }
    std::cout << std::endl ;
    }
}
void square_border(int a ,int b )
{
    for(int i = 1 ; i <=a ; i++)
    {
        for(int j = 1 ; j <= b ; j++)
            {
            if(i == 1 || i == a || j == 1 || j == b)  
                {
                    std::cout << "X"  ; 
                }
            else std::cout << "O"  ;   
            }
    std::cout << std::endl ;
    }
}
void square_cross(int a ,int b )
{
    for(int i = 1 ; i <=a ; i++)
    {
        for(int j = 1 ; j <= b ; j++)
            {
            if(i == 1 || i == a || j == 1 || j == b )  
                {
                    std::cout << "X"  ; 
                }
            else if(i == j || j == (a-i)+1 )  
                {
                    std::cout << "X"  ; 
                }
            else std::cout << "O"  ;   
            }
    std::cout << std::endl ;
    }
}
void square_diamond(int a , int b )
{
    int szer ,wys ;
    if(a % 2 == 0) wys = a/2;
    else wys = (a/2)+1 ;
    
    if(b % 2 == 0) szer = b / 2;
    else szer = (b / 2) +1 ;
    int minus = 1 ;  
    for(int i = 1 ; i <= a ; i++)
    {
        for(int j = 1 ; j <= b ; j++)
            {
             if(i == 2 && j == szer )  
                {
                    std::cout << "X"  ; 
                }
             else if(i > 2 && i <= wys && j <= szer + i -2  && j >= szer - i +2  && i <b )  
                {
                    std::cout << "X"  ; 
                }
             else if(i > wys && i < a-1 && j > minus && j <= b - minus )  
                {
                    std::cout << "X"  ; 
                }
             else if(i == a -1 && j == szer )  
                {
                    std::cout << "X"  ; 
                }    
             else std::cout << "O"  ;   
            }
    if(i > wys) minus ++ ;       
    std::cout << std::endl ;
    }
}
void square_zigzag(int a ,int b) 
{
    for (int i = 0; i < a; i++) 
        {
        for (int y = 1; y <= b / 6; y++) 
            {
                if (i % 2 == 0) std::cout << ("oooXXX");
                else std::cout << ("XXXooo"); 
            }
        std::cout << std::endl ;
        }
}

void triangle(int a )
{
    int x = a ;
    int t = 1;
    while(t < 10)
    {
        for(int i = 0 ; i < t; i++)
            {
             std::cout << "X"; 
             x--;
            } 
    std::cout<< std::endl ;
    t ++;
    if(t>x)break;
    }
}
void square_Xo(int a ,int b)
{
    for(int i = 1 ; i <=a ; i++)
    {
        for(int j = 1 ; j <= b ; j++)
            {
             std::cout << "Xo"  ;   
            }
    std::cout << std::endl ;
    } 
}
int main()
{
    std::cout << "select an image " <<std::endl ; 
    std::cout << "rectangle of X press 1" <<std::endl ;
    std::cout << "triangle of X press 2" <<std::endl ;
    std::cout << "rectangle of Xo and press 3" <<std::endl ;
    std::cin >> c ;
    switch( c)
        {
        case 1: 
                std::cout << "select rectangle : normal rectangle press : 1  border rectangle press : 2 " ;
                std::cout << " cross rectangle press : 3  diamond rectangle press : 4  zigzag rectangle press : 5" ;
                std::cin >> c ;
                switch( c)
                {
                 case 1:
                    std::cout << "give side a" <<std::endl ;
                    std::cin >> a ;
                    std::cout << "give side b" <<std::endl ;
                    std::cin >> b ;
                    square_X(a,b) ; 
                 break;   
                 case 2:
                    std::cout << "give side a" <<std::endl ;
                    std::cin >> a ;
                    std::cout << "give side b" <<std::endl ;
                    std::cin >> b ;
                    square_border(a,b) ; 
                 break;  
                 case 3:
                    std::cout << "give side a" <<std::endl ;
                    std::cin >> a ;
                    std::cout << "give side b" <<std::endl ;
                    std::cin >> b ;
                    square_cross(a,b) ; 
                 break;    
                 case 4:
                    std::cout << "give side a" <<std::endl ;
                    std::cin >> a ;
                    std::cout << "give side b" <<std::endl ;
                    std::cin >> b ;
                    square_diamond(a,b) ; 
                 break;  
                 case 5:
                    std::cout << "give side a" <<std::endl ;
                    std::cin >> a ;
                    std::cout << "give side b" <<std::endl ;
                    std::cin >> b ;
                    square_zigzag(a,b) ; 
                 break; 
                } 
        break;
        case 2: std::cout << "give number of x  " <<std::endl ;
                std::cin >> a ;
                triangle(a) ; 
        break;
        case 3: std::cout << "give side a" <<std::endl ;
                std::cin >> a ;
                std::cout << "give side b" <<std::endl ;
                std::cin >> b ;
                square_Xo(a,b) ; 
        break;
        }
}


