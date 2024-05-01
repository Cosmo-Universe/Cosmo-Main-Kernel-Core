/**
 * Return codes for the kernel
 * 2023 - 2024 are reserved for the kernel.
 * Cosmo Universe reserves 2025 - 2048 for the kernel. All rights reserved.
 * Code written by CEO Duy Nam Schlitz.
 * This code by using without permission is illegal. This software is protected by the GNU General Public License v3.0.
 * This code is protected by the Govement and Registration System of the Cosmo Universe Laborotory Internationally Society (Association) (CULIS) (c) 2023.
 * This software is a part of the Cosmo Universe Operating System (CUOS) (c) 2023.
 * The syscall is a part of the kernel and the kernel is a part of the CUOS.
 */

#include <./system_var.cpp>
#include <./return.cpp>

long syscall(int n)
{
    // Check if rdi in dev_var.cpp is empty
    error("Error: rdi is empty.", 1);
    return 0;
}
