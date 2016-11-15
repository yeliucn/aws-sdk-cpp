﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/FlowLog.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output of DescribeFlowLogs.</p>
   */
  class AWS_EC2_API DescribeFlowLogsResponse
  {
  public:
    DescribeFlowLogsResponse();
    DescribeFlowLogsResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeFlowLogsResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the flow logs.</p>
     */
    inline const Aws::Vector<FlowLog>& GetFlowLogs() const{ return m_flowLogs; }

    /**
     * <p>Information about the flow logs.</p>
     */
    inline void SetFlowLogs(const Aws::Vector<FlowLog>& value) { m_flowLogs = value; }

    /**
     * <p>Information about the flow logs.</p>
     */
    inline void SetFlowLogs(Aws::Vector<FlowLog>&& value) { m_flowLogs = value; }

    /**
     * <p>Information about the flow logs.</p>
     */
    inline DescribeFlowLogsResponse& WithFlowLogs(const Aws::Vector<FlowLog>& value) { SetFlowLogs(value); return *this;}

    /**
     * <p>Information about the flow logs.</p>
     */
    inline DescribeFlowLogsResponse& WithFlowLogs(Aws::Vector<FlowLog>&& value) { SetFlowLogs(value); return *this;}

    /**
     * <p>Information about the flow logs.</p>
     */
    inline DescribeFlowLogsResponse& AddFlowLogs(const FlowLog& value) { m_flowLogs.push_back(value); return *this; }

    /**
     * <p>Information about the flow logs.</p>
     */
    inline DescribeFlowLogsResponse& AddFlowLogs(FlowLog&& value) { m_flowLogs.push_back(value); return *this; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeFlowLogsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeFlowLogsResponse& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeFlowLogsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeFlowLogsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeFlowLogsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<FlowLog> m_flowLogs;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws