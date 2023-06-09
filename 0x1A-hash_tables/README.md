## Hash Table
- A hash table, also known as a hash map, is a data structure that allows efficient storage and retrieval of key-value pairs. It provides fast average-case performance for insertions, deletions, and lookups, making it widely used in various applications.

- Here's a high-level overview of how hash tables work:

* Structure: A hash table is typically implemented as an array of "buckets" or "slots." Each bucket can store one key-value pair or, in some cases, a linked list or other data structure to handle collisions.

* Hash function: A hash function is used to convert the key into an index within the array. The hash function takes the key as input and computes a hash code, which is an integer value. The hash code is then mapped to an index in the array.

* Indexing: The hash code is transformed into a valid index within the range of the array. This is often achieved by taking the modulus of the hash code with the size of the array. The resulting index determines where the key-value pair will be stored or retrieved.

* Insertion: To insert a key-value pair into a hash table, the hash function is applied to the key to calculate the index. If the index is unoccupied (i.e., no existing key-value pair), the new key-value pair is stored in that slot. If the index is occupied, collision handling mechanisms come into play.

* Collision handling: Collisions occur when different keys produce the same index or hash code. Collision handling strategies vary, but two common approaches are chaining and open addressing. In chaining, each bucket stores a linked list or other data structure to handle multiple elements that hash to the same index. In open addressing, if a collision occurs, the algorithm probes for the next available slot in the array to store the key-value pair.

* Lookup and deletion: To retrieve a value from the hash table, the hash function is applied to the key to calculate the index. The value is then retrieved from the corresponding slot. In the case of deletion, the key-value pair can be marked as deleted or removed from the slot, depending on the collision handling strategy.

- When using a hash table, you typically follow these steps:

* Initialize a hash table: Create an empty hash table with an array of appropriate size.

* Choose a hash function: Select or design a hash function that meets the requirements of your specific use case.

* Insertion: Use the hash function to calculate the index for each key-value pair and store them in the hash table.

* Lookup: To retrieve a value, provide the key and use the hash function to calculate the index. Retrieve the corresponding value from the identified slot.

* Deletion: Specify the key to be deleted, calculate the index using the hash function, and remove the key-value pair from the hash table.
