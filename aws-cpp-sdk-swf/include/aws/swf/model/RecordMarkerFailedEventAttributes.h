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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/RecordMarkerFailedCause.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides the details of the <code>RecordMarkerFailed</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RecordMarkerFailedEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API RecordMarkerFailedEventAttributes
  {
  public:
    RecordMarkerFailedEventAttributes();
    RecordMarkerFailedEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    RecordMarkerFailedEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The marker's name.</p>
     */
    inline const Aws::String& GetMarkerName() const{ return m_markerName; }

    /**
     * <p>The marker's name.</p>
     */
    inline void SetMarkerName(const Aws::String& value) { m_markerNameHasBeenSet = true; m_markerName = value; }

    /**
     * <p>The marker's name.</p>
     */
    inline void SetMarkerName(Aws::String&& value) { m_markerNameHasBeenSet = true; m_markerName = std::move(value); }

    /**
     * <p>The marker's name.</p>
     */
    inline void SetMarkerName(const char* value) { m_markerNameHasBeenSet = true; m_markerName.assign(value); }

    /**
     * <p>The marker's name.</p>
     */
    inline RecordMarkerFailedEventAttributes& WithMarkerName(const Aws::String& value) { SetMarkerName(value); return *this;}

    /**
     * <p>The marker's name.</p>
     */
    inline RecordMarkerFailedEventAttributes& WithMarkerName(Aws::String&& value) { SetMarkerName(std::move(value)); return *this;}

    /**
     * <p>The marker's name.</p>
     */
    inline RecordMarkerFailedEventAttributes& WithMarkerName(const char* value) { SetMarkerName(value); return *this;}


    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note> <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> </note>
     */
    inline const RecordMarkerFailedCause& GetCause() const{ return m_cause; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note> <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> </note>
     */
    inline void SetCause(const RecordMarkerFailedCause& value) { m_causeHasBeenSet = true; m_cause = value; }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note> <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> </note>
     */
    inline void SetCause(RecordMarkerFailedCause&& value) { m_causeHasBeenSet = true; m_cause = std::move(value); }

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note> <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> </note>
     */
    inline RecordMarkerFailedEventAttributes& WithCause(const RecordMarkerFailedCause& value) { SetCause(value); return *this;}

    /**
     * <p>The cause of the failure. This information is generated by the system and can
     * be useful for diagnostic purposes.</p> <note> <p>If <code>cause</code> is set to
     * <code>OPERATION_NOT_PERMITTED</code>, the decision failed because it lacked
     * sufficient permissions. For details and example IAM policies, see <a
     * href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
     * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
     * Guide</i>.</p> </note>
     */
    inline RecordMarkerFailedEventAttributes& WithCause(RecordMarkerFailedCause&& value) { SetCause(std::move(value)); return *this;}


    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>RecordMarkerFailed</code> decision for
     * this cancellation request. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetDecisionTaskCompletedEventId() const{ return m_decisionTaskCompletedEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>RecordMarkerFailed</code> decision for
     * this cancellation request. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline void SetDecisionTaskCompletedEventId(long long value) { m_decisionTaskCompletedEventIdHasBeenSet = true; m_decisionTaskCompletedEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskCompleted</code> event corresponding to the
     * decision task that resulted in the <code>RecordMarkerFailed</code> decision for
     * this cancellation request. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline RecordMarkerFailedEventAttributes& WithDecisionTaskCompletedEventId(long long value) { SetDecisionTaskCompletedEventId(value); return *this;}

  private:

    Aws::String m_markerName;
    bool m_markerNameHasBeenSet;

    RecordMarkerFailedCause m_cause;
    bool m_causeHasBeenSet;

    long long m_decisionTaskCompletedEventId;
    bool m_decisionTaskCompletedEventIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
