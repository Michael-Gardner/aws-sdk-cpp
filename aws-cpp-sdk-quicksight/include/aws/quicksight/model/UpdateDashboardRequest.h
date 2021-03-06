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
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DashboardSourceEntity.h>
#include <aws/quicksight/model/Parameters.h>
#include <aws/quicksight/model/DashboardPublishOptions.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class AWS_QUICKSIGHT_API UpdateDashboardRequest : public QuickSightRequest
  {
  public:
    UpdateDashboardRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDashboard"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>AWS account ID that contains the dashboard you are updating.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>AWS account ID that contains the dashboard you are updating.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>AWS account ID that contains the dashboard you are updating.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>AWS account ID that contains the dashboard you are updating.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>AWS account ID that contains the dashboard you are updating.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>AWS account ID that contains the dashboard you are updating.</p>
     */
    inline UpdateDashboardRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>AWS account ID that contains the dashboard you are updating.</p>
     */
    inline UpdateDashboardRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>AWS account ID that contains the dashboard you are updating.</p>
     */
    inline UpdateDashboardRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline UpdateDashboardRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline UpdateDashboardRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}

    /**
     * <p>The ID for the dashboard.</p>
     */
    inline UpdateDashboardRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}


    /**
     * <p>The display name of the dashboard.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline UpdateDashboardRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline UpdateDashboardRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The display name of the dashboard.</p>
     */
    inline UpdateDashboardRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The template or analysis from which the dashboard is created. The
     * SouceTemplate entity accepts the Arn of the template and also references to
     * replacement datasets for the placeholders set when creating the template. The
     * replacement datasets need to follow the same schema as the datasets for which
     * placeholders were created when creating the template.</p>
     */
    inline const DashboardSourceEntity& GetSourceEntity() const{ return m_sourceEntity; }

    /**
     * <p>The template or analysis from which the dashboard is created. The
     * SouceTemplate entity accepts the Arn of the template and also references to
     * replacement datasets for the placeholders set when creating the template. The
     * replacement datasets need to follow the same schema as the datasets for which
     * placeholders were created when creating the template.</p>
     */
    inline bool SourceEntityHasBeenSet() const { return m_sourceEntityHasBeenSet; }

    /**
     * <p>The template or analysis from which the dashboard is created. The
     * SouceTemplate entity accepts the Arn of the template and also references to
     * replacement datasets for the placeholders set when creating the template. The
     * replacement datasets need to follow the same schema as the datasets for which
     * placeholders were created when creating the template.</p>
     */
    inline void SetSourceEntity(const DashboardSourceEntity& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = value; }

    /**
     * <p>The template or analysis from which the dashboard is created. The
     * SouceTemplate entity accepts the Arn of the template and also references to
     * replacement datasets for the placeholders set when creating the template. The
     * replacement datasets need to follow the same schema as the datasets for which
     * placeholders were created when creating the template.</p>
     */
    inline void SetSourceEntity(DashboardSourceEntity&& value) { m_sourceEntityHasBeenSet = true; m_sourceEntity = std::move(value); }

    /**
     * <p>The template or analysis from which the dashboard is created. The
     * SouceTemplate entity accepts the Arn of the template and also references to
     * replacement datasets for the placeholders set when creating the template. The
     * replacement datasets need to follow the same schema as the datasets for which
     * placeholders were created when creating the template.</p>
     */
    inline UpdateDashboardRequest& WithSourceEntity(const DashboardSourceEntity& value) { SetSourceEntity(value); return *this;}

    /**
     * <p>The template or analysis from which the dashboard is created. The
     * SouceTemplate entity accepts the Arn of the template and also references to
     * replacement datasets for the placeholders set when creating the template. The
     * replacement datasets need to follow the same schema as the datasets for which
     * placeholders were created when creating the template.</p>
     */
    inline UpdateDashboardRequest& WithSourceEntity(DashboardSourceEntity&& value) { SetSourceEntity(std::move(value)); return *this;}


    /**
     * <p>A structure that contains the parameters of the dashboard.</p>
     */
    inline const Parameters& GetParameters() const{ return m_parameters; }

    /**
     * <p>A structure that contains the parameters of the dashboard.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A structure that contains the parameters of the dashboard.</p>
     */
    inline void SetParameters(const Parameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A structure that contains the parameters of the dashboard.</p>
     */
    inline void SetParameters(Parameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A structure that contains the parameters of the dashboard.</p>
     */
    inline UpdateDashboardRequest& WithParameters(const Parameters& value) { SetParameters(value); return *this;}

    /**
     * <p>A structure that contains the parameters of the dashboard.</p>
     */
    inline UpdateDashboardRequest& WithParameters(Parameters&& value) { SetParameters(std::move(value)); return *this;}


    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline UpdateDashboardRequest& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline UpdateDashboardRequest& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the first version of the dashboard being created.</p>
     */
    inline UpdateDashboardRequest& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}


    /**
     * <p>Publishing options when creating a dashboard.</p> <ul> <li>
     * <p>AvailabilityStatus for AdHocFilteringOption - This can be either
     * <code>ENABLED</code> or <code>DISABLED</code>. When This is set to set to
     * <code>DISABLED</code>, QuickSight disables the left filter pane on the published
     * dashboard, which can be used for AdHoc filtering. Enabled by default. </p> </li>
     * <li> <p>AvailabilityStatus for ExportToCSVOption - This can be either
     * <code>ENABLED</code> or <code>DISABLED</code>. The visual option to export data
     * to CSV is disabled when this is set to <code>DISABLED</code>. Enabled by
     * default. </p> </li> <li> <p>VisibilityState for SheetControlsOption - This can
     * be either <code>COLLAPSED</code> or <code>EXPANDED</code>. The sheet controls
     * pane is collapsed by default when set to true. Collapsed by default. </p> </li>
     * </ul>
     */
    inline const DashboardPublishOptions& GetDashboardPublishOptions() const{ return m_dashboardPublishOptions; }

    /**
     * <p>Publishing options when creating a dashboard.</p> <ul> <li>
     * <p>AvailabilityStatus for AdHocFilteringOption - This can be either
     * <code>ENABLED</code> or <code>DISABLED</code>. When This is set to set to
     * <code>DISABLED</code>, QuickSight disables the left filter pane on the published
     * dashboard, which can be used for AdHoc filtering. Enabled by default. </p> </li>
     * <li> <p>AvailabilityStatus for ExportToCSVOption - This can be either
     * <code>ENABLED</code> or <code>DISABLED</code>. The visual option to export data
     * to CSV is disabled when this is set to <code>DISABLED</code>. Enabled by
     * default. </p> </li> <li> <p>VisibilityState for SheetControlsOption - This can
     * be either <code>COLLAPSED</code> or <code>EXPANDED</code>. The sheet controls
     * pane is collapsed by default when set to true. Collapsed by default. </p> </li>
     * </ul>
     */
    inline bool DashboardPublishOptionsHasBeenSet() const { return m_dashboardPublishOptionsHasBeenSet; }

    /**
     * <p>Publishing options when creating a dashboard.</p> <ul> <li>
     * <p>AvailabilityStatus for AdHocFilteringOption - This can be either
     * <code>ENABLED</code> or <code>DISABLED</code>. When This is set to set to
     * <code>DISABLED</code>, QuickSight disables the left filter pane on the published
     * dashboard, which can be used for AdHoc filtering. Enabled by default. </p> </li>
     * <li> <p>AvailabilityStatus for ExportToCSVOption - This can be either
     * <code>ENABLED</code> or <code>DISABLED</code>. The visual option to export data
     * to CSV is disabled when this is set to <code>DISABLED</code>. Enabled by
     * default. </p> </li> <li> <p>VisibilityState for SheetControlsOption - This can
     * be either <code>COLLAPSED</code> or <code>EXPANDED</code>. The sheet controls
     * pane is collapsed by default when set to true. Collapsed by default. </p> </li>
     * </ul>
     */
    inline void SetDashboardPublishOptions(const DashboardPublishOptions& value) { m_dashboardPublishOptionsHasBeenSet = true; m_dashboardPublishOptions = value; }

    /**
     * <p>Publishing options when creating a dashboard.</p> <ul> <li>
     * <p>AvailabilityStatus for AdHocFilteringOption - This can be either
     * <code>ENABLED</code> or <code>DISABLED</code>. When This is set to set to
     * <code>DISABLED</code>, QuickSight disables the left filter pane on the published
     * dashboard, which can be used for AdHoc filtering. Enabled by default. </p> </li>
     * <li> <p>AvailabilityStatus for ExportToCSVOption - This can be either
     * <code>ENABLED</code> or <code>DISABLED</code>. The visual option to export data
     * to CSV is disabled when this is set to <code>DISABLED</code>. Enabled by
     * default. </p> </li> <li> <p>VisibilityState for SheetControlsOption - This can
     * be either <code>COLLAPSED</code> or <code>EXPANDED</code>. The sheet controls
     * pane is collapsed by default when set to true. Collapsed by default. </p> </li>
     * </ul>
     */
    inline void SetDashboardPublishOptions(DashboardPublishOptions&& value) { m_dashboardPublishOptionsHasBeenSet = true; m_dashboardPublishOptions = std::move(value); }

    /**
     * <p>Publishing options when creating a dashboard.</p> <ul> <li>
     * <p>AvailabilityStatus for AdHocFilteringOption - This can be either
     * <code>ENABLED</code> or <code>DISABLED</code>. When This is set to set to
     * <code>DISABLED</code>, QuickSight disables the left filter pane on the published
     * dashboard, which can be used for AdHoc filtering. Enabled by default. </p> </li>
     * <li> <p>AvailabilityStatus for ExportToCSVOption - This can be either
     * <code>ENABLED</code> or <code>DISABLED</code>. The visual option to export data
     * to CSV is disabled when this is set to <code>DISABLED</code>. Enabled by
     * default. </p> </li> <li> <p>VisibilityState for SheetControlsOption - This can
     * be either <code>COLLAPSED</code> or <code>EXPANDED</code>. The sheet controls
     * pane is collapsed by default when set to true. Collapsed by default. </p> </li>
     * </ul>
     */
    inline UpdateDashboardRequest& WithDashboardPublishOptions(const DashboardPublishOptions& value) { SetDashboardPublishOptions(value); return *this;}

    /**
     * <p>Publishing options when creating a dashboard.</p> <ul> <li>
     * <p>AvailabilityStatus for AdHocFilteringOption - This can be either
     * <code>ENABLED</code> or <code>DISABLED</code>. When This is set to set to
     * <code>DISABLED</code>, QuickSight disables the left filter pane on the published
     * dashboard, which can be used for AdHoc filtering. Enabled by default. </p> </li>
     * <li> <p>AvailabilityStatus for ExportToCSVOption - This can be either
     * <code>ENABLED</code> or <code>DISABLED</code>. The visual option to export data
     * to CSV is disabled when this is set to <code>DISABLED</code>. Enabled by
     * default. </p> </li> <li> <p>VisibilityState for SheetControlsOption - This can
     * be either <code>COLLAPSED</code> or <code>EXPANDED</code>. The sheet controls
     * pane is collapsed by default when set to true. Collapsed by default. </p> </li>
     * </ul>
     */
    inline UpdateDashboardRequest& WithDashboardPublishOptions(DashboardPublishOptions&& value) { SetDashboardPublishOptions(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet;

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    DashboardSourceEntity m_sourceEntity;
    bool m_sourceEntityHasBeenSet;

    Parameters m_parameters;
    bool m_parametersHasBeenSet;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet;

    DashboardPublishOptions m_dashboardPublishOptions;
    bool m_dashboardPublishOptionsHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
