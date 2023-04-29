//Nama:Rini Puspita Wati
//NPM:2257051019
//Kelas:A

// Soal 1
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//char* balik(char* str) {
//    int len = strlen(str);
//    char* revStr = new char[len+1];
//    for (int i = 0; i < len; i++) {
//        revStr[i] = str[len-i-1];
//    }
//    revStr[len] = '\0';
//    return revStr;
//}
//
//int main() {
//    char str[] = "Pemrograman Terstruktur";
//    cout << balik(str) << endl;
//    return 0;
//}

//Soal 2

//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//char* balikKalimat(char* kalimat) {
//    char* token = strtok(kalimat, " ");
//    while (token != NULL) {
//        int len = strlen(token);
//        for (int i = 0; i < len/2; i++) {
//            char temp = token[i];
//            token[i] = token[len-i-1];
//            token[len-i-1] = temp;
//        }
//        token = strtok(NULL, " ");
//    }
//
//    int len = strlen(kalimat);
//    for (int i = 0; i < len/2; i++) {
//        char temp = kalimat[i];
//        kalimat[i] = kalimat[len-i-1];
//        kalimat[len-i-1] = temp;
//    }
//
//    return kalimat;
//}
//
//int main() {
//    char kalimat[] = "coba dibalik";
//
//    cout << balikKalimat(kalimat) << endl;
//
//    return 0;
//}

//Soal 3

//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//char* balikKalimat(char* kalimat) {
//    char* token = strtok(kalimat, " ");
//    while (token != NULL) {
//        int len = strlen(token);
//        for (int i = 0; i < len/2; i++) {
//            char temp = token[i];
//            token[i] = token[len-i-1];
//            token[len-i-1] = temp;
//        }
//        token = strtok(NULL, " ");
//    }
//
//    int len = strlen(kalimat);
//    for (int i = 0; i < len/2; i++) {
//        char temp = kalimat[i];
//        kalimat[i] = kalimat[len-i-1];
//        kalimat[len-i-1] = temp;
//    }
//
//    return kalimat;
//}
//
//void swap(int arr[], int a, int b) {
//    int temp = arr[a];
//    arr[a] = arr[b];
//    arr[b] = temp;
//}
//
//void print(int arr[], int n) {
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    int arr[] = {1, 2, 3, 4};
//    int n = 4;
//
//   
//    print(arr, n);
//    swap(arr, 2, 3);
//    print(arr, n);
//
//   
//    return 0;
//}

//Soal 4

//#include <iostream>
//#include <cstring>
//using namespace std;
//
//const int MAX_LEN = 20;
//
//void printLength(char str[]) {
//    int len = strlen(str);
//    cout << str << " " << len << endl;
//}
//
//int main() {
//    int n;
//    cin >> n;
//
//    char arr[n][MAX_LEN+1];
//
//    for(int i=0; i<n; i++) {
//        cin >> arr[i];
//    }
//
//    for(int i=0; i<n; i++) {
//        printLength(arr[i]);
//    }
//
//    return 0;
//}

//Soal 5

//#include <iostream>
//
//void sum(int *arr, int size) {
//    int total = 0;
//    for (int i = 0; i < size; i++) {
//        total += *(arr + i);
//    }
//    std::cout << total << std::endl;
//}
//
//int main() {
//    int x[] = {1, 2, 3};
//    sum(x, 3);
//    return 0;
//}

//Soal 6

//#include <iostream>
//using namespace std;
//
//const int MAX_ROWS = 9;
//const int MAX_COLS = 9;
//
//int main() {
//    int m, n;
//    int mat[MAX_ROWS][MAX_COLS];
//
//    cin >> m >> n;
//    for(int i=0; i<m; i++) {
//        for(int j=0; j<n; j++) {
//            cin >> mat[i][j];
//        }
//    }
//
//    for(int i=0; i<n; i++) {
//        for(int j=0; j<m; j++) {
//            cout << mat[j][i] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}


