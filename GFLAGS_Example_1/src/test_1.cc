#include "include/test_1.h"

DEFINE_bool(sample_bool, true, "Sample bool initial value");

DEFINE_double(sample_double, 10.01, "Sample double initial value");

DEFINE_string(sample_string, "This is the sample string", "Sample string initial value");

DEFINE_int32(sample_int, 99, "Sample int initial value");

// test_1
// ./test_1 --nosample_bool
// ./test_1 --sample_double=600.00
// ./test_1 --sample_string="THIS IS STRING"


