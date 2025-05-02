#include <stdio.h>

int main() {
    int CLASS1, CLASS2, CLASS3, CLASS4, CLASS5, CLASS6; 
    // Classe é um inteiro podendo ser: 1 (Guerreiro), 2 (Mago) ou 3 (Arqueiro).
    double ATAQUE1, ATAQUE2, ATAQUE3, ATAQUE4, ATAQUE5, ATAQUE6;
    double VIDA1, VIDA2, VIDA3, VIDA4, VIDA5, VIDA6;
    // 1 && 2 && 3 == PEDRO // 4 && 5 && 6 == TÚLIO
    
    ATAQUE1 > 0;
    ATAQUE2 > 0;
    ATAQUE3 > 0;
    ATAQUE4 > 0;
    ATAQUE5 > 0;
    ATAQUE6 > 0;
    
    VIDA1 > 0;
    VIDA2 > 0;
    VIDA3 > 0;
    VIDA4 > 0;
    VIDA5 > 0;
    VIDA6 > 0;
    
    scanf("%d %lf %lf\n", &CLASS1, &ATAQUE1, &VIDA1);
    scanf("%d %lf %lf\n", &CLASS2, &ATAQUE2, &VIDA2);
    scanf("%d %lf %lf\n", &CLASS3, &ATAQUE3, &VIDA3);
    scanf("%d %lf %lf\n", &CLASS4, &ATAQUE4, &VIDA4);
    scanf("%d %lf %lf\n", &CLASS5, &ATAQUE5, &VIDA5);
    scanf("%d %lf %lf\n", &CLASS6, &ATAQUE6, &VIDA6);
    
    if (CLASS1 == 1 && CLASS4 == 3) {
        VIDA1 *= 1.30;
        if (CLASS2 == 1 && CLASS5 == 3) {
            VIDA2 *= 1.30;
            if (CLASS3 == 1 && CLASS6 == 3) {
                VIDA3 *= 1.30;
            }
            else if (CLASS3 == 3 && CLASS6 == 2) {
                VIDA3  *= 1.25;
            }
            else if (CLASS3 == 2 && CLASS6 == 1) {
                VIDA3 *= 1.15;
            }
            else {
                
            }
        }
        else if (CLASS2 == 3 && CLASS5 == 2) {
            VIDA2 *= 1.25;
            if (CLASS3 == 1 && CLASS6 == 3) {
                VIDA3 *= 1.30;
            }
            else if (CLASS3 == 3 && CLASS6 == 2) {
                VIDA3  *= 1.25;
            }
            else if (CLASS3 == 2 && CLASS6 == 1) {
                VIDA3 *= 1.15;
            }
            else {
                
            }
        }
        else if (CLASS2 == 2 && CLASS5 == 1) {
            VIDA2 *= 1.15;
            if (CLASS3 == 1 && CLASS6 == 3) {
                VIDA3 *= 1.30;
            }
            else if (CLASS3 == 3 && CLASS6 == 2) {
                VIDA3  *= 1.25;
            }
            else if (CLASS3 == 2 && CLASS6 == 1) {
                VIDA3 *= 1.15;
            }
            else  {
                
            }
        }
        else {
            
        }
    }
    
    else if (CLASS1 == 3 && CLASS4 == 2) {
        VIDA1 *= 1.25;
        if (CLASS2 == 1 && CLASS5 == 3) {
            VIDA2 *= 1.30;
            if (CLASS3 == 1 && CLASS6 == 3) {
                VIDA3 *= 1.30;
            }
            else if (CLASS3 == 3 && CLASS6 == 2) {
                VIDA3  *= 1.25;
            }
            else if (CLASS3 == 2 && CLASS6 == 1) {
                VIDA3 *= 1.15;
            }
            else {
                
            }
        }
        else if (CLASS2 == 3 && CLASS5 == 2) {
            VIDA2 *= 1.25;
            if (CLASS3 == 1 && CLASS6 == 3) {
                VIDA3 *= 1.30;
            }
            else if (CLASS3 == 3 && CLASS6 == 2) {
                VIDA3  *= 1.25;
            }
            else if (CLASS3 == 2 && CLASS6 == 1) {
                VIDA3 *= 1.15;
            }
            else {
                
            }
        }
        else if (CLASS2 == 2 && CLASS5 == 1) {
            VIDA2 *= 1.15;
            if (CLASS3 == 1 && CLASS6 == 3) {
                VIDA3 *= 1.30;
            }
            else if (CLASS3 == 3 && CLASS6 == 2) {
                VIDA3  *= 1.25;
            }
            else if (CLASS3 == 2 && CLASS6 == 1) {
                VIDA3 *= 1.15;
            }
            else {
                
            }
        }
        else {
            
        }
    }
    
    else if (CLASS1 == 2 && CLASS4 == 1) {
        VIDA1 *= 1.15;
        if (CLASS2 == 1 && CLASS5 == 3) {
            VIDA2 *= 1.30;
            if (CLASS3 == 1 && CLASS6 == 3) {
                VIDA3 *= 1.30;
            }
            else if (CLASS3 == 3 && CLASS6 == 2) {
                VIDA3  *= 1.25;
            }
            else if (CLASS3 == 2 && CLASS6 == 1) {
                VIDA3 *= 1.15;
            }
            else {
                
            }
        }
        else if (CLASS2 == 3 && CLASS5 == 2) {
            VIDA2 *= 1.25;
            if (CLASS3 == 1 && CLASS6 == 3) {
                VIDA3 *= 1.30;
            }
            else if (CLASS3 == 3 && CLASS6 == 2) {
                VIDA3  *= 1.25;
            }
            else if (CLASS3 == 2 && CLASS6 == 1) {
                VIDA3 *= 1.15;
            }
            else {
                
            }
        }
        else if (CLASS2 == 2 && CLASS5 == 1) {
            VIDA2 *= 1.15;
            if (CLASS3 == 1 && CLASS6 == 3) {
                VIDA3 *= 1.30;
            }
            else if (CLASS3 == 3 && CLASS6 == 2) {
                VIDA3  *= 1.25;
            }
            else if (CLASS3 == 2 && CLASS6 == 1) {
                VIDA3 *= 1.15;
            }
            else {
                
            }
        }
        else {
            
        }
    }
    else {
        
    }
    
    return 0;
}