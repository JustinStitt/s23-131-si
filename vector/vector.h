#include <stdexcept>

#ifndef _VECTOR_H
#define _VECTOR_H

namespace adt {
  template <typename T>
  class Vector {
  private:
    T* _data; // points to the start of our data block
    unsigned int _capacity; // how big our data block is
    unsigned int _size; // how many slots we are using in our block

  public:

    /* Default Constructor */
    Vector() : _capacity(2), _size(0) {
      _data = this->getNewBlockOfMemory(_capacity);
    }

    /* Destructor */
    ~Vector() {
      /* delete block of data */
      delete [] _data;
      _data = nullptr; // probably superfluous, but do it anyways
    }


    T* getNewBlockOfMemory(unsigned int amount) {
      /* return a pointer to a block of memory of size `amount` */
      T* block = new T[amount];
      return block;
    }

    T* moveFromOneBlockToAnother(T* from, T* to, unsigned int old_capacity, unsigned int new_capacity) {
      /* Move data from `from` to `to` and return `to` (the new block) */
      if (!from || !to) {
        throw std::invalid_argument("Block cannot be nullptr!");
      }

      if (old_capacity > new_capacity) {
        throw std::invalid_argument("old_capacity cannot be larger than new_capacity!");
      }

      for (int x{}; x < old_capacity; ++x) {
        to[x] = from[x];
      }

      /* now, delete `from` block */
      delete [] from;
      from = nullptr;

      return to;
    }

    void push_back(T item) {
      /* check if we are out of capacity */
      if (this->_size >= this->_capacity) {
        unsigned int other_capacity = this->_capacity * 2;
        T* other = this->getNewBlockOfMemory(other_capacity);
        this->_data = this->moveFromOneBlockToAnother(this->_data, other, this->_capacity, other_capacity);
        this->_capacity = other_capacity;
      }

      this->_data[this->_size] = item;
      this->_size += 1; // increase size to accompany new element
    }

    T& operator[](unsigned int idx) {
      return this->_data[idx];
    }

    unsigned int capacity() const {
      return this->_capacity;
    }

    unsigned int size() const {
      return this->_size;
    }

  };
}

#endif // !_VECTOR_H
