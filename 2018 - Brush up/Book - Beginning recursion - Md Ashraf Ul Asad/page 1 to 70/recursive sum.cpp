#include <iostream>
#include <string.h>

using namespace std;

/// 1
int recursiveOneToN(int n){
    if(n <= 1) return n;
    return n + recursiveOneToN(n-1);
}

/// 2 & 3
int recursiveEvenNumberSumUpToN(int current, int n){

    if(current > n) return 0;
    else if (current == n)  return current;
    return current + recursiveEvenNumberSumUpToN(current+2, n);
}

/// 4
int recursiveSumWhileIncreasingDifferenceMultiplierByFromInitial4UptoN(int differenceMultiplier, int n){
    if(4*differenceMultiplier > n ) return 0;
    else if(4*differenceMultiplier  == n) return 4*differenceMultiplier;
    return 4*differenceMultiplier + recursiveSumWhileIncreasingDifferenceMultiplierByFromInitial4UptoN(differenceMultiplier+1, n);
}

/// 5
int recursiveSumWhileIncreasingDifferenceMultiplierByFromInitial3UptoN(int differenceMultiplier, int n){
    if(3*differenceMultiplier > n ) return 0;
    else if(3*differenceMultiplier  == n) return 4*differenceMultiplier;
    return 3*differenceMultiplier + recursiveSumWhileIncreasingDifferenceMultiplierByFromInitial3UptoN(differenceMultiplier+1, n);
}

/// 6
int customSumIIntoIPlus1UptoN(int i, int n){
    if(i > n) return 0;
    else if (i == n) return i*(i+1);
    else return i*(i+1) + customSumIIntoIPlus1UptoN(i+1, n);
}

/// 7
int customSumCommonIncrementTwoTermsMultiplied(int init, int finale){
    if(init > finale) return 0;
    else if(init == finale) return (3*init - 1)*(2*init - 1);
    else return (3*init - 1)*(2*init - 1) + customSumCommonIncrementTwoTermsMultiplied(init+1, finale);
}

/// 8
int customSumCommonDifferenceM2TermsMultipliedIncrementSameIAndIPlus1(int init, int n){
    if(init > n) return 0;
    else if(init == n){
      cout<<(2*init -1) <<"*" <<(2*(init+1)-1)<<endl;
      return (2*init -1)*(2*(init+1)-1);
    }
    else{
        cout<<(2*init -1) <<"*" <<(2*(init+1)-1)<<endl;
        return (2*init -1)*(2*(init+1)-1) + customSumCommonDifferenceM2TermsMultipliedIncrementSameIAndIPlus1(init+1, n);
    }
}

/// 9
int customSumOfSquares(int init, int n){
    if(init > n) return 0;
    else if(init == n){
      int currentTerm = init*init;
      cout<<init<<"*" <<init<<endl;
      return currentTerm;
    }
    else{
        int currentTerm = init*init;;
        cout<<init<<"*" <<init<<endl;
        return currentTerm + customSumOfSquares(init+1, n);
    }
}

/// 10
int customSumTwistedMindsetForOrdinaryPeopleNormalForBrilliantPeople(int i, int n){
    int currentTerm = i * (2*i-1);
    if(i > n) return 0;
    else if(i == n){
      cout<<i<<"*" <<2*i-1<<endl;
      return currentTerm;
    }
    else{
        cout<<i<<"*" <<2*i-1<<endl;
        return currentTerm + customSumTwistedMindsetForOrdinaryPeopleNormalForBrilliantPeople(i+1, n);
    }
}

/// 11
int customSumDifferenceAddedSquaredAndMultiplied(int i, int n){
    int currentTerm = ((i+1)*(i+1)) * i;
    if(i > n) return 0;
    else if(i == n){
      cout<<((i+1)*(i+1))<<"*" <<i<<endl;
      return currentTerm;
    }
    else{
        cout<<((i+1)*(i+1))<<"*" <<i<<endl;
        return currentTerm + customSumDifferenceAddedSquaredAndMultiplied(i+1, n);
    }
}

/// 12
int customSumSquareTheInitsAfterMultiplyingBy2(int i, int n){
    int currentTerm = (i*i)*((i+1)*(i+1));
    if(i > n) return 0;
    else if(i == n){
      cout<<(i*i)<<"*" <<((i+1)*(i+1))<<endl;
      return currentTerm;
    }
    else{
        cout<<(i*i)<<"*" <<((i+1)*(i+1))<<endl;
        return currentTerm + customSumSquareTheInitsAfterMultiplyingBy2(i+1, n);
    }
}

/// 13
int customSumIIPlus1IPlus2Multiplied(int i, int n){
    int currentTerm = (i) * (i+1) * (i+2);
    if(i > n) return 0;
    else if(i == n){
      cout<<i<<"*" <<(i+1)<< "*" <<(i+2)<<endl;
      return currentTerm;
    }
    else{
      cout<<i<<"*" <<(i+1)<< "*" <<(i+2)<<endl;
        return currentTerm + customSumIIPlus1IPlus2Multiplied(i+1, n);
    }
}

/// 14
int customSumInvolving4NumbersMultipliedByEachOther(int i, int n){
    if(i > n) return 0;
    else{
        int currentTerm = (2*i-1) * ((2*(i+1))-1) * ((2*(i+2))-1) * ((2*(i+3))-1);
        cout<< (2*i-1)<<"*" <<((2*(i+1))-1)<< "*" <<((2*(i+2))-1)<<"*"<<((2*(i+3))-1)<<endl;
        if(i == n){
          return currentTerm;
        }
        else{
            return currentTerm + customSumInvolving4NumbersMultipliedByEachOther(i+1, n);
        }
    }
}

/// 15
int customSumInvolvingIMultipliedBy3AndAdditionOfConstants(int i, int n){
    if(i > n) return 0;
    else{
        int currentTerm = (3*i-1) * (3*i+2) * (3*i+5);
        cout<<(3*i-1)<<"*" <<(3*i+2)<< "*" <<(3*i+5)<<endl;
        if(i == n){
          return currentTerm;
        }
        else{
            return currentTerm + customSumInvolving4NumbersMultipliedByEachOther(i+1, n);
        }
    }
}

/// 16
int customSumInvolvingIMultipliedBy2AndAddedAndSubtractedBy1With3TermsMultiplication(int i, int n){
    if(i > n) return 0;
    else{
        int currentTerm = (i+4) * (i+5) * (i+6);
        cout<<i+4<<"*" <<i+5<< "*" <<i+6<<endl;
        if(i == n){
          return currentTerm;
        }
        else{
            return currentTerm + customSumInvolvingIMultipliedBy2AndAddedAndSubtractedBy1With3TermsMultiplication(i+1, n);
        }
    }
}



int main(){
    int n;
    cin >> n;
    cout << customSumInvolvingIMultipliedBy2AndAddedAndSubtractedBy1With3TermsMultiplication(1, n);
    return 0;
}
