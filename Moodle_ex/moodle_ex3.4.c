#include <stdio.h>

typedef enum { English, Italian, Spanish } language;
const char *month(int number, language lang);
const char *lang2str(language lang);

int main(){
printf("%s\n", month(1, English));
printf("%s\n", month(13, Spanish));
    printf("%s\n", lang2str(Spanish));
    printf("%s\n", lang2str(1));
    printf("%s\n", lang2str(4));
}

const char *month(int number, language lang){
    const char *result;
    language given = lang;
    int choice = number;
    struct months{
        int month_nr;
        char month_eng[20];
        char month_spa[20];
        char month_ita[20];
    };
    static struct months m[12] =
    {
    {1, "January", "Enero", "Gennaio"},
    {2, "February", "Febrero", "Febbraio"},
    {3, "March", "Marzo", "Marzo"},
    {4, "April", "Abril", "Aprile"},
    {5, "May", "Mayo", "Maggio"},
    {6, "June", "Junio", "Giugno"},
    {7, "July", "Julio", "Luglio"},
    {8, "August", "Agosto", "Agosto"},
    {9, "September", "Septiembre", "Settembre"},
    {10, "October", "Octubre", "Ottobre"},
    {11, "November", "Noviembre", "Novembre"},
    {12, "December", "Diciembre", "Dicembre"}
    };
    if(choice < 1 || choice > 12){
        result = "Error";
        return result;
    }
    if(given == English){
        result = m[choice-1].month_eng;
    }
    else if(given == Spanish){
        result = m[choice-1].month_spa;
    }
    else if(given == Italian){
        result = m[choice-1].month_ita;
    }
    else{
        result = "Error";
        return result;
    }


    return result;
}


const char *lang2str(language lang){
    const char *result;
    language given = lang;
    if(given == Spanish){
        result = "Spanish";
    }
    else if(given == English){
        result = "English";
    }
    else if(given == Italian){
        result = "Italian";
    }
    else{
        result = "Error";
    }
    return result;
}