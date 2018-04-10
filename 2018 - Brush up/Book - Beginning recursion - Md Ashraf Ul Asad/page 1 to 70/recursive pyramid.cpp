#include <iostream>
#include <cstdio>

using namespace std;

/// 1
void printPyramid1Elements(int i){
    if(i>1) printPyramid1Elements(i-1);
    cout<<i<<" ";
}
void pyramid1(int n){
    if(n>1) pyramid1(n-1);

    //for(int i=0; i<n ; i++) cout<<i+1 << " ";
    printPyramid1Elements(n);
    cout<<endl;
}

/// 2
void printPyramid2Elements(int turn, int total){
    if(turn > total) return;
    else{
        if(turn < total) printPyramid2Elements(turn+1, total);
        cout<<total<<" ";
    }
}
void pyramid2(int n){
    if(n>1) pyramid2(n-1);

    //for(int i=0; i<n ; i++) cout<<i+1 << " ";
    printPyramid2Elements(1,n);
    cout<<endl;
}

/// 3
void printPyramid3Elements(int turn, int total){
    if(turn>0 && turn<=total){
        printf("%d ", total%2);
        printPyramid3Elements(turn+1,total);
    }

}
void pyramid3(int n){
    if(n>1) pyramid3(n-1);
    printPyramid3Elements(1,n);
    cout<<endl;
}

/// 4
void printPyramid4Elements(int total){
    if(total > 1) printPyramid4Elements(total-1);
    printf("%d ", total%2);
}
void pyramid4(int n){
    if(n>1) pyramid4(n-1);
    printPyramid4Elements(n);
    cout<<endl;
}

/// 5
int printPyramid5Elements(int start, int total){
    if(total > 1){
        start = printPyramid5Elements(start, total-1);
    }
    printf("%d ", start);
    return start+1;
}
int pyramid5(int start, int total){
    if(total >1 ){
        start = pyramid5(start, total-1);
    }
    printPyramid5Elements(start, total);
    printf("\n");
    return start+1;
}

/// 6
/// Do pyramid 5 while starting from 1

/// 7
void printPyramid7Elements(bool true0,int maxValue){
    if(maxValue > 1) printPyramid7Elements(!true0, maxValue-1);
    if(true0){
        // cout<<"true0 ";
        printf("1 ");
    }else{
        // cout<<"!true0 ";
        printf("0 ");
    }
}
void pyramid7(int maxValue){
    if(maxValue > 1){
        pyramid7(maxValue-1);
    }
    // cout<<"true0 is: " << maxValue%2;
    printPyramid7Elements(!maxValue%2,maxValue);
    printf("\n");
}

/// 8
void printPyramid8Elements(bool true0,int maxValue){
    if(maxValue > 1) printPyramid8Elements(!true0, maxValue-1);
    if(!true0){
        printf("1 ");
    }else{
        printf("0 ");
    }
}
void pyramid8(int maxValue){
    if(maxValue > 1){
        pyramid8(maxValue-1);
    }
    // cout<<"true0 is: " << maxValue%2;
    printPyramid8Elements(!maxValue%2,maxValue);
    printf("\n");

}

/// 9
void printPyramid9Elements(int turn, int maxVal){
    if(turn > maxVal) return;
    else{
        printf("%c ",maxVal+64);
        printPyramid9Elements(turn+1, maxVal);
    }
}
void pyramid9(int maxValue){
    if(maxValue > 1) pyramid9(maxValue-1);
    printPyramid9Elements(1, maxValue);
    printf("\n");
}

/// 10
void printPyramid10Elements(int turn, int maxVal){
    if(turn > maxVal) return;
    else{
        printf("%c ",turn+64);
        printPyramid10Elements(turn+1, maxVal);
    }
}
void pyramid10(int maxValue){
    if(maxValue > 1) pyramid10(maxValue-1);
    printPyramid10Elements(1, maxValue);
    printf("\n");
}

/// 11
void printPyramid11Elements(int turn, int maxValue){
    if(turn > maxValue) return;
    printf("%d ", turn);
    printPyramid11Elements(turn+1, maxValue);
}
void pyramid11(int maxValue){
    printPyramid11Elements(1, maxValue);
    printf("\n");
    if(maxValue < 1) return;
    pyramid11(maxValue - 1 );
}

/// 12
void printPyramid12Elements(int turn, int maxValue){
    if(turn > maxValue) return;
    printf("%d ", maxValue);
    printPyramid12Elements(turn+1, maxValue);
}
void pyramid12(int maxValue){
    printPyramid12Elements(1, maxValue);
    printf("\n");
    if(maxValue < 1) return;
    pyramid12(maxValue - 1 );
}

/// 13
void printPyramid13Elements(int turn, int maxValue){
    if(turn > maxValue) return;
    printf("%d ", maxValue%2);
    printPyramid13Elements(turn+1, maxValue);
}
void pyramid13(int maxValue){
    printPyramid13Elements(1, maxValue);
    printf("\n");
    if(maxValue < 1) return;
    pyramid13(maxValue - 1 );
}

/// 14
void printPyramid14Elements(int turn, int maxValue){
    if(turn > maxValue) return;
    printf("%d ", turn%2);
    printPyramid14Elements(turn+1, maxValue);
}
void pyramid14(int maxValue){
    printPyramid14Elements(1, maxValue);
    printf("\n");
    if(maxValue < 1) return;
    pyramid14(maxValue - 1 );
}

/// 15
int printPyramid15Elements(int start, int maxValue){
    if(maxValue == 0) return start;
    if(maxValue > 1) start = printPyramid15Elements(start, maxValue - 1 );
    printf("%d ", start);
    return start+1;
}

void pyramid15(int maxValue){
    printPyramid15Elements(6, maxValue);
    printf("\n");
    if(maxValue < 1) return;
    pyramid15(maxValue - 1 );
}

/// 16
int printPyramid16Elements(int start, int maxValue){
    if(maxValue == 0) return start;
    if(maxValue > 1) start = printPyramid16Elements(start, maxValue - 1 );
    printf("%d ", start);
    return start+1;
}

void pyramid16(int maxValue){
    printPyramid16Elements(5, maxValue);
    printf("\n");
    if(maxValue < 1) return;
    pyramid16(maxValue - 1 );
}

/// 17
void printPyramid17Elements(int turn, int maxValue){
    if(turn > maxValue) return;
    printf("%d ", !(turn%2));
    printPyramid17Elements(turn+1, maxValue);
}
void pyramid17(int maxValue){
    printPyramid17Elements(1, maxValue);
    printf("\n");
    if(maxValue < 1) return;
    pyramid17(maxValue - 1 );
}

/// 18
void printPyramid18Elements(int turn, int maxValue){
    if(turn > maxValue) return;
    printf("%d ", turn%2);
    printPyramid18Elements(turn+1, maxValue);
}
void pyramid18(int maxValue){
    printPyramid18Elements(1, maxValue);
    printf("\n");
    if(maxValue < 1) return;
    pyramid18(maxValue - 1 );
}

/// 19
void printPyramid19Elements(int turn, int maxValue){
    if(turn > maxValue) return;
    printf("%c ", maxValue+64);
    printPyramid19Elements(turn+1, maxValue);
}
void pyramid19(int maxValue){
    printPyramid19Elements(1, maxValue);
    printf("\n");
    if(maxValue < 1) return;
    pyramid19(maxValue - 1 );
}

/// 20
void printPyramid20Elements(int turn, int maxValue){
    if(turn > maxValue) return;
    printf("%c ", turn+64);
    printPyramid20Elements(turn+1, maxValue);
}
void pyramid20(int maxValue){
    printPyramid20Elements(1, maxValue);
    printf("\n");
    if(maxValue < 1) return;
    pyramid20(maxValue - 1 );
}

/// 21
void printSpaces(int val){
    // cout<<"entered printSpaces with "<<val;
    if(val >= 1){
        printSpaces(val-1);
        printf("  ");
    }
}
void printPyramid21Elements(int val){
    if(val > 1) printPyramid21Elements(val-1);
    printf("%d ", val);
}
void pyramid21(int turn, int maxValue){

    printSpaces(maxValue-turn);
    printPyramid21Elements(turn);
    printf("\n");

    if(turn < maxValue)pyramid21(turn+1, maxValue);

}



int main(){
    pyramid21(1, 5);
    return 0;
}
