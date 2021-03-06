// Copyright 2019-present MongoDB Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <gennylib/version.hpp>

#include <boost/log/trivial.hpp>

std::string genny::getVersion() {
    BOOST_LOG_TRIVIAL(info) << "Confirmed logging through boost";
    // NB: this version number is duplicated in
    // src/CMakeList.txt, src/gennylib/CMakeLists.txt and src/gennylib/src/version.cpp
    return "0.0.1";
}
