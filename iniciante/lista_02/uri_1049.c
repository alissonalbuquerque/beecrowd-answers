
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define VERTEBRADO "vertebrado"
#define INVERTEBRADO "invertebrado"

#define AVE "ave"
#define MAMIFERO "mamifero"
#define INSETO "inseto"
#define ANELIDEO "anelideo"

#define CARNIVORO "carnivoro"
#define HERBIVORO "herbivoro"
#define ONIVORO "onivoro"
#define HEMATOFAGO "hematofago"

#define AGUIA "aguia"
#define POMBA "pomba"
#define HOMEM "homem"
#define VACA "vaca"
#define PULGA "pulga"
#define LARGATA "lagarta"
#define SANGUESSUGA "sanguessuga"
#define MINHOCA "minhoca"

bool equal(char str1[], char str2[]) {

    size_t len_str1 = strlen(str1);
    size_t len_str2 = strlen(str2);
    bool value_return = false;

    if(len_str1 == len_str2) {

        value_return = true;

        for(int i = 0; i < len_str1; i++) {

            if(str1[i] != str2[i]) {
                value_return = false;
                break;
            }

        }

        return value_return;

    } else {

        return value_return;

    }

    return true;
}

int main() {

    char linha1[13], linha2[11], linha3[11];
    scanf("%[a-z] %[a-z] %[a-z]", &linha1, &linha2, &linha3);

    if( equal(linha1, VERTEBRADO) ) {

        if( equal(linha2, AVE) ) {

            if( equal(linha3, CARNIVORO) ) {
                puts(AGUIA);
            }

            if( equal(linha3, ONIVORO) ) {
                puts(POMBA);
            }

        }

        if( equal(linha2, MAMIFERO) ) {

            if( equal(linha3, ONIVORO) ) {
                puts(HOMEM);
            }

            if( equal(linha3, HERBIVORO) ) {
                puts(VACA);
            }

        }

    }

    //--------------------------------------

    if( equal(linha1, INVERTEBRADO) ) {

        if( equal(linha2, INSETO) ) {

            if( equal(linha3, HEMATOFAGO) ) {
                puts(PULGA);
            }

            if( equal(linha3, HERBIVORO) ) {
                puts(LARGATA);
            }

        }

        if( equal(linha2, ANELIDEO) ) {

            if( equal(linha3, HEMATOFAGO) ) {
                puts(SANGUESSUGA);
            }

            if( equal(linha3, ONIVORO) ) {
                puts(MINHOCA);
            }

        }

    }

    return 0;
}

/*
    ----------------------------
    Entrada:
        vertebrado
        mamifero
        onivoro
    Saida:
        homem
    ----------------------------
    ----------------------------
    Entrada:
        vertebrado
        ave
        carnivoro
    Saida:
        aguia
    ----------------------------
    ----------------------------
    Entrada:
        invertebrado
        anelideo
        onivoro
    Saida:
        minhoca
    ----------------------------
*/