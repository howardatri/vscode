#include <stdio.h>

// 函数声明
double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);

int main() {
    double celsius, fahrenheit;
    
    // 用户输入摄氏度
    printf("input temperature: ");
    scanf("%lf", &celsius);
    fahrenheit = celsiusToFahrenheit(celsius);
    printf("%.2f cel %.2f wall\n", celsius, fahrenheit);
    
    // 用户输入华氏度
    printf("walls: ");
    scanf("%lf", &fahrenheit);
    celsius = fahrenheitToCelsius(fahrenheit);
    printf("%.2f wall %.2f cels\n", fahrenheit, celsius);
    
    return 0;
}


double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}


double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}
