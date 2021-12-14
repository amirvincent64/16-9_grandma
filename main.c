#include <stdio.h>
int main(void) {
    int 被除數 = 16, 除數 = 6, step=1;
    printf("阿嬤：這道題很簡單\n");
    printf("阿嬤：%d減%d\n", 被除數, 除數);
    while (1) {
        if (被除數%10<除數) {
            step==2? printf("阿嬤：%d, %d減%d不夠\n", 被除數, 被除數%10, 除數):printf("阿嬤：%d減%d不夠\n", 被除數%10, 除數);
            printf("阿嬤：借%d\n", 被除數/10);
            printf("阿嬤：等於%d減%d\n", 被除數, 除數);
        } else {
            printf("阿嬤：等於%d\n", 被除數-除數);
            break;
        }
        step>=3? step=3:step++;
    }
}