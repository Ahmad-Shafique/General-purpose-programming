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

/// 22
void printPyramid22Elements(int val, int maxVal){
    if(val < maxVal) printPyramid22Elements(val+1, maxVal);
    printf("%d ", maxVal);
}
void pyramid22(int turn, int maxValue){

    printSpaces(maxValue-turn);
    printPyramid22Elements(1, turn);
    printf("\n");

    if(turn < maxValue)pyramid22(turn+1, maxValue);
}

/// 23
void printPyramid23Elements(int val, int maxVal){
    if(val < maxVal) printPyramid23Elements(val+1, maxVal);
    printf("%d ", maxVal%2);
}
void pyramid23(int turn, int maxValue){

    printSpaces(maxValue-turn);
    printPyramid23Elements(1, turn);
    printf("\n");

    if(turn < maxValue)pyramid23(turn+1, maxValue);
}

/// 24
void printPyramid24Elements(int val, int maxVal){
    printf("%d ", val%2);
    if(val < maxVal) printPyramid24Elements(val+1, maxVal);

}
void pyramid24(int turn, int maxValue){

    printSpaces(maxValue-turn);
    printPyramid24Elements(1, turn);
    printf("\n");

    if(turn < maxValue)pyramid24(turn+1, maxValue);
}

/// 25
void printSingleSpaces(int val){
    // cout<<"entered printSpaces with "<<val;
    if(val >= 1){
        printSpaces(val-1);
        printf(" ");
    }
}
void printPyramid25Elements(int printRange, int valueToPrint){
    if(printRange >= 1){
        printPyramid25Elements(printRange-1, valueToPrint);
        if(printRange%2){
            printf("%d ", valueToPrint);
        }
        else printf("  ");
    }
}
void pyramid25(int turn, int maxValue){

    printSingleSpaces(maxValue-turn+1);
    printPyramid25Elements((2*turn)-1, turn);
    printf("\n");

    if(turn < maxValue)pyramid25(turn+1, maxValue);
}

/// 26
void printPyramid26Elements(int printRange, int valueToPrint){
    if(printRange >= 1){
        printPyramid26Elements(printRange-1, valueToPrint);
        if(printRange%2){
            printf("%c ", valueToPrint+64);
        }
        else printf("  ");
    }
}
void pyramid26(int turn, int maxValue){

    printSingleSpaces(maxValue-turn+1);
    printPyramid26Elements((2*turn)-1, turn);
    printf("\n");

    if(turn < maxValue)pyramid26(turn+1, maxValue);
}

/// 27
void printPyramid27Elements(int printRange, int valueToPrint){
    if(printRange >= 1){
        printPyramid27Elements(printRange-1, valueToPrint);
        if(printRange%2){
            printf("%c ", valueToPrint+64);
        }
        else printf("  ");
    }
}
void pyramid27(int turn, int maxValue){

    printSingleSpaces(maxValue-turn+1);
    printPyramid27Elements((2*turn)-1, turn);
    printf("\n");

    if(turn < maxValue)pyramid27(turn+1, maxValue);

    printSingleSpaces(maxValue-turn+2);
    printPyramid27Elements((2*turn-1)-1, turn-1);
    printf("\n");
}

/// 28
void printPyramid28Elements(int printRange, int valueToPrint){
    if(printRange >= 1){
        printPyramid28Elements(printRange-1, valueToPrint);
        if(printRange%2){
            printf("%d ", valueToPrint);
        }
        else printf("  ");
    }
}
void pyramid28(int turn, int maxValue){

    printSingleSpaces(maxValue-turn+1);
    printPyramid28Elements((2*turn)-1, turn);
    printf("\n");

    if(turn < maxValue)pyramid28(turn+1, maxValue);

    printSingleSpaces(maxValue-turn+2);
    printPyramid28Elements((2*turn-1)-1, turn-1);
    printf("\n");
}

/// 29
void printPyramid29Elements(int printRange, int valueToPrint){
    if(printRange >= 1){
        printPyramid29Elements(printRange-1, valueToPrint);
        if(printRange%2){
            printf("%d ", valueToPrint);
        }
        else printf("  ");
    }
}
void pyramid29(int turn, int maxValue){

    printPyramid29Elements((2*turn)-1, turn);
    printf("\n");

    if(turn < maxValue)pyramid29(turn+1, maxValue);

    printPyramid29Elements((2*turn-1)-1, turn-1);
    printf("\n");
}

/// 30
void printPyramid30Elements(int printRange, int valueToPrint){

    if(printRange >= 1){
        printPyramid30Elements(printRange-1, valueToPrint);
        printf("%d ", valueToPrint);
    }
}
void pyramid30(int turn, int maxValue){

    printSingleSpaces(maxValue-turn+1);
    printPyramid30Elements(turn, turn);
    printf("\n");

    if(turn < maxValue)pyramid30(turn+1, maxValue);

    printSingleSpaces(maxValue-turn+2);
    printPyramid30Elements(turn-1, turn-1);
    printf("\n");
}

/// 31
void printPyramid31Elements(int printVal, int maxVal){
    if(printVal <= maxVal){
        if(printVal >= 1  && printVal != maxVal)printf("%d ", printVal);
        printPyramid31Elements(printVal+1, maxVal);
        printf("%d ", printVal);
    }
}
void pyramid31(int turn, int maxValue){

    printSingleSpaces(maxValue-turn+1);
    printPyramid31Elements(1, turn);
    printf("\n");

    if(turn < maxValue)pyramid31(turn+1, maxValue);

    printSingleSpaces(maxValue-turn+2);
    printPyramid31Elements(1, turn-1);
    printf("\n");
}

/// 32
/// Call 31

/// 33
void print4Spaces(int repetation){
    if(repetation > 1) print4Spaces(repetation-1);
    printf("    ");
}
int printPyramid33Elements(int startVal, int maxVal){
    printf("%4d", startVal);
    if(startVal < maxVal)printPyramid33Elements(startVal+1, maxVal);
    if(startVal != maxVal)printf("%4d", startVal);
}
int pyramid33( int atVal, int maxVal){
    print4Spaces(maxVal-atVal+1);
    printPyramid33Elements(atVal, atVal*2-1);
    printf("\n");

    if(atVal < maxVal) pyramid33(atVal+1, maxVal);

    if(atVal != maxVal){
        print4Spaces(maxVal-atVal+1);
        printPyramid33Elements(atVal, atVal*2-1);
        printf("\n");
    }
}

/// 34
int printPyramid34Elements(int startVal, int maxVal){
    printf("%4d", startVal%10);
    if(startVal < maxVal)printPyramid34Elements(startVal+1, maxVal);
    if(startVal != maxVal)printf("%4d", startVal%10);
}
int pyramid34( int atVal, int maxVal){
    print4Spaces(maxVal-atVal+1);
    printPyramid34Elements(atVal, atVal*2-1);
    printf("\n");

    if(atVal < maxVal) pyramid34(atVal+1, maxVal);

    if(atVal != maxVal){
        print4Spaces(maxVal-atVal+1);
        printPyramid34Elements(atVal, atVal*2-1);
        printf("\n");
    }
}

/// 35
int printPyramid35Elements(int startVal, int maxVal){
    if(maxVal>1) startVal = printPyramid35Elements(startVal, maxVal-1);
    printf("%3d", startVal);
    return startVal+1;
}
int pyramid35( int atVal, int maxVal){
    if(maxVal > 1) atVal = pyramid35(atVal,maxVal-1);
    int returnable = printPyramid35Elements(atVal,maxVal);
    printf("\n");
    return (returnable);
}

/// 36 & 37 are implementable, but is a waste of time. The time spent finding correlation between
/// the numbers is better spent solving problems;








int main(){
    pyramid35(1,5);
    return 0;
}
