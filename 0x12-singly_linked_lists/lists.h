#ifndef LISTS_H
#define LISTS_H

/* Definition of list_t */
typedef struct list_s {
    /* Your structure members go here */
    int data;
    struct list_s *next;
} list_t;

/* Function prototypes go here */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif /* LISTS_H */
