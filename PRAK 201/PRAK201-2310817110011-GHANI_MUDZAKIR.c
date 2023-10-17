#include <stdio.h>

int main()
{
    char nama_panjang[100];
    printf("Nama : ");
    fgets(nama_panjang, sizeof(nama_panjang), stdin);

    int nim;
    printf("NIM : ");
    scanf("%d", &nim);

    int kelas_paralel;
    printf("Kelas Paralel : ");
    scanf("%d", &kelas_paralel);

    char ttl[100];
    printf("Tempat\\Tanggal Lahir : ");
    getchar();
    fgets(ttl, sizeof(ttl), stdin);

    char alamat[250];
    printf("Alamat : ");
    fgets(alamat, sizeof(alamat), stdin);

    char hobby[100];
    printf("Hobby : ");
    fgets(hobby, sizeof(hobby), stdin);

    char no_hp[30];
    printf("No. HP : ");
    scanf("%s", &no_hp);

    printf("\n\nNama : %s", nama_panjang);
    printf("NIM : %d\n", nim);
    printf("Kelas Paralel : %d\n", kelas_paralel);
    printf("Tempat\\Tanggal Lahir : %s", ttl);
    printf("Alamat : %s", alamat);
    printf("Hobby : %s", hobby);
    printf("No. HP : %s\n", no_hp);




    return 0;
}




