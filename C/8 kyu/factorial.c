int factorial(int n){
    printf("%i", n);
    int i = 1;
    int produit = 1;
    while(i <= n){
        produit *= i;
        i++;
    }
    return produit;

}