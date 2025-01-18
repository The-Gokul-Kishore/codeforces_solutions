#include <bits/stdc++.h>
struct PairHash
{
    template <typename T1, typename T2>
    size_t operator()(const std::pair<T1, T2> &p) const
    {
        size_t h1 = std::hash<T1>{}(p.first);  // Hash for the first element
        size_t h2 = std::hash<T2>{}(p.second); // Hash for the second element
        return h1 ^ (h2 << 1);                 // Combine the two hash values using XOR and shift
    }
};
struct PairVectorHash
{
    size_t operator()(const std::pair<int, std::vector<int>> &p) const
    {
        size_t h1 = std::hash<int>{}(p.first); // Hash for the first element (int)

        // Combine hashes for the vector elements
        size_t h2 = 0;
        for (const int &val : p.second)
        {
            h2 ^= std::hash<int>{}(val) + 0x9e3779b9 + (h2 << 6) + (h2 >> 2); // FNV-1a inspired
        }

        return h1 ^ (h2 << 1); // Combine the two hash values
    }
};

int main()
{
    std::unordered_map<std::pair<int, std::string>, int, PairHash> umap;

    umap[{1, "apple"}] = 10;
    umap[{2, "banana"}] = 20;

    // Access elements
    std::cout << "Value for (1, apple): " << umap[{1, "apple"}] << std::endl;
    std::cout << "Value for (2, banana): " << umap[{2, "banana"}] << std::endl;

    return 0;
}
