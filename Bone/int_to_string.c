char stiansArray[] = {'0', '1',  '2', '3', '4', '5', '6', '7', '8', '9'};

char digit_to_char(int input){
    return stiansArray[input];
}

int get_result_size(int input){
    int count = 1;

    while(input >= 10){
        count++;
        input /= 10;
    }

    return count;
}

void int_to_string(int input, char* result_array, int size){
    int count = 0;

    while(input >= 10){
        result_array[size - count - 1] = digit_to_char(input % 10);
        input /= 10;
    }

    result_array[0] = digit_to_char(input);
}
