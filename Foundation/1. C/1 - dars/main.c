#include <stdio.h> //stdio.h => STANDARD INPUT OUTPUT kutubxonasi .HEADER FILE

//int bu funksiyani integer qiymat return qilishi uchun ishlatiladi

int main(){//main asosiy funksiyasi
    /*
        {} => CURLY BRACKETS
        () => PARENTHESES
        <> => DIAMOND BRACKETS
        /  => SLASH
        \  => BACKSLASH
        ;  => SEMICOLON
        :  => COLON
        .  => DOT
        ,  => COMMA
    */

    printf("Hello World!\n");//Bu kodlar orqali terminalga kodlarni chiqarish uchun ishlatiliniladi
    // char oziga faqat 1 qiymat symbol oladi bu qiymat turi string bolishi kerak va bu char deb ataladi
    // char oziga faqat 1 qiymat oladi va bu qiymatlar bilan birinchi harf qiymatini qaytaradi
    /*
        char myNameFirstSymbol = 'D'; // faqat bitta qiymatni assign qilishimiz kerak boladi
        char myNameSecondSymbol = 'i'; // faqat bitta qiymatni assign qilishimiz kerak boladi
    
        // Ekranga chiqarishda foizda c dan foydalanishimiz kerak 
        nma uchun bu kerak desangiz ozgaruvchini qanday qiymatda kelishiniham belgilab chiqaramiz 
        Hozirda mynameFirstSymbol degan ozgaruvchimiz char type ga ekan va buni biz ekranga chiqrishda
        
        printf("%c", myNameFirstSymbol);
        %c => CHARACTERga teng bolaidi
    
        bu faqat oziga matnlarni qabul qiladi raqam float qiymatlarni qabul qilmedi!!!

        char myFirstAgeSymbol = 2; //Bunda bizga hato chiqaradi!!
        printf("%c\n", myFirstAgeSymbol); //Bunda bizga hato chiqaradi!!
    */
    char symbol = '!';
    printf("Symbol bang: %c\n", symbol); //!

    char myFirstNameSymbol = 'D';
    printf("Symbol my first name: %c; \n", myFirstNameSymbol);



    // char seriya bu oziga kop symbol larni oziga qabul qiluvchi ozgaruvchi turi
    /*
        char seriay orqali kopincha malumotlarni assign qila olamiz yani ozgaruvchi ga tenglashtira olamiz
        
        char myFullName[] = "Diyorbek Rustmajonov";

        printf("My full name is: %s\n", myFullName);

        char seriyada qancha qiymat olishini belgilab ketsak ham boladi yani
        char symbols[3] = "He"; //3ta qiymat deganimiz ni sabab ni kiritayotgan qimatimizni oxirida /0 ham bor shu sababli buniham inobat ga olgan 
        holatda kiritilayotgan qiymatga yana bir sonini qoshihb ketishimiz kerak
        
        CHAR => CHAR bu bitta qiymat ga ataladi
        STRING => STRING bu kopincha qiymatlarga ataladi
        $c => CHARACTER ga teng boladi
        %s => STRING ga teng boladi
    */
    char myName[] = "Diyorbek Rustamjonov"; 
    printf("My name is: %s; \n", myName);

    char twoSymbols[3] = "Di";
    printf("Two symbols: %s\n", twoSymbols);

    char threeSymbols[4] = "Diy";
    printf("Three symbols: %s; \n", threeSymbols);

    char fourSymbols[5] = "Diyo";
    printf("Fours symbols: %s; \n", fourSymbols);

    int num = 10;
    printf("Number: %d; \n", num);

    //! char RAMda 1byte egalaydi
    //! char seriya RAMda qiymatga qarab 1byte dan egalaydi


    //INTEGER
    printf("\n=========INTEGER=========\n");
    // int RAMda 4byte egalaydi => 4ta kattaka sogdorado
    int butunSon = 23;
    printf("Butunson: %d; \n",butunSon); //%d => DECIMAL qiymatlarni qabul qiladi

    //int oziga maksimal 4BYTE sigdira oladi, 4BYTE => 32BIT ga teng => 32BIT => 2147483647 shu songa teng
    int intMaxnum = 2147483647; //4BYTE bu 32BIT degani 
    printf("32BIT MAX value: %d; \n", intMaxnum); 

    //int oziga maksimal 8BYTE sigdira oladi, 8BYTE => 64BIT ga teng => 64BIT => 2147483647 shu songa teng
    long int longIntMaxNum = 922; //8BYTE => 64BIT
    printf("64BIT MAX value: %ld; \n", longIntMaxNum); //ld => LONG DECIMAL

    //float bu qoldiq son deyiladi
    float qoldiqSon = 4.5;
    printf("Qoldiq Son: %f; \n", qoldiqSon);//%f => FLOAT aniq qiymatni qaytaradi
    printf("Qoldiq Son: %.1f; \n", qoldiqSon);//%.1f => FLOAT bu yerda son dan kegin 1ta qiymatni qaytaradi
    printf("Qoldiq Son: %.2f; \n", qoldiqSon);//%.2f => FLOAT bu yerda son dan kegin 2ta qiymatni qaytaradi

    //double bu kata 8bit li qoldiq sonni chiqarib beradi
    double kattaQoldiqSon = 13123131231.2;
    printf("Katta qoldiq son: %lf", kattaQoldiqSon);//%lf => LONG FLOAT 
    return 0; //Bu kodlar orqali programma chiqarish uchun ishlatiliniladi
}
