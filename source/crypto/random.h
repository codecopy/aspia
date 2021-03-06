//
// Aspia Project
// Copyright (C) 2018 Dmitry Chapyshev <dmitry@aspia.ru>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef ASPIA_CRYPTO__RANDOM_H_
#define ASPIA_CRYPTO__RANDOM_H_

#include <string>

#include "base/macros_magic.h"

namespace aspia {

class Random
{
public:
    // Fills buffer |buffer| of size |size| with random values.
    // If successful, returns |true| otherwise |false|.
    static bool fillBuffer(void* buffer, size_t size);

    // Generates a random buffer of size |size|. If the buffer is empty, an error occurred.
    static std::string generateBuffer(size_t size);

    // Generates a random number. If an error occurs, it returns 0.
    static uint32_t generateNumber();

private:
    DISALLOW_COPY_AND_ASSIGN(Random);
};

} // namespace aspia

#endif // ASPIA_CRYPTO__RANDOM_H_
