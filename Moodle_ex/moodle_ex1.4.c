
void sequence(int num1, int num2){
    int temp;
    if(num1 > num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for(int i = num1; i <= num2; i++){
        printf("%d\n", i);
    }
}