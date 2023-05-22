#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 * Description: a dog structure
*/
struct dog
{
   char *name;
   float age;
   char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct dog
 */
typedef  struct dog dog_t;

#endif /* DOG_H */
