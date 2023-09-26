#!/usr/bin/env bash

CHAPTER=$1
TASKS=$2

make_task_dir() {
  mkdir -p $TASK_PATH
}

make_readme() {
  {
    echo "# Задание ${CHAPTER}.${i}"

    echo '
```shell
gcc main.c -o main
```'
  } > $TASK_PATH/README.md
}

make_main_file() {
  {
    echo "#include <stdio.h>

/**
 * @brief Упражнение по программированию ${CHAPTER}.${i}
 *
 * @details Add task details!
 *
 * @return int
 */
int main(void)
{
    /** @todo write your code here */

    return 0;
}"
  } > $TASK_PATH/main.c
}

main () {
  for (( i = 1; i <= TASKS; i++ )); do
    TASK_PATH=$(printf "./chapter_%02d/tasks_%02d" $CHAPTER $i)

    make_task_dir
    make_readme
    make_main_file
  done
}

main
