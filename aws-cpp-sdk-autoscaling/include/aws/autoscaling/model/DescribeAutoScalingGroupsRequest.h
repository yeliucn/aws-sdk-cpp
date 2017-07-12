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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeAutoScalingGroups.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AutoScalingGroupNamesType">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API DescribeAutoScalingGroupsRequest : public AutoScalingRequest
  {
  public:
    DescribeAutoScalingGroupsRequest();
    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The group names. If you omit this parameter, all Auto Scaling groups are
     * described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoScalingGroupNames() const{ return m_autoScalingGroupNames; }

    /**
     * <p>The group names. If you omit this parameter, all Auto Scaling groups are
     * described.</p>
     */
    inline void SetAutoScalingGroupNames(const Aws::Vector<Aws::String>& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames = value; }

    /**
     * <p>The group names. If you omit this parameter, all Auto Scaling groups are
     * described.</p>
     */
    inline void SetAutoScalingGroupNames(Aws::Vector<Aws::String>&& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames = std::move(value); }

    /**
     * <p>The group names. If you omit this parameter, all Auto Scaling groups are
     * described.</p>
     */
    inline DescribeAutoScalingGroupsRequest& WithAutoScalingGroupNames(const Aws::Vector<Aws::String>& value) { SetAutoScalingGroupNames(value); return *this;}

    /**
     * <p>The group names. If you omit this parameter, all Auto Scaling groups are
     * described.</p>
     */
    inline DescribeAutoScalingGroupsRequest& WithAutoScalingGroupNames(Aws::Vector<Aws::String>&& value) { SetAutoScalingGroupNames(std::move(value)); return *this;}

    /**
     * <p>The group names. If you omit this parameter, all Auto Scaling groups are
     * described.</p>
     */
    inline DescribeAutoScalingGroupsRequest& AddAutoScalingGroupNames(const Aws::String& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames.push_back(value); return *this; }

    /**
     * <p>The group names. If you omit this parameter, all Auto Scaling groups are
     * described.</p>
     */
    inline DescribeAutoScalingGroupsRequest& AddAutoScalingGroupNames(Aws::String&& value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The group names. If you omit this parameter, all Auto Scaling groups are
     * described.</p>
     */
    inline DescribeAutoScalingGroupsRequest& AddAutoScalingGroupNames(const char* value) { m_autoScalingGroupNamesHasBeenSet = true; m_autoScalingGroupNames.push_back(value); return *this; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeAutoScalingGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeAutoScalingGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeAutoScalingGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of items to return with this call. The default value is 50
     * and the maximum value is 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of items to return with this call. The default value is 50
     * and the maximum value is 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of items to return with this call. The default value is 50
     * and the maximum value is 100.</p>
     */
    inline DescribeAutoScalingGroupsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_autoScalingGroupNames;
    bool m_autoScalingGroupNamesHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
