#include <stdio.h>

/* stdio: standerd io の略 */
/* 標準入出力を行うためのもの */
/* .hはヘッダーファイル */

/* Hello world!
int main(void) {

    printf("Hello world!\n");
    return 0;
}

- printf: 文字力を出力させるための命令
- \n: 改行

*/

/*
- 変数: データにつけるラベル

    - データ型
        - int(整数) %d
        - float(実数) %f
        - char(1文字) %c

int main(void) {

    int x = 10;
    float y = 5.2;
    char c = 'A';
    printf("x = %d, y = %f, c = %c\n", x, y, c);
    return 0;
}

- =:　代入演算子(右辺のものを左辺に割り当てなさいというもの)

*/

/*
- 演算子
+ - * / %(余り)

int main(void) {

    int x;
    x = 10 % 3;  // 1

    printf("%d\n", x);
    return 0;
}

- 代入を伴う演算子
x = x + 5; → x += 5;

int main(void) {

    int x;
    x = 10 % 3; // 1
    x += 3; // 4

    printf("%d\n", x);
    return 0;
}

- 単行演算子
++ --

int main(void) {

    int x;
    x = 10 % 3; // 1
    x += 3; // 4
    x++; // 5

    printf("%d\n", x);
    return 0;
}
*/

/*
- 条件分岐(if)
    - 比較演算子
        - >=: 以上
        - <=: 以下
        - >: 何々より大きい
        - <: 何々より小さい
        - ==: 等しい
        - !=: 等しくない

int main(void) {

    int score = 48;

    if (score >= 60) {
        printf("OK!\n");
        // scoreが60点以上
    } else if (score >= 50){
        printf("so so...\n");
        // scoreが50点以上
    } else {
        printf("NG!\n");
        // scoreが50点以下
    }

    return 0;
}

- 条件分岐(switch)
予め条件がいくつか決まっているときに使う

int main(void) {

    int rank = 20;

    switch (rank) {
    case 1:
        printf("Gold!\n");
        break;
    case 2:
        printf("Silver!\n");
        break;
    case 3:
        printf("Bronze!\n");
        break;
    default:
        printf("no medal...\n");
        break;
    }

    return 0;
}
*/

/*
- ループ文

    - while文

    int main(void) {

        int m = 20;

　　　　　// while前判定
        while (m < 10) {　
            printf("m: %d\n", m);
            m++;
        }

        int n = 20;

　　　　　// while後判定
        do {
            printf("n: %d\n", n);
            n++;
        } while(n < 10);

        return 0;
    }

    - for文
    continue; 一回スキップ
    break; ループを抜ける

    int main(void) {

    int m;
    for (m = 0; m < 10; m++) {
        if (m == 3) {
            continue;
        }
        if (m == 8) {
            break;
        }
        printf("m: %d\n", m);
    }

    return 0;
}
*/

/*
- 関数: 複数の処理

返り値の型 関数名(引数, ...) {
    処理;
    return 返り値;
}

float getMax(float a, float b) {
    if ( a >= b) {
        return a;
    } else {
        return b;
    }
}

int main(void) {
    float result;
    result = getMax(2.3, 5.2);
    printf("%f\n", result);
    return 0;
}

    - 引数や返り値のない関数
        - void: 何もない

    int main(void) {
        float result;
        result = getMax(2.3, 5.2);
        printf("%f\n", result);

        sayHi();

        return 0;
    }

    float getMax(float a, float b) {
        if ( a >= b) {
            return a;
        } else {
            return b;
        }
    }

    void sayHi(void) {
        printf("hi!\n");
    }
*/

/*
- プロトタイプ宣言
プログラムの一番最初にどんな関数が登場するのか書く

float getMax(float a, float b);
void sayHi(void);

*/

/*
- 三項演算子

if (条件) {
    return A;
} else {
    return B;
}

返り値 = (条件) ? A : B;

float getMax(float a, float b) {

    // if ( a >= b) {
    //     return a;
    // } else {
    //    return b;
    // }

    return (a >=b) ? a : b;
}
*/

/*
- 変数の有効範囲
    - ローカル変数: ブロック内で宣言したもの

    void f(void) {
        int a = 0; // ローカル変数
        a++;
        printf("a: %d\n", a);
    }　　

    - グローバル変数(非推奨)

    int a = 0; // グローバル変数

    void f(void) {
        a++;
        printf("a: %d\n", a);
    }
*/

/*
- 変数の有効期限
    - 自動変数
    void f(void) {
        int a = 0; // 自動変数
        a++;
        printf("a: %d\n", a);
    }

    - 静的変数: 値はプログラムが終わるまで保持される
    void f(void) {
        static int a = 0; // 静的変数
        a++;
        printf("a: %d\n", a);
    }
*/

/*
配列: 複数のデータを一つの変数名で管理できる(0始まり)

int main(void) {
    // 領域の確保
    int seles[3];

    // 値の代入
    seles[0] = 200;
    seles[1] = 400;
    seles[2] = 300;

    // 省略版
    int seles2[] = {200, 400, 300};

    // 値の表示
    printf("%d\n", seles2[1]);

    return 0;
}
*/

/*
- 文字列: charの配列(終端は「\0」)

"abc"
char s[] = {'a', 'b', 'c', '\0'};
char s[] = "abc";
char s[4] = "abc";

int main(void) {
    char s[] = "abc";
    printf("%c\n", s[1]);
    return 0;
}
*/

/*
- ポインタ: アドレスを格納するための変数
    - メモリ(記憶領域)
        値の横に位置を指すアドレスが並んでいる
    int main(void) {
        int a; // 必要な領域の確保
        a = 10; // 確保した領域に値を入れている
        return 0;
    }

- アドレスを使って格納されている値にアクセスする
    - &: アドレス演算子(aのアドレスを引っ張ってくる)
    - *: 間接演算子(指し示している値を間接的に取得)

    int main(void) {
        int a; // 必要な領域の確保
        a = 10; // 確保した領域に値を入れている

        int *pa; // 変数名はpa　*はポインタ変数の宣言に必要なだけ
        pa = &a;

        printf("%d\n", *pa);
        // "%d\n"の時点ではアドレスしか取れていない
        return 0;
　　}
- メモリの節約
    - 節約前(16メモリ)
    void f(long a) {
        a += 100;
        printf("%ld\n", a);
    }

    int main(void) {
        long a = 1000;
        f(a);
        return 0;
    }
    - 節約後(12メモリ)
    void f(long *pa) {
        *pa += 100; // paの値を持ってきてる
        printf("%ld\n", *pa);
    }

    int main(void) {
        long a = 1000;
        f(&a);
        return 0;
    }

- 値渡し: 変数をそのまま渡す(メモリ効率が悪いが独立した値を持つ)
- 参照渡し; アドレスを渡す(メモリ効率は良いが、書き換わっている)

*/

void swap(int *pa, int *pb) {
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;

}

int main(void) {
    int a = 5;
    int b = 10;
    swap(&a, &b);
    printf("a: %d, b: %d\n", a, b);
    return 0;
}

/* gcc -o hello hello.c
C言語はコンパイラー言語なのでソースファイル(hello.c)を
一度実行ファイル(hello)に変換して
出力してくださいという意味の-o(output)オプションをつけて実行する
*/

/*
C言語は一番最初にmain関数を見て実行する
なのでmain関数がないと何も実行してくれない
*/