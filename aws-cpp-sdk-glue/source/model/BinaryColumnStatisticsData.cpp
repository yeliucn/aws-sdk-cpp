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

#include <aws/glue/model/BinaryColumnStatisticsData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

BinaryColumnStatisticsData::BinaryColumnStatisticsData() : 
    m_maximumLength(0),
    m_maximumLengthHasBeenSet(false),
    m_averageLength(0.0),
    m_averageLengthHasBeenSet(false),
    m_numberOfNulls(0),
    m_numberOfNullsHasBeenSet(false)
{
}

BinaryColumnStatisticsData::BinaryColumnStatisticsData(JsonView jsonValue) : 
    m_maximumLength(0),
    m_maximumLengthHasBeenSet(false),
    m_averageLength(0.0),
    m_averageLengthHasBeenSet(false),
    m_numberOfNulls(0),
    m_numberOfNullsHasBeenSet(false)
{
  *this = jsonValue;
}

BinaryColumnStatisticsData& BinaryColumnStatisticsData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaximumLength"))
  {
    m_maximumLength = jsonValue.GetInt64("MaximumLength");

    m_maximumLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AverageLength"))
  {
    m_averageLength = jsonValue.GetDouble("AverageLength");

    m_averageLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfNulls"))
  {
    m_numberOfNulls = jsonValue.GetInt64("NumberOfNulls");

    m_numberOfNullsHasBeenSet = true;
  }

  return *this;
}

JsonValue BinaryColumnStatisticsData::Jsonize() const
{
  JsonValue payload;

  if(m_maximumLengthHasBeenSet)
  {
   payload.WithInt64("MaximumLength", m_maximumLength);

  }

  if(m_averageLengthHasBeenSet)
  {
   payload.WithDouble("AverageLength", m_averageLength);

  }

  if(m_numberOfNullsHasBeenSet)
  {
   payload.WithInt64("NumberOfNulls", m_numberOfNulls);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
