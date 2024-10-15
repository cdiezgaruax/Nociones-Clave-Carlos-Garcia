#include "matematicas.h"

namespace matematicas {
    int multiplicacion(int a, int b) {
        return a * b;
    }

    int division(int a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            // Handle division by zero if necessary
            return 0;
        }
    }
}  // Closing brace for namespace matematicas