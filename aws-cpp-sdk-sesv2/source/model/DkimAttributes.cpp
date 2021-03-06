﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sesv2/model/DkimAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

DkimAttributes::DkimAttributes() : 
    m_signingEnabled(false),
    m_signingEnabledHasBeenSet(false),
    m_status(DkimStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tokensHasBeenSet(false)
{
}

DkimAttributes::DkimAttributes(JsonView jsonValue) : 
    m_signingEnabled(false),
    m_signingEnabledHasBeenSet(false),
    m_status(DkimStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tokensHasBeenSet(false)
{
  *this = jsonValue;
}

DkimAttributes& DkimAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SigningEnabled"))
  {
    m_signingEnabled = jsonValue.GetBool("SigningEnabled");

    m_signingEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DkimStatusMapper::GetDkimStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tokens"))
  {
    Array<JsonView> tokensJsonList = jsonValue.GetArray("Tokens");
    for(unsigned tokensIndex = 0; tokensIndex < tokensJsonList.GetLength(); ++tokensIndex)
    {
      m_tokens.push_back(tokensJsonList[tokensIndex].AsString());
    }
    m_tokensHasBeenSet = true;
  }

  return *this;
}

JsonValue DkimAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_signingEnabledHasBeenSet)
  {
   payload.WithBool("SigningEnabled", m_signingEnabled);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DkimStatusMapper::GetNameForDkimStatus(m_status));
  }

  if(m_tokensHasBeenSet)
  {
   Array<JsonValue> tokensJsonList(m_tokens.size());
   for(unsigned tokensIndex = 0; tokensIndex < tokensJsonList.GetLength(); ++tokensIndex)
   {
     tokensJsonList[tokensIndex].AsString(m_tokens[tokensIndex]);
   }
   payload.WithArray("Tokens", std::move(tokensJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
