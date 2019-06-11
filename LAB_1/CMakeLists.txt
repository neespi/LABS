cmake_minimum_required (VERSION 3.14.0)

project ("LAB_1")

add_executable (LAB_1_1 "task_1.c")
add_executable (LAB_1_2 "task_2.c")
add_executable (LAB_1_3 "task_3.c")
add_executable (LAB_1_4 "task_4.c")
add_executable (LAB_1_5 "task_5_m.c" "task_5_f.c")
add_executable (LAB_1_6 "task_6_m.c" "task_6_f.c")
add_executable (LAB_1_7 "task_7_m.c" "task_7_f.c")

add_executable (LAB_1_8 "task_7_m.c")
add_library (LAB_1_8_lib STATIC "task_7_f.c")
target_link_libraries ( LAB_1_8 LAB_1_8_lib)