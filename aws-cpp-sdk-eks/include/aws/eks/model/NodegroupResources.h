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
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/AutoScalingGroup.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing the resources associated with the nodegroup, such as
   * AutoScaling groups and security groups for remote access.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/NodegroupResources">AWS
   * API Reference</a></p>
   */
  class AWS_EKS_API NodegroupResources
  {
  public:
    NodegroupResources();
    NodegroupResources(Aws::Utils::Json::JsonView jsonValue);
    NodegroupResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The autoscaling groups associated with the node group.</p>
     */
    inline const Aws::Vector<AutoScalingGroup>& GetAutoScalingGroups() const{ return m_autoScalingGroups; }

    /**
     * <p>The autoscaling groups associated with the node group.</p>
     */
    inline bool AutoScalingGroupsHasBeenSet() const { return m_autoScalingGroupsHasBeenSet; }

    /**
     * <p>The autoscaling groups associated with the node group.</p>
     */
    inline void SetAutoScalingGroups(const Aws::Vector<AutoScalingGroup>& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = value; }

    /**
     * <p>The autoscaling groups associated with the node group.</p>
     */
    inline void SetAutoScalingGroups(Aws::Vector<AutoScalingGroup>&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups = std::move(value); }

    /**
     * <p>The autoscaling groups associated with the node group.</p>
     */
    inline NodegroupResources& WithAutoScalingGroups(const Aws::Vector<AutoScalingGroup>& value) { SetAutoScalingGroups(value); return *this;}

    /**
     * <p>The autoscaling groups associated with the node group.</p>
     */
    inline NodegroupResources& WithAutoScalingGroups(Aws::Vector<AutoScalingGroup>&& value) { SetAutoScalingGroups(std::move(value)); return *this;}

    /**
     * <p>The autoscaling groups associated with the node group.</p>
     */
    inline NodegroupResources& AddAutoScalingGroups(const AutoScalingGroup& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(value); return *this; }

    /**
     * <p>The autoscaling groups associated with the node group.</p>
     */
    inline NodegroupResources& AddAutoScalingGroups(AutoScalingGroup&& value) { m_autoScalingGroupsHasBeenSet = true; m_autoScalingGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The remote access security group associated with the node group. This
     * security group controls SSH access to the worker nodes.</p>
     */
    inline const Aws::String& GetRemoteAccessSecurityGroup() const{ return m_remoteAccessSecurityGroup; }

    /**
     * <p>The remote access security group associated with the node group. This
     * security group controls SSH access to the worker nodes.</p>
     */
    inline bool RemoteAccessSecurityGroupHasBeenSet() const { return m_remoteAccessSecurityGroupHasBeenSet; }

    /**
     * <p>The remote access security group associated with the node group. This
     * security group controls SSH access to the worker nodes.</p>
     */
    inline void SetRemoteAccessSecurityGroup(const Aws::String& value) { m_remoteAccessSecurityGroupHasBeenSet = true; m_remoteAccessSecurityGroup = value; }

    /**
     * <p>The remote access security group associated with the node group. This
     * security group controls SSH access to the worker nodes.</p>
     */
    inline void SetRemoteAccessSecurityGroup(Aws::String&& value) { m_remoteAccessSecurityGroupHasBeenSet = true; m_remoteAccessSecurityGroup = std::move(value); }

    /**
     * <p>The remote access security group associated with the node group. This
     * security group controls SSH access to the worker nodes.</p>
     */
    inline void SetRemoteAccessSecurityGroup(const char* value) { m_remoteAccessSecurityGroupHasBeenSet = true; m_remoteAccessSecurityGroup.assign(value); }

    /**
     * <p>The remote access security group associated with the node group. This
     * security group controls SSH access to the worker nodes.</p>
     */
    inline NodegroupResources& WithRemoteAccessSecurityGroup(const Aws::String& value) { SetRemoteAccessSecurityGroup(value); return *this;}

    /**
     * <p>The remote access security group associated with the node group. This
     * security group controls SSH access to the worker nodes.</p>
     */
    inline NodegroupResources& WithRemoteAccessSecurityGroup(Aws::String&& value) { SetRemoteAccessSecurityGroup(std::move(value)); return *this;}

    /**
     * <p>The remote access security group associated with the node group. This
     * security group controls SSH access to the worker nodes.</p>
     */
    inline NodegroupResources& WithRemoteAccessSecurityGroup(const char* value) { SetRemoteAccessSecurityGroup(value); return *this;}

  private:

    Aws::Vector<AutoScalingGroup> m_autoScalingGroups;
    bool m_autoScalingGroupsHasBeenSet;

    Aws::String m_remoteAccessSecurityGroup;
    bool m_remoteAccessSecurityGroupHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
