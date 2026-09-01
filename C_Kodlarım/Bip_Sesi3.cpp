#include <stdio.h>
#include <windows.h>  // Beep için gerekli

int main(void) {
    // Do-Re-Mi gibi basit bir melodi sesi yapýyorum
    Beep(262, 300); // Do (C4)
    Beep(294, 300); // Re (D4)
    Beep(330, 300); // Mi (E4)
    Beep(349, 300); // Fa (F4)
    Beep(392, 300); // Sol (G4)
    Beep(440, 300); // La (A4)
    Beep(494, 300); // Si (B4)
    Beep(523, 600); // Do (C5) - uzun

    return 0;
}

