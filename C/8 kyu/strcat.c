char* strcat(char* dest, const char* src) {
    int i = 0;
    int destlen = 0;
    int n = 0;

    while(dest[destlen] != '\0'){
        destlen++;
    }

    while(src[n] != '\0'){
        n++;
    }

    for(i = 0; i < n && src[i] !='\0'; i++){
        dest[destlen + i] = src[i]; 
    }

    dest[destlen + i] = '\0';

    return dest;
}

// Accès à la doc en tapant man strcat dans le terminal.