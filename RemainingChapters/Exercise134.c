// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <string.h>

struct Record {
    int id;
    char name[50];
    float score;
};

int main() {
    struct Record rec = {101, "Atharva", 92.5f};
    FILE *fp = fopen("record.dat", "wb");
    fwrite(&rec, sizeof(rec), 1, fp);
    fclose(fp);
    struct Record loaded;
    fp = fopen("record.dat", "rb");
    fseek(fp, 0, SEEK_SET);
    fread(&loaded, sizeof(loaded), 1, fp);
    fclose(fp);
    printf("ID: %d | Name: %s | Score: %.1f\n", loaded.id, loaded.name, loaded.score);
    return 0;
}
