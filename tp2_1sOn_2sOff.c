void main() {
    TRISB.B7 = 0;  // Configurer RB4 comme sortie
    while (1) {
        PORTB.B7 = 1;  // Allumer la LED
        Delay_ms(1000); // Attendre 1s
        PORTB.B7 = 0;  // �teindre la LED
        Delay_ms(2000); // Attendre 2s
    }
}