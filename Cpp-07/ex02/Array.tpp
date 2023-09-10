template <typename T>
MyArray<T>::MyArray() : _elements(nullptr), _size(0) {}

template <typename T>
MyArray<T>::MyArray(unsigned int n) : _size(n) {
    _elements = new T[n]();
}

template <typename T>
MyArray<T>::MyArray(const MyArray& src) : _elements(nullptr), _size(src._size) {
    _elements = new T[_size];
    for (unsigned int i = 0; i < _size; ++i) {
        _elements[i] = src._elements[i];
    }
}

template <typename T>
MyArray<T>& MyArray<T>::operator=(const MyArray& rhs) {
    if (this != &rhs) {
        delete[] _elements;

        _size = rhs._size;
        _elements = new T[_size];
        for (unsigned int i = 0; i < _size; ++i) {
            _elements[i] = rhs._elements[i];
        }
    }
    return *this;
}

template <typename T>
MyArray<T>::~MyArray() {
    delete[] _elements;
}

template <typename T>
T& MyArray<T>::operator[](unsigned int index) {
    if (index >= _size || index < 0) {
        throw std::out_of_range("Index out of bounds!");
    }
    return _elements[index];
}

template <typename T>
unsigned int MyArray<T>::size() const {
    return _size;
}
