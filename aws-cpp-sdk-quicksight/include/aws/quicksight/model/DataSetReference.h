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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Dataset reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetReference">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API DataSetReference
  {
  public:
    DataSetReference();
    DataSetReference(Aws::Utils::Json::JsonView jsonValue);
    DataSetReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Dataset placeholder.</p>
     */
    inline const Aws::String& GetDataSetPlaceholder() const{ return m_dataSetPlaceholder; }

    /**
     * <p>Dataset placeholder.</p>
     */
    inline bool DataSetPlaceholderHasBeenSet() const { return m_dataSetPlaceholderHasBeenSet; }

    /**
     * <p>Dataset placeholder.</p>
     */
    inline void SetDataSetPlaceholder(const Aws::String& value) { m_dataSetPlaceholderHasBeenSet = true; m_dataSetPlaceholder = value; }

    /**
     * <p>Dataset placeholder.</p>
     */
    inline void SetDataSetPlaceholder(Aws::String&& value) { m_dataSetPlaceholderHasBeenSet = true; m_dataSetPlaceholder = std::move(value); }

    /**
     * <p>Dataset placeholder.</p>
     */
    inline void SetDataSetPlaceholder(const char* value) { m_dataSetPlaceholderHasBeenSet = true; m_dataSetPlaceholder.assign(value); }

    /**
     * <p>Dataset placeholder.</p>
     */
    inline DataSetReference& WithDataSetPlaceholder(const Aws::String& value) { SetDataSetPlaceholder(value); return *this;}

    /**
     * <p>Dataset placeholder.</p>
     */
    inline DataSetReference& WithDataSetPlaceholder(Aws::String&& value) { SetDataSetPlaceholder(std::move(value)); return *this;}

    /**
     * <p>Dataset placeholder.</p>
     */
    inline DataSetReference& WithDataSetPlaceholder(const char* value) { SetDataSetPlaceholder(value); return *this;}


    /**
     * <p>Dataset ARN.</p>
     */
    inline const Aws::String& GetDataSetArn() const{ return m_dataSetArn; }

    /**
     * <p>Dataset ARN.</p>
     */
    inline bool DataSetArnHasBeenSet() const { return m_dataSetArnHasBeenSet; }

    /**
     * <p>Dataset ARN.</p>
     */
    inline void SetDataSetArn(const Aws::String& value) { m_dataSetArnHasBeenSet = true; m_dataSetArn = value; }

    /**
     * <p>Dataset ARN.</p>
     */
    inline void SetDataSetArn(Aws::String&& value) { m_dataSetArnHasBeenSet = true; m_dataSetArn = std::move(value); }

    /**
     * <p>Dataset ARN.</p>
     */
    inline void SetDataSetArn(const char* value) { m_dataSetArnHasBeenSet = true; m_dataSetArn.assign(value); }

    /**
     * <p>Dataset ARN.</p>
     */
    inline DataSetReference& WithDataSetArn(const Aws::String& value) { SetDataSetArn(value); return *this;}

    /**
     * <p>Dataset ARN.</p>
     */
    inline DataSetReference& WithDataSetArn(Aws::String&& value) { SetDataSetArn(std::move(value)); return *this;}

    /**
     * <p>Dataset ARN.</p>
     */
    inline DataSetReference& WithDataSetArn(const char* value) { SetDataSetArn(value); return *this;}

  private:

    Aws::String m_dataSetPlaceholder;
    bool m_dataSetPlaceholderHasBeenSet;

    Aws::String m_dataSetArn;
    bool m_dataSetArnHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
