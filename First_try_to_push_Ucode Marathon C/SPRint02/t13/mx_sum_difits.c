int mx_sum_digits(int num) {   
int a, sum = 0;

    while (num != 0) {    
        if (num > 0) { 
            a = num % 10;
            sum = sum + a;
            num = num / 10;
        }   
        else if (num < 0) { 
            num = num * (-1);
            a = num % 10;
            sum = sum + a;
            num = num / 10;
        }
    }
    return sum; 
}
