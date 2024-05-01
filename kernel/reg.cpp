/**
 * Return codes for the kernel
 * 2023 - 2024 are reserved for the kernel.
 * Cosmo Universe reserves 2025 - 2048 for the kernel. All rights reserved.
 * Code written by CEO Duy Nam Schlitz.
 * This code by using without permission is illegal. This software is protected by the GNU General Public License v3.0.
 * This code is protected by the Govement and Registration System of the Cosmo Universe Laborotory Internationally Society (Association) (CULIS) (c) 2023.
 * This software is a part of the Cosmo Universe Operating System (CUOS) (c) 2023 and sorce code of the kernel.
 */

#include <variant>
#include <string>
#include <vector>

struct expr
{
  std::variant<int, std::string> value;
};

std::vector<expr> memory;

int init(int storage_space)
{
  memory = std::vector<expr>(storage_space);
}

int write_push(const std::string *value)
{
  memory.push_back({*value});
}

int __delete(int index)
{
  memory.erase(memory.begin() + index);
}

int write(const std::string &addr, const std::string *value)
{
  memory[addr].value = *value;
}

const expr *read(const std::string &addr)
{
  for (const expr &e : memory)
  {
    if (std::holds_alternative<std::string>(e.value) && std::get<std::string>(e.value) == addr)
    {
      return &e;
    }
  }
  return nullptr; // Return nullptr if value not found
}

int main()
{
  init(1024 * 1024);
}