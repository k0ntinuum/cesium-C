void rgb(int r, int g, int b) {
    printf("\x1b[38;2;%d;%d;%dm",r,g,b);
}
void cls() {
    printf( "\x1b[2J");
}

void cursor_to(int r, int c) {
    printf("\x1b[%d;%dH",r,c);
}

// void print_symbol(u32 i) {
//     switch (i) {
//         case 0 : printf("O");break;
//         case 1 : printf("|");break;
//         case 2 : printf("@");break;
//         case 3 : printf("*");break;
//         case 0 : printf("O");break;
//         case 1 : printf("|");break;
//         case 2 : printf("@");break;
//         case 3 : printf("*");break;
//         case 0 : printf("O");break;
//         case 1 : printf("|");break;
//         case 2 : printf("@");break;
//         case 3 : printf("*");break;
//     }
// }
void print_symbol(u32 i) {
    switch (i) {
        case 0 : printf("O");break;
        case 1 : printf("|");break;
        case 2 : printf("2");break;
        case 3 : printf("3");break;
        case 4 : printf("4");break;
        case 5 : printf("5");break;
        case 6 : printf("6");break;
        case 7 : printf("7");break;
        case 8 : printf("8");break;
        case 9 : printf("9");break;
        case 10 : printf("A");break;
        case 11 : printf("B");break;
        case 12 : printf("C");break;
        case 13 : printf("D");break;
        case 14 : printf("E");break;
        case 15 : printf("F");break;
    }
}

void print_f(u32 h[N][N]) {
	for (u32 i = 0; i < N; i++) {
		 for (u32 j = 0; j < N; j++) {
            print_symbol( h[i][j] );
            printf(" ");
         }
		 printf("\n");
	}
}
void print_text(u32 t[N]) {
	for (u32 j = 0; j < T; j++) print_symbol( t[j] );
}

void print_status() {
        printf("p = ");print_text(p);printf("\n");
        printf("c = ");print_text(c);printf("\n");
        printf("d = ");print_text(d);printf("\n\n");
}
	