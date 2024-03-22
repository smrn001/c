#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_LENGTH 100
#define FILENAME "todo.txt"

typedef struct {
  char description[MAX_LENGTH];
  int completed;
} Task;

void printMenu() {
  printf("\nTodo List Application\n");
  printf("1. Add Task\n");
  printf("2. View Tasks\n");
  printf("3. Mark Task as Completed\n");
  printf("4. Exit\n");
  printf("Enter your choice: ");
}

void saveTasks(Task tasks[], int numTasks) {
  FILE *file = fopen(FILENAME, "w");
  if (file == NULL) {
    printf("Error opening file for writing!\n");
    return;
  }

  for (int i = 0; i < numTasks; i++) {
    fprintf(file, "%d;%s\n", tasks[i].completed, tasks[i].description);
  }

  fclose(file);
}

void loadTasks(Task tasks[], int *numTasks) {
  FILE *file = fopen(FILENAME, "r");
  if (file == NULL) {
    printf("No existing todo list found.\n");
    return;
  }

  *numTasks = 0;
  while ((*numTasks < MAX_TASKS) &&
         (fscanf(file, "%d;%[^\n]\n", &tasks[*numTasks].completed,
                 tasks[*numTasks].description) == 2)) {
    (*numTasks)++;
  }

  fclose(file);
}

void addTask(Task tasks[], int *numTasks) {
  if (*numTasks >= MAX_TASKS) {
    printf("Todo list is full!\n");
    return;
  }

  printf("Enter task description: ");
  scanf(" %[^\n]s", tasks[*numTasks].description);
  tasks[*numTasks].completed = 0;
  (*numTasks)++;

  saveTasks(tasks, *numTasks);
}

void viewTasks(Task tasks[], int numTasks) {
  if (numTasks == 0) {
    printf("Todo list is empty!\n");
    return;
  }

  printf("\nTasks:\n");
  for (int i = 0; i < numTasks; i++) {
    printf("%d. [%s] %s\n", i + 1, tasks[i].completed ? "X" : " ",
           tasks[i].description);
  }
}

void markTaskCompleted(Task tasks[], int numTasks) {
  int index;
  printf("Enter task number to mark as completed: ");
  scanf("%d", &index);
  if (index < 1 || index > numTasks) {
    printf("Invalid task number!\n");
    return;
  }

  tasks[index - 1].completed = 1;
  printf("Task marked as completed.\n");

  saveTasks(tasks, numTasks);
}

int main() {
  Task tasks[MAX_TASKS];
  int numTasks = 0;
  int choice;

  loadTasks(tasks, &numTasks);

  do {
    printMenu();
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      addTask(tasks, &numTasks);
      break;
    case 2:
      viewTasks(tasks, numTasks);
      break;
    case 3:
      markTaskCompleted(tasks, numTasks);
      break;
    case 4:
      printf("Exiting...\n");
      break;
    default:
      printf("Invalid choice!\n");
    }
  } while (choice != 4);

  return 0;
}
