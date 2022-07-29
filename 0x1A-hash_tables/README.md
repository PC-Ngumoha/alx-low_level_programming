# List Of All The Files In The Project

### 0-hash_table_create.c
Contains the function `hash_table_create` which takes in the integer argument `size` and then creates a hash table with that many hash nodes. And when it's done, it returns the address of the new hash table or `NULL` if unable to create such a hash table.

### 1-djb2.c
Contains the function `hash_djb2` which takes a string argument and uses the `djb2` hashing algorithm in order to derive a hash index from the string `str` argument passed into the function. It returns the hash index generated.

### 2-key_index.c
Contains the function `key_index` which takes the `key` and then uses the `hash_djb2` function to generate a hash value from which it generates the index on the hash table where the current item item can be stored or retrieved. The `index` is returned at the end of the function.

###  
