#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TABLE_SIZE 10

struct Node{
int key;
int value;
struct Node *next;
};

struct Node* hashtable[TABLE_SIZE];

int hashFunction(int key){
return key % TABLE_SIZE;
}
void insert(int key, int value)
{
  int hashIndex = hashFunction(key);
  struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->key = key;
  newNode->value = value;
  newNode->next = NULL;
  if(hashtable[hashIndex] == NULL)
  {
    hashtable[hashIndex] = newNode;
  }
  else{
    newNode->next = hashtable[hashIndex];
    hashtable[hashIndex] = newNode;

  }}


int search(int key)
  {
    int hashIndex = hashFunction(key);
    struct Node *currentNode = hashtable[hashIndex];

    while(currentNode != NULL)
      {
        if(currentNode->key == key)
        {
          return currentNode->value;
        }
        currentNode = currentNode->next;

      }
    return -1;
  }
void display()
{
  for(int i =0; i<TABLE_SIZE; i++){
    struct Node *currentNode = hashtable[i];
    printf("Index %d: ", i);
    while(currentNode != NULL){
      printf("(%d, %d) -> ", currentNode->key, currentNode->value);
      currentNode = currentNode->next;
    }
    printf("NULL\n");

  }}

int main()
  {
    for(int i = 0; i<TABLE_SIZE; i++)
      {
        hashtable[i] = NULL;
      }
    insert(1, 10);
    insert(2, 20);
    insert(3, 30);
    insert(4, 40);
    insert(5, 50);
    insert(6, 60);
    display();
    int value = search(3);
    if(value != -1)
    {
      printf("Value found: %d\n", value);
    } else{
      printf("Value not found\n");
    }
    return 0;
  }
