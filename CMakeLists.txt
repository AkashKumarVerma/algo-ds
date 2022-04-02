cmake_minimum_required(VERSION 3.16.5)

project(DSA)

add_executable(${PROJECT_NAME} ./src/main.c)

# add_subdirectory(./src/modules/linked_list)
# target_link_libraries(${PROJECT_NAME} llist)

# add_subdirectory(./src/modules/vector)
# target_link_libraries(${PROJECT_NAME} vector)