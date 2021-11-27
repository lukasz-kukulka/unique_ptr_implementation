// Jest klasą szablonową
// Trzyma wskaźnik do zarządzanego obiektu
// Konstruktor kopiuje wskaźnik
// Destruktor zwalnia pamięć
// Kopiowanie jest niedozwolone
// Przenoszenie jest dozwolone i oznacza:
//     Skopiowanie wskaźnika z obiektu źródłowego
//     Ustawienie wskaźnika w obiekcie źródłowym na nullptr
// Wymagane metody: operator*(), operator->(), get(), release(), reset()

template<typename T>
class UniquePtr {
public:
    UniquePtr(T* ptr) {
        ptr_ = new T*;
        ptr_ = ptr;
    }

    UniquePtr(const UniquePtr& copy) = delete;

    UniquePtr(const UniquePtr&& move) {
        ptr_ = move.ptr_;
        move.ptr_ = nullptr;
    }

    ~UniquePtr() {
        delete ptr_;
    }
    
    UniquePtr& operator=(const UniquePtr& copy) = delete;
    UniquePtr& operator=(const UniquePtr&& move) {
        ptr_ = std::move(move.ptr_);
        return *ptr_;
    }

    T* operator*() {
        return *ptr_;
    }

    T& operator->() {
        return ptr_;
    }


private:
    T* ptr_ { nullptr };
};