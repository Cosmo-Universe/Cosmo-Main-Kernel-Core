/**
 * Return codes for the kernel
 * 2023 - 2024 are reserved for the kernel.
 * Cosmo Universe reserves 2025 - 2048 for the kernel. All rights reserved.
 * Code written by CEO Duy Nam Schlitz.
 * This code by using without permission is illegal. This software is protected by the GNU General Public License v3.0.
 * This code is protected by the Govement and Registration System of the Cosmo Universe Laborotory Internationally Society (Association) (CULIS) (c) 2023.
 * This software is a part of the Cosmo Universe Operating System (CUOS) (c) 2023 and sorce code of the kernel.
 */
#include <cstddef>   // For std::size_t
#include <stdexcept> // For std::runtime_error
#include <cstring>   // For std::memcpy

class ArenaAllocator
{
public:
  explicit ArenaAllocator(std::size_t size) : arenaSize(size), arena(new char[size]), currentPosition(0) {}

  ~ArenaAllocator()
  {
    delete[] arena;
  }

  void *allocate(std::size_t size)
  {
    if (currentPosition + size > arenaSize)
    {
      resizeArena(currentPosition + size);
    }

    void *ptr = arena + currentPosition;
    currentPosition += size;
    return ptr;
  }

  void deallocate(void *ptr)
  {
    // Deallocation is a no-op in an arena allocator
    // Memory is freed when the entire arena is deallocated
  }

  std::size_t getRemainingMemory() const
  {
    return arenaSize - currentPosition;
  }

private:
  std::size_t arenaSize;
  char *arena;
  std::size_t currentPosition;

  void resizeArena(std::size_t newSize)
  {
    char *newArena = new char[newSize];
    std::memcpy(newArena, arena, currentPosition);
    delete[] arena;
    arena = newArena;
    arenaSize = newSize;
  }
};