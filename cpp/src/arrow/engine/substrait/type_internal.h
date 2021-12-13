// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

// This API is EXPERIMENTAL.

#pragma once

#include <utility>

#include "arrow/engine/substrait/extension_types.h"
#include "arrow/engine/visibility.h"
#include "arrow/type_fwd.h"

#include "generated/substrait/type.pb.h"  // IWYU pragma: export

namespace st = io::substrait;

namespace arrow {
namespace engine {

ARROW_ENGINE_EXPORT
Result<std::pair<std::shared_ptr<DataType>, bool>> FromProto(const st::Type&,
                                                             const ExtensionSet&);

ARROW_ENGINE_EXPORT
Result<std::unique_ptr<st::Type>> ToProto(const DataType&, bool nullable, ExtensionSet*);

ARROW_ENGINE_EXPORT
Result<std::shared_ptr<Schema>> FromProto(const st::NamedStruct&);

ARROW_ENGINE_EXPORT
Result<std::unique_ptr<st::NamedStruct>> ToProto(const Schema&);

inline std::string TimestampTzTimezoneString() { return "UTC"; }

}  // namespace engine
}  // namespace arrow
