#include <stdio.h>

struct Box {
    int length;
    int width;
    int height;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Box boxes[n];

    for(int i = 0; i < n; i++) {
        scanf("%d %d %d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
    }

    for(int i = 0; i < n; i++) {
        if(boxes[i].height < 41) { 
            int volume = boxes[i].length * boxes[i].width * boxes[i].height;
            printf("%d\n", volume);
        }
    }

    return 0;
}
