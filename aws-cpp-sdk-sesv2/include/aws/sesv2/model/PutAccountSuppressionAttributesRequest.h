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

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/SuppressionListReason.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to change your account's suppression preferences.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountSuppressionAttributesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SESV2_API PutAccountSuppressionAttributesRequest : public SESV2Request
  {
  public:
    PutAccountSuppressionAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountSuppressionAttributes"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A list of reasons to suppress email addresses. The only valid reasons
     * are:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES will suppress an
     * email address that receives a complaint.</p> </li> <li> <p> <code>BOUNCE</code>
     * – Amazon SES will suppress an email address that hard bounces.</p> </li> </ul>
     */
    inline const Aws::Vector<SuppressionListReason>& GetSuppressedReasons() const{ return m_suppressedReasons; }

    /**
     * <p>A list of reasons to suppress email addresses. The only valid reasons
     * are:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES will suppress an
     * email address that receives a complaint.</p> </li> <li> <p> <code>BOUNCE</code>
     * – Amazon SES will suppress an email address that hard bounces.</p> </li> </ul>
     */
    inline bool SuppressedReasonsHasBeenSet() const { return m_suppressedReasonsHasBeenSet; }

    /**
     * <p>A list of reasons to suppress email addresses. The only valid reasons
     * are:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES will suppress an
     * email address that receives a complaint.</p> </li> <li> <p> <code>BOUNCE</code>
     * – Amazon SES will suppress an email address that hard bounces.</p> </li> </ul>
     */
    inline void SetSuppressedReasons(const Aws::Vector<SuppressionListReason>& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons = value; }

    /**
     * <p>A list of reasons to suppress email addresses. The only valid reasons
     * are:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES will suppress an
     * email address that receives a complaint.</p> </li> <li> <p> <code>BOUNCE</code>
     * – Amazon SES will suppress an email address that hard bounces.</p> </li> </ul>
     */
    inline void SetSuppressedReasons(Aws::Vector<SuppressionListReason>&& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons = std::move(value); }

    /**
     * <p>A list of reasons to suppress email addresses. The only valid reasons
     * are:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES will suppress an
     * email address that receives a complaint.</p> </li> <li> <p> <code>BOUNCE</code>
     * – Amazon SES will suppress an email address that hard bounces.</p> </li> </ul>
     */
    inline PutAccountSuppressionAttributesRequest& WithSuppressedReasons(const Aws::Vector<SuppressionListReason>& value) { SetSuppressedReasons(value); return *this;}

    /**
     * <p>A list of reasons to suppress email addresses. The only valid reasons
     * are:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES will suppress an
     * email address that receives a complaint.</p> </li> <li> <p> <code>BOUNCE</code>
     * – Amazon SES will suppress an email address that hard bounces.</p> </li> </ul>
     */
    inline PutAccountSuppressionAttributesRequest& WithSuppressedReasons(Aws::Vector<SuppressionListReason>&& value) { SetSuppressedReasons(std::move(value)); return *this;}

    /**
     * <p>A list of reasons to suppress email addresses. The only valid reasons
     * are:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES will suppress an
     * email address that receives a complaint.</p> </li> <li> <p> <code>BOUNCE</code>
     * – Amazon SES will suppress an email address that hard bounces.</p> </li> </ul>
     */
    inline PutAccountSuppressionAttributesRequest& AddSuppressedReasons(const SuppressionListReason& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons.push_back(value); return *this; }

    /**
     * <p>A list of reasons to suppress email addresses. The only valid reasons
     * are:</p> <ul> <li> <p> <code>COMPLAINT</code> – Amazon SES will suppress an
     * email address that receives a complaint.</p> </li> <li> <p> <code>BOUNCE</code>
     * – Amazon SES will suppress an email address that hard bounces.</p> </li> </ul>
     */
    inline PutAccountSuppressionAttributesRequest& AddSuppressedReasons(SuppressionListReason&& value) { m_suppressedReasonsHasBeenSet = true; m_suppressedReasons.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SuppressionListReason> m_suppressedReasons;
    bool m_suppressedReasonsHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
