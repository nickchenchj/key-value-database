#ifndef BLOOMFILTER_H
#define BLOOMFILTER_H
#include <stdint.h>
#include <stdlib.h>

/* Used for loading/saving the bloom filter */
extern const char *bf_filename;

/* Initializes the bloom filter with a given size of bit array. */
void init_bloom_filter(size_t size);

/* Loads the bloom filter from file_path. */
void load_bloom_filter(const char *file_path);

/* Saves the current bloom filter into file_path. */
void save_bloom_filter(const char *file_path);

/* Frees the memory allocated for the bloom filter. */
void free_bloom_filter();

/* Sets k entries in the bloom filter to 1.
 * k: the number of hash functions */
void set_bloom_filter(const uint64_t key);

/* Checks if a given key is in the database by looking up the bloom filter. */
int_fast8_t lookup_bloom_filter(const uint64_t key);

#endif