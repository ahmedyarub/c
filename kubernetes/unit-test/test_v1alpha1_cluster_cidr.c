#ifndef v1alpha1_cluster_cidr_TEST
#define v1alpha1_cluster_cidr_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v1alpha1_cluster_cidr_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v1alpha1_cluster_cidr.h"
v1alpha1_cluster_cidr_t* instantiate_v1alpha1_cluster_cidr(int include_optional);

#include "test_v1_object_meta.c"
#include "test_v1alpha1_cluster_cidr_spec.c"


v1alpha1_cluster_cidr_t* instantiate_v1alpha1_cluster_cidr(int include_optional) {
  v1alpha1_cluster_cidr_t* v1alpha1_cluster_cidr = NULL;
  if (include_optional) {
    v1alpha1_cluster_cidr = v1alpha1_cluster_cidr_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_v1alpha1_cluster_cidr_spec(0)
    );
  } else {
    v1alpha1_cluster_cidr = v1alpha1_cluster_cidr_create(
      "0",
      "0",
      NULL,
      NULL
    );
  }

  return v1alpha1_cluster_cidr;
}


#ifdef v1alpha1_cluster_cidr_MAIN

void test_v1alpha1_cluster_cidr(int include_optional) {
    v1alpha1_cluster_cidr_t* v1alpha1_cluster_cidr_1 = instantiate_v1alpha1_cluster_cidr(include_optional);

	cJSON* jsonv1alpha1_cluster_cidr_1 = v1alpha1_cluster_cidr_convertToJSON(v1alpha1_cluster_cidr_1);
	printf("v1alpha1_cluster_cidr :\n%s\n", cJSON_Print(jsonv1alpha1_cluster_cidr_1));
	v1alpha1_cluster_cidr_t* v1alpha1_cluster_cidr_2 = v1alpha1_cluster_cidr_parseFromJSON(jsonv1alpha1_cluster_cidr_1);
	cJSON* jsonv1alpha1_cluster_cidr_2 = v1alpha1_cluster_cidr_convertToJSON(v1alpha1_cluster_cidr_2);
	printf("repeating v1alpha1_cluster_cidr:\n%s\n", cJSON_Print(jsonv1alpha1_cluster_cidr_2));
}

int main() {
  test_v1alpha1_cluster_cidr(1);
  test_v1alpha1_cluster_cidr(0);

  printf("Hello world \n");
  return 0;
}

#endif // v1alpha1_cluster_cidr_MAIN
#endif // v1alpha1_cluster_cidr_TEST
