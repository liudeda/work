#include <stdio.h>

int main() {
    FILE *binFile = fopen("data.bin", "wb");  // 打开用于写入的二进制文件
    if (binFile == NULL) {
        printf("文件打开失败\n");
        return 1;
    }

    for (int i = 0; i <= 4096; i++) {
        fwrite(&i, sizeof(unsigned short), 1, binFile);  // 向二进制文件写入数据
    }

    fclose(binFile);  // 关闭文件

    printf("生成bin文件成功\n");
    return 0;
}