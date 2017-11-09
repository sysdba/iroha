/**
 * Copyright Soramitsu Co., Ltd. 2017 All Rights Reserved.
 * http://soramitsu.co.jp
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "interfaces/common_objects/account.hpp"
#include "interfaces/common_objects/account_asset.hpp"
#include "interfaces/common_objects/asset.hpp"
#include "interfaces/queries/query.hpp"
#include "interfaces/iroha_internal/block.hpp"
#include "interfaces/iroha_internal/proposal.hpp"
#include "interfaces/queries/query.hpp"
#include "interfaces/query_responses/query_response.hpp"
#include "interfaces/transaction.hpp"
#include "interfaces/transaction_responses/tx_response.hpp"