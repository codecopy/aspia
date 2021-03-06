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

#ifndef ASPIA_BASE__BASE64_H_
#define ASPIA_BASE__BASE64_H_

#include <string>

#include "base/macros_magic.h"

namespace aspia {

class Base64
{
public:
    // Encodes the input string in base64. The encoding can be done in-place.
    static void encode(const std::string& input, std::string* output);

    // Encodes the input string in base64.
    static std::string encode(const std::string& input);

    // Decodes the base64 input string. Returns true if successful and false otherwise.
    // The output string is only modified if successful. The decoding can be done in-place.
    static bool decode(const std::string& input, std::string* output);

private:
    DISALLOW_COPY_AND_ASSIGN(Base64);
};

} // namespace aspia

#endif // ASPIA_BASE__BASE64_H_
