#include <stdio.h>

struct Vida {
    int Luke;
    int Vader;
};
struct Dano {
    int Luke[3][3];
    int Vader[3][3];
};

int main() {
    struct Vida HP;
    struct Dano Attack;
    
    scanf("%d %d", &HP.Luke , &HP.Vader);
    printf(" \n");
    
    for( int i = 1 ; i < 11 ; i++ ) {
        
        if( HP.Luke <= 0 && HP.Vader <= 0 ) {
            printf("Houve empate.\n");
            return 0;
        }
        if( HP.Luke > 0 && 0 >= HP.Vader  ) {
            printf("Luke Skywalker venceu.\n");
            return 0;
        }
        if( HP.Luke <= 0 && 0 < HP.Vader ) {
            printf("Darth Vader venceu.\n");
            return 0;
        }
        
        printf(" \n");
        
        for( int j = 0 ; j < 3 ; j++ ) {
            for( int k = 0 ; k < 3 ; k++ ) {
                scanf("%d", &Attack.Luke[j][k]);
            }
        }
        printf(" \n");
        for( int j = 0 ; j < 3 ; j++ ) {
            for( int k = 0 ; k < 3 ; k++ ) {
                scanf("%d", &Attack.Vader[j][k]);
            }
        }
        
        if( i == 10 ) {
            
            if( Attack.Luke[0][0] == 1 && Attack.Luke[0][1] == 0 &&  Attack.Luke[0][2] == 0 &&
                Attack.Luke[1][0] == 0 && Attack.Luke[1][1] == 1 &&  Attack.Luke[1][2] == 0 &&
                Attack.Luke[2][0] == 0 && Attack.Luke[2][1] == 0 &&  Attack.Luke[2][2] == 1    ) {
                if( Attack.Vader[0][0] == 0 && Attack.Vader[0][1] == 0 &&  Attack.Vader[0][2] == 1 &&
                    Attack.Vader[1][0] == 0 && Attack.Vader[1][1] == 1 &&  Attack.Vader[1][2] == 0 &&
                    Attack.Vader[2][0] == 1 && Attack.Vader[2][1] == 0 &&  Attack.Vader[2][2] == 0    ) {
                    HP.Luke -= 0;
                    HP.Vader -= 0;
                }
                if( Attack.Vader[0][0] == 1 && Attack.Vader[0][1] == 0 &&  Attack.Vader[0][2] == 0 && 
                    Attack.Vader[1][0] == 0 && Attack.Vader[1][1] == 1 &&  Attack.Vader[1][2] == 0 &&
                    Attack.Vader[2][0] == 0 && Attack.Vader[2][1] == 0 &&  Attack.Vader[2][2] == 1    ) {
                    HP.Luke -= 15;
                    HP.Vader -= 15;
                }
                else{
                    HP.Vader -= 15;
                }
            }
            if( Attack.Luke[0][0] == 0 && Attack.Luke[0][1] == 0 &&  Attack.Luke[0][2] == 1 &&
                Attack.Luke[1][0] == 0 && Attack.Luke[1][1] == 1 &&  Attack.Luke[1][2] == 0 &&
                Attack.Luke[2][0] == 1 && Attack.Luke[2][1] == 0 &&  Attack.Luke[2][2] == 0    ) {
                if( Attack.Vader[0][0] == 1 && Attack.Vader[0][1] == 0 &&  Attack.Vader[0][2] == 0 &&
                    Attack.Vader[1][0] == 0 && Attack.Vader[1][1] == 1 &&  Attack.Vader[1][2] == 0 &&
                    Attack.Vader[2][0] == 0 && Attack.Vader[2][1] == 0 &&  Attack.Vader[2][2] == 1    ) {
                    HP.Luke -= 0;
                    HP.Vader -= 0;
                }
                if( Attack.Vader[0][0] == 0 && Attack.Vader[0][1] == 0 &&  Attack.Vader[0][2] == 1 &&
                    Attack.Vader[1][0] == 0 && Attack.Vader[1][1] == 1 &&  Attack.Vader[1][2] == 0 &&
                    Attack.Vader[2][0] == 1 && Attack.Vader[2][1] == 0 &&  Attack.Vader[2][2] == 0    ) {
                    HP.Luke -= 15;
                    HP.Vader -= 15;
                }
                else{
                    HP.Vader -= 15;
                }
            }
            if( Attack.Vader[0][0] == 1 && Attack.Vader[0][1] == 0 &&  Attack.Vader[0][2] == 0 &&
                Attack.Vader[1][0] == 0 && Attack.Vader[1][1] == 1 &&  Attack.Vader[1][2] == 0 && 
                Attack.Vader[2][0] == 0 && Attack.Vader[2][1] == 0 &&  Attack.Vader[2][2] == 1    ) {
                HP.Luke -= 15;
            }
            if( Attack.Vader[0][0] == 0 && Attack.Vader[0][1] == 0 &&  Attack.Vader[0][2] == 1 &&
                Attack.Vader[1][0] == 0 && Attack.Vader[1][1] == 1 &&  Attack.Vader[1][2] == 0 && 
                Attack.Vader[2][0] == 1 && Attack.Vader[2][1] == 0 &&  Attack.Vader[2][2] == 0    ) {
                HP.Luke -= 15;
            }
            
            if( HP.Luke > HP.Vader ) {
                printf("Luke Skywalker venceu.\n");
                return 0;
            }
            if( HP.Luke == HP.Vader ) {
                printf("Houve empate.\n");
                return 0;
            }
            if( HP.Luke < HP.Vader ) {
                printf("Darth Vader venceu.\n");
                return 0;
            }
            
        }
        
        else {
            
            if( Attack.Luke[0][0] == 1 && Attack.Luke[0][1] == 0 &&  Attack.Luke[0][2] == 0 &&
                Attack.Luke[1][0] == 0 && Attack.Luke[1][1] == 1 &&  Attack.Luke[1][2] == 0 &&
                Attack.Luke[2][0] == 0 && Attack.Luke[2][1] == 0 &&  Attack.Luke[2][2] == 1    ) {
                if( Attack.Vader[0][0] == 0 && Attack.Vader[0][1] == 0 &&  Attack.Vader[0][2] == 1 &&
                    Attack.Vader[1][0] == 0 && Attack.Vader[1][1] == 1 &&  Attack.Vader[1][2] == 0 &&
                    Attack.Vader[2][0] == 1 && Attack.Vader[2][1] == 0 &&  Attack.Vader[2][2] == 0    ) {
                    HP.Luke -= 0;
                    HP.Vader -= 0;
                }
                if( Attack.Vader[0][0] == 1 && Attack.Vader[0][1] == 0 &&  Attack.Vader[0][2] == 0 && 
                    Attack.Vader[1][0] == 0 && Attack.Vader[1][1] == 1 &&  Attack.Vader[1][2] == 0 &&
                    Attack.Vader[2][0] == 0 && Attack.Vader[2][1] == 0 &&  Attack.Vader[2][2] == 1    ) {
                    HP.Luke -= 15;
                    HP.Vader -= 15;
                }
                else{
                    HP.Vader -= 15;
                }
            }
            if( Attack.Luke[0][0] == 0 && Attack.Luke[0][1] == 0 &&  Attack.Luke[0][2] == 1 &&
                Attack.Luke[1][0] == 0 && Attack.Luke[1][1] == 1 &&  Attack.Luke[1][2] == 0 &&
                Attack.Luke[2][0] == 1 && Attack.Luke[2][1] == 0 &&  Attack.Luke[2][2] == 0    ) {
                if( Attack.Vader[0][0] == 1 && Attack.Vader[0][1] == 0 &&  Attack.Vader[0][2] == 0 &&
                    Attack.Vader[1][0] == 0 && Attack.Vader[1][1] == 1 &&  Attack.Vader[1][2] == 0 &&
                    Attack.Vader[2][0] == 0 && Attack.Vader[2][1] == 0 &&  Attack.Vader[2][2] == 1    ) {
                    HP.Luke -= 0;
                    HP.Vader -= 0;
                }
                if( Attack.Vader[0][0] == 0 && Attack.Vader[0][1] == 0 &&  Attack.Vader[0][2] == 1 &&
                    Attack.Vader[1][0] == 0 && Attack.Vader[1][1] == 1 &&  Attack.Vader[1][2] == 0 &&
                    Attack.Vader[2][0] == 1 && Attack.Vader[2][1] == 0 &&  Attack.Vader[2][2] == 0    ) {
                    HP.Luke -= 15;
                    HP.Vader -= 15;
                }
                else{
                    HP.Vader -= 15;
                }
            }
            else {
                if( Attack.Vader[0][0] == 1 && Attack.Vader[0][1] == 0 &&  Attack.Vader[0][2] == 0 &&
                    Attack.Vader[1][0] == 0 && Attack.Vader[1][1] == 1 &&  Attack.Vader[1][2] == 0 && 
                    Attack.Vader[2][0] == 0 && Attack.Vader[2][1] == 0 &&  Attack.Vader[2][2] == 1    ) {
                    HP.Luke -= 15;
                }
                if( Attack.Vader[0][0] == 0 && Attack.Vader[0][1] == 0 &&  Attack.Vader[0][2] == 1 &&
                    Attack.Vader[1][0] == 0 && Attack.Vader[1][1] == 1 &&  Attack.Vader[1][2] == 0 && 
                    Attack.Vader[2][0] == 1 && Attack.Vader[2][1] == 0 &&  Attack.Vader[2][2] == 0    ) {
                    HP.Luke -= 15;
                }
            }
            
        }
        
    }
    
    return 0;
}