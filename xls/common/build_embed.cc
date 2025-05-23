// Copyright 2024 The XLS Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "build_embed.h"

#include <string>

namespace xls {

std::string GetBuildEmbedLabel() {
  // BUILD_EMBED_LABEL is set to a non-empty string when built w/ --embed_label.
  return std::string(BUILD_EMBED_LABEL);
}

}  // namespace xls
