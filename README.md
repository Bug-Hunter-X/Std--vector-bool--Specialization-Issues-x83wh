# std::vector<bool> Gotchas in C++
This repository demonstrates a common, yet subtle, problem encountered when using `std::vector<bool>` in C++.  The standard library often provides a specialized implementation that deviates from the behavior of `std::vector` for other types. This specialization can lead to unexpected results if not handled correctly.

**Problem:** `std::vector<bool>` doesn't store individual booleans. It uses bit manipulation for memory optimization, affecting the way elements are accessed and iterated over. This can break algorithms or code relying on standard `std::vector` behavior.

**Solution:** Consider using `std::vector<char>` (or `std::vector<uint8_t>`) if direct access to individual boolean values is needed, or using `std::bitset` for a bit-based approach with better performance in many circumstances.