# dans-core

Tiny C++ foundation headers used by my personal projects.

```cmake
add_subdirectory(path/to/dans-core)
target_link_libraries(my_target PRIVATE dans::core)
```

Public headers live in `include/dans`:

- `dans/types.hpp`
- `dans/development_markers.hpp`
- `dans/pch.hpp`
