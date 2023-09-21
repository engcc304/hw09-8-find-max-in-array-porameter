/*
    ผู้ใช้กรอกค่าจำนวนที่ต้องการสร้างอาเรย์ พร้อมกับกรอกค่าภายในอาเรย์จนครบ จากนั้นให้คุณแสดงค่าที่มาก "เป็นอันดับสาม" ของภายในอาเรย์
    
    Test case:
        Enter new element of Array :
            5
        Input :
            5
        Input :
            3
        Input :
            2
        Input :
            1
        Input :
            9           
    Output:
        Array: 5 3 2 1 9
        The large 3rd element = 3

    Test case:
        Enter new element of Array :
            8
        Input :
            6
        Input :
            7
        Input :
            11
        Input :
            13
        Input :
            15
        Input :
            49
        Input :
            27
        Input :        
            18
    Output:
        Array: 6 7 11 13 15 49 27 18
        The large 3rd element = 18
*/

#include <stdio.h>

int main() {
    int N ;

    // รับจำนวนที่ต้องการสร้างอาเรย์
    printf( "Enter the number of elements in the array: " ) ;
    scanf( "%d" , &N ) ;

    // สร้างอาเรย์และรับค่าภายในอาเรย์
    int arr[N];

    printf( "Enter %d elements for the array:\n", N ) ;
    for ( int i = 0; i < N; i++ ) {
        scanf( "%d", &arr[i] ) ;
    }

    // ตรวจสอบว่า N มีค่าน้อยกว่า 3 หรือไม่
    if (N < 3) {
        printf( "The array must have at least 3 elements.\n" ) ;
        return 1 ; // ออกจากโปรแกรมด้วยสถานะผิดพลาด
    }

    // เรียงลำดับอาเรย์ใหม่จากมากไปน้อย
    for ( int i = 0; i < N - 1; i++ ) {
        for ( int j = 0 ; j < N - i - 1 ; j++ ) {
            if ( arr[j] < arr[j + 1] ) {
                int temp = arr[j] ;
                arr[j] = arr[j + 1] ;
                arr[j + 1] = temp ;
            }
        }
    }

    // แสดงค่าที่มาก "เป็นอันดับสาม" ของภายในอาเรย์
    printf( "The third largest element in the array is: %d\n" , arr[2] ) ;

    return 0 ;
}
