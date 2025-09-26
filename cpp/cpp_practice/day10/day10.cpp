using namespace std;

int main(void) {

	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);

    int *p = vector;

    int min = *p;

    p++;

    for (int i = 1; i < n; i++) {

        if (*p < min) {
            min = *p ;


        }
            p++;
        
    }
cout << min;


	return 0;
}