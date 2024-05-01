/**
 * Return codes for the kernel
 * 2023 - 2024 are reserved for the kernel.
 * Cosmo Universe reserves 2025 - 2048 for the kernel. All rights reserved.
 * Code written by CEO Duy Nam Schlitz.
 * This code by using without permission is illegal. This software is protected by the GNU General Public License v3.0.
 * This code is protected by the Govement and Registration System of the Cosmo Universe Laborotory Internationally Society (Association) (CULIS) (c) 2023.
 * This software is a part of the Cosmo Universe Operating System (CUOS) (c) 2023 and sorce code of the kernel.
 */

#include <iostream>
#include <string>

enum RUN_CODES
{
    SUCCESS,
    FAILURE,
    NOT_INCLUDE,
    DEAD,
    NOT_FOUND,
    NOT_EXIST
};

RUN_CODES ErrorCode(int errcode)
{
    if (errcode >= 0 && errcode <= 5)
    {
        return static_cast<RUN_CODES>(errcode);
    }
    else
    {
        std::cerr << "Error code not found." << std::endl;
        return RUN_CODES::NOT_FOUND; // Return a default error code
    }
}

RUN_CODES error(const char *msg, int n)
{
    std::cerr << msg << std::endl;
    return ErrorCode(n);
}

int main()
{
    error("Error: Invalid error code.", 1);
    return 0;
}