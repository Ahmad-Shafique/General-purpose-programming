const int size = 20 ;

int Binary_search(int a_list[],int item) ///a_list is the array of linked list
{
    if(size == 0)
        return false;
    else
        midpoint = size ;
    if(a_list[midpoint] == item)
        return true;
    else
    {
        if(item < a_list[midpoint])
            return (binary_search(a_list[midpoint], item))
        else
            return (binary_search(a_list[midpoint+1], item))
    }
    return found;
}

void print(bool found)
{
    if(found == true)
        cout << "Found\n" ;
    else
        cout << "Not Found\n" ;
}

int main()
{
    int test_list[size] = {1,2,8,13,17,19,32,42};
    print (binary_search(test_list[],3));
    print (binary_search(test_list[],13));
}
