#include <list>
#include <map>
#include <unordered_map>
#include <vector>
#include <type_traits>

#include "multimap.h"
#include "multiset.h"
#include "queue.h"
#include "stack.h"
#include "unique_ptr.h"
#include "map_foo.h"
#include "vector_foo.h"
#include "list_set_foo.h"
#include "array_foo.h"

template<class T>
void swap(T &a, T &b) {
    static_assert(std::is_copy_constructible<T>::value, "Swap requires copying");
    static_assert(std::is_nothrow_move_constructible<T>::value &&
                  std::is_nothrow_move_assignable<T>::value,
                  "Swap may throw");
    auto c = b;
    b = a;
    a = c;
}

using namespace std;
typedef std::unordered_map<std::string, std::string> stringmap;

enum {
    SMALL_SIZE = 8,
    BIG_SIZE = 80000
};

struct simple {
    simple(int id, const char *name) : id(id), name(name) {}

    int id;
    char const *name;
};

struct S {
    S() {
        Init();
    }

    void Init() {
        for (int i = 0; i < SMALL_SIZE; ++i) {
            for (int j = 0; j < 2; ++j) {
                map<int, simple> m;
                m.insert(make_pair(i + j, simple(i, "May")));
                vmSimple.push_back(m);
            }
        }
    }

    vector<map<int, simple>> vmSimple;
};

int main() {
    vector_foo();
    queue_foo(SMALL_SIZE);
    list_set_foo(SMALL_SIZE);
    multiset_foo();
    map_foo(SMALL_SIZE);
    multimap_foo();
    stack_foo();
    unique_ptr_foo();
    array_foo();

    return 0;
}


