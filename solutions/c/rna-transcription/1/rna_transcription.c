#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>

char *to_rna(const char *dna) {
    int length = strlen(dna);
    char* rna = (char*)malloc(length + 1);
    char* start = rna;
    while (*dna != '\0') {
        if (*dna == 'G') {
            *rna = 'C';
        }
        else if (*dna == 'C') {
            *rna = 'G';
        }
        else if (*dna == 'A') {
            *rna = 'U';
        }
        else if (*dna == 'T') {
            *rna = 'A';
        }
        dna++;
        rna++;
    }
    *rna = '\0';
    return start;
}