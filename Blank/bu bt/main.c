int main() {
    int a, b,result;
    scanf("%d %d", &a, &b);
    if (a<=1 && b<=100){
    	result = a * a + 2 * a * b + b * b;
    }

    printf("%d\n", result);
    return 0;
}
