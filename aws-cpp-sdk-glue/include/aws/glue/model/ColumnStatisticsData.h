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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ColumnStatisticsType.h>
#include <aws/glue/model/BooleanColumnStatisticsData.h>
#include <aws/glue/model/DateColumnStatisticsData.h>
#include <aws/glue/model/DecimalColumnStatisticsData.h>
#include <aws/glue/model/DoubleColumnStatisticsData.h>
#include <aws/glue/model/LongColumnStatisticsData.h>
#include <aws/glue/model/StringColumnStatisticsData.h>
#include <aws/glue/model/BinaryColumnStatisticsData.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Defines a column statistics data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ColumnStatisticsData">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API ColumnStatisticsData
  {
  public:
    ColumnStatisticsData();
    ColumnStatisticsData(Aws::Utils::Json::JsonView jsonValue);
    ColumnStatisticsData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the column.</p>
     */
    inline const ColumnStatisticsType& GetType() const{ return m_type; }

    /**
     * <p>The name of the column.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetType(const ColumnStatisticsType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetType(ColumnStatisticsType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The name of the column.</p>
     */
    inline ColumnStatisticsData& WithType(const ColumnStatisticsType& value) { SetType(value); return *this;}

    /**
     * <p>The name of the column.</p>
     */
    inline ColumnStatisticsData& WithType(ColumnStatisticsType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Boolean Column Statistics Data.</p>
     */
    inline const BooleanColumnStatisticsData& GetBooleanColumnStatisticsData() const{ return m_booleanColumnStatisticsData; }

    /**
     * <p>Boolean Column Statistics Data.</p>
     */
    inline bool BooleanColumnStatisticsDataHasBeenSet() const { return m_booleanColumnStatisticsDataHasBeenSet; }

    /**
     * <p>Boolean Column Statistics Data.</p>
     */
    inline void SetBooleanColumnStatisticsData(const BooleanColumnStatisticsData& value) { m_booleanColumnStatisticsDataHasBeenSet = true; m_booleanColumnStatisticsData = value; }

    /**
     * <p>Boolean Column Statistics Data.</p>
     */
    inline void SetBooleanColumnStatisticsData(BooleanColumnStatisticsData&& value) { m_booleanColumnStatisticsDataHasBeenSet = true; m_booleanColumnStatisticsData = std::move(value); }

    /**
     * <p>Boolean Column Statistics Data.</p>
     */
    inline ColumnStatisticsData& WithBooleanColumnStatisticsData(const BooleanColumnStatisticsData& value) { SetBooleanColumnStatisticsData(value); return *this;}

    /**
     * <p>Boolean Column Statistics Data.</p>
     */
    inline ColumnStatisticsData& WithBooleanColumnStatisticsData(BooleanColumnStatisticsData&& value) { SetBooleanColumnStatisticsData(std::move(value)); return *this;}


    /**
     * <p>Date Column Statistics Data.</p>
     */
    inline const DateColumnStatisticsData& GetDateColumnStatisticsData() const{ return m_dateColumnStatisticsData; }

    /**
     * <p>Date Column Statistics Data.</p>
     */
    inline bool DateColumnStatisticsDataHasBeenSet() const { return m_dateColumnStatisticsDataHasBeenSet; }

    /**
     * <p>Date Column Statistics Data.</p>
     */
    inline void SetDateColumnStatisticsData(const DateColumnStatisticsData& value) { m_dateColumnStatisticsDataHasBeenSet = true; m_dateColumnStatisticsData = value; }

    /**
     * <p>Date Column Statistics Data.</p>
     */
    inline void SetDateColumnStatisticsData(DateColumnStatisticsData&& value) { m_dateColumnStatisticsDataHasBeenSet = true; m_dateColumnStatisticsData = std::move(value); }

    /**
     * <p>Date Column Statistics Data.</p>
     */
    inline ColumnStatisticsData& WithDateColumnStatisticsData(const DateColumnStatisticsData& value) { SetDateColumnStatisticsData(value); return *this;}

    /**
     * <p>Date Column Statistics Data.</p>
     */
    inline ColumnStatisticsData& WithDateColumnStatisticsData(DateColumnStatisticsData&& value) { SetDateColumnStatisticsData(std::move(value)); return *this;}


    /**
     * <p>Decimal Column Statistics Data.</p>
     */
    inline const DecimalColumnStatisticsData& GetDecimalColumnStatisticsData() const{ return m_decimalColumnStatisticsData; }

    /**
     * <p>Decimal Column Statistics Data.</p>
     */
    inline bool DecimalColumnStatisticsDataHasBeenSet() const { return m_decimalColumnStatisticsDataHasBeenSet; }

    /**
     * <p>Decimal Column Statistics Data.</p>
     */
    inline void SetDecimalColumnStatisticsData(const DecimalColumnStatisticsData& value) { m_decimalColumnStatisticsDataHasBeenSet = true; m_decimalColumnStatisticsData = value; }

    /**
     * <p>Decimal Column Statistics Data.</p>
     */
    inline void SetDecimalColumnStatisticsData(DecimalColumnStatisticsData&& value) { m_decimalColumnStatisticsDataHasBeenSet = true; m_decimalColumnStatisticsData = std::move(value); }

    /**
     * <p>Decimal Column Statistics Data.</p>
     */
    inline ColumnStatisticsData& WithDecimalColumnStatisticsData(const DecimalColumnStatisticsData& value) { SetDecimalColumnStatisticsData(value); return *this;}

    /**
     * <p>Decimal Column Statistics Data.</p>
     */
    inline ColumnStatisticsData& WithDecimalColumnStatisticsData(DecimalColumnStatisticsData&& value) { SetDecimalColumnStatisticsData(std::move(value)); return *this;}


    /**
     * <p>Double Column Statistics Data.</p>
     */
    inline const DoubleColumnStatisticsData& GetDoubleColumnStatisticsData() const{ return m_doubleColumnStatisticsData; }

    /**
     * <p>Double Column Statistics Data.</p>
     */
    inline bool DoubleColumnStatisticsDataHasBeenSet() const { return m_doubleColumnStatisticsDataHasBeenSet; }

    /**
     * <p>Double Column Statistics Data.</p>
     */
    inline void SetDoubleColumnStatisticsData(const DoubleColumnStatisticsData& value) { m_doubleColumnStatisticsDataHasBeenSet = true; m_doubleColumnStatisticsData = value; }

    /**
     * <p>Double Column Statistics Data.</p>
     */
    inline void SetDoubleColumnStatisticsData(DoubleColumnStatisticsData&& value) { m_doubleColumnStatisticsDataHasBeenSet = true; m_doubleColumnStatisticsData = std::move(value); }

    /**
     * <p>Double Column Statistics Data.</p>
     */
    inline ColumnStatisticsData& WithDoubleColumnStatisticsData(const DoubleColumnStatisticsData& value) { SetDoubleColumnStatisticsData(value); return *this;}

    /**
     * <p>Double Column Statistics Data.</p>
     */
    inline ColumnStatisticsData& WithDoubleColumnStatisticsData(DoubleColumnStatisticsData&& value) { SetDoubleColumnStatisticsData(std::move(value)); return *this;}


    /**
     * <p>Long Column Statistics Data.</p>
     */
    inline const LongColumnStatisticsData& GetLongColumnStatisticsData() const{ return m_longColumnStatisticsData; }

    /**
     * <p>Long Column Statistics Data.</p>
     */
    inline bool LongColumnStatisticsDataHasBeenSet() const { return m_longColumnStatisticsDataHasBeenSet; }

    /**
     * <p>Long Column Statistics Data.</p>
     */
    inline void SetLongColumnStatisticsData(const LongColumnStatisticsData& value) { m_longColumnStatisticsDataHasBeenSet = true; m_longColumnStatisticsData = value; }

    /**
     * <p>Long Column Statistics Data.</p>
     */
    inline void SetLongColumnStatisticsData(LongColumnStatisticsData&& value) { m_longColumnStatisticsDataHasBeenSet = true; m_longColumnStatisticsData = std::move(value); }

    /**
     * <p>Long Column Statistics Data.</p>
     */
    inline ColumnStatisticsData& WithLongColumnStatisticsData(const LongColumnStatisticsData& value) { SetLongColumnStatisticsData(value); return *this;}

    /**
     * <p>Long Column Statistics Data.</p>
     */
    inline ColumnStatisticsData& WithLongColumnStatisticsData(LongColumnStatisticsData&& value) { SetLongColumnStatisticsData(std::move(value)); return *this;}


    /**
     * <p>String Column Statistics Data.</p>
     */
    inline const StringColumnStatisticsData& GetStringColumnStatisticsData() const{ return m_stringColumnStatisticsData; }

    /**
     * <p>String Column Statistics Data.</p>
     */
    inline bool StringColumnStatisticsDataHasBeenSet() const { return m_stringColumnStatisticsDataHasBeenSet; }

    /**
     * <p>String Column Statistics Data.</p>
     */
    inline void SetStringColumnStatisticsData(const StringColumnStatisticsData& value) { m_stringColumnStatisticsDataHasBeenSet = true; m_stringColumnStatisticsData = value; }

    /**
     * <p>String Column Statistics Data.</p>
     */
    inline void SetStringColumnStatisticsData(StringColumnStatisticsData&& value) { m_stringColumnStatisticsDataHasBeenSet = true; m_stringColumnStatisticsData = std::move(value); }

    /**
     * <p>String Column Statistics Data.</p>
     */
    inline ColumnStatisticsData& WithStringColumnStatisticsData(const StringColumnStatisticsData& value) { SetStringColumnStatisticsData(value); return *this;}

    /**
     * <p>String Column Statistics Data.</p>
     */
    inline ColumnStatisticsData& WithStringColumnStatisticsData(StringColumnStatisticsData&& value) { SetStringColumnStatisticsData(std::move(value)); return *this;}


    /**
     * <p>Binary Column Statistics Data.</p>
     */
    inline const BinaryColumnStatisticsData& GetBinaryColumnStatisticsData() const{ return m_binaryColumnStatisticsData; }

    /**
     * <p>Binary Column Statistics Data.</p>
     */
    inline bool BinaryColumnStatisticsDataHasBeenSet() const { return m_binaryColumnStatisticsDataHasBeenSet; }

    /**
     * <p>Binary Column Statistics Data.</p>
     */
    inline void SetBinaryColumnStatisticsData(const BinaryColumnStatisticsData& value) { m_binaryColumnStatisticsDataHasBeenSet = true; m_binaryColumnStatisticsData = value; }

    /**
     * <p>Binary Column Statistics Data.</p>
     */
    inline void SetBinaryColumnStatisticsData(BinaryColumnStatisticsData&& value) { m_binaryColumnStatisticsDataHasBeenSet = true; m_binaryColumnStatisticsData = std::move(value); }

    /**
     * <p>Binary Column Statistics Data.</p>
     */
    inline ColumnStatisticsData& WithBinaryColumnStatisticsData(const BinaryColumnStatisticsData& value) { SetBinaryColumnStatisticsData(value); return *this;}

    /**
     * <p>Binary Column Statistics Data.</p>
     */
    inline ColumnStatisticsData& WithBinaryColumnStatisticsData(BinaryColumnStatisticsData&& value) { SetBinaryColumnStatisticsData(std::move(value)); return *this;}

  private:

    ColumnStatisticsType m_type;
    bool m_typeHasBeenSet;

    BooleanColumnStatisticsData m_booleanColumnStatisticsData;
    bool m_booleanColumnStatisticsDataHasBeenSet;

    DateColumnStatisticsData m_dateColumnStatisticsData;
    bool m_dateColumnStatisticsDataHasBeenSet;

    DecimalColumnStatisticsData m_decimalColumnStatisticsData;
    bool m_decimalColumnStatisticsDataHasBeenSet;

    DoubleColumnStatisticsData m_doubleColumnStatisticsData;
    bool m_doubleColumnStatisticsDataHasBeenSet;

    LongColumnStatisticsData m_longColumnStatisticsData;
    bool m_longColumnStatisticsDataHasBeenSet;

    StringColumnStatisticsData m_stringColumnStatisticsData;
    bool m_stringColumnStatisticsDataHasBeenSet;

    BinaryColumnStatisticsData m_binaryColumnStatisticsData;
    bool m_binaryColumnStatisticsDataHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
