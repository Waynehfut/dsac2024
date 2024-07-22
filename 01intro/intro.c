//
// Created by hao on 2024/5/20.
//
int recu(int x) {
    if (x == 0) {
        return 1;
    } else {
        return 2 * recu(x - 1);
    }
}


