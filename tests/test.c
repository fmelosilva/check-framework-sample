#include <check.h>

#include "../src/array.h"

START_TEST (empty_array_length_check)
{
    array_t array = array_initialize();
    fail_unless(array_length(array) == 0, "test empty array length");
}
END_TEST

START_TEST (size_after_push_check)
{
    array_t array = array_initialize();
    int error = push(&array, 1);
    fail_unless(error == 0, "push should not return error");
    fail_unless(array_length(array) == 1, "array must have one element");
}
END_TEST

START_TEST (pop_empty_array_check)
{
    array_t array = array_initialize();
    push(&array, 1);
    pop(&array);
    int error = pop(&array);
    fail_unless(error == -1, "pop an empty array must return error code");
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, empty_array_length_check);
    tcase_add_test(tc1_1, size_after_push_check);
    tcase_add_test(tc1_1, pop_empty_array_check);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}