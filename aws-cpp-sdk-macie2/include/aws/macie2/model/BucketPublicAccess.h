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
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/EffectivePermission.h>
#include <aws/macie2/model/BucketPermissionConfiguration.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about permissions settings that determine whether an S3
   * bucket is publicly accessible.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketPublicAccess">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API BucketPublicAccess
  {
  public:
    BucketPublicAccess();
    BucketPublicAccess(Aws::Utils::Json::JsonView jsonValue);
    BucketPublicAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket. Possible values are: PUBLIC, the
     * bucket is publicly accessible; and, NOT_PUBLIC, the bucket isn't publicly
     * accessible.</p>
     */
    inline const EffectivePermission& GetEffectivePermission() const{ return m_effectivePermission; }

    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket. Possible values are: PUBLIC, the
     * bucket is publicly accessible; and, NOT_PUBLIC, the bucket isn't publicly
     * accessible.</p>
     */
    inline bool EffectivePermissionHasBeenSet() const { return m_effectivePermissionHasBeenSet; }

    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket. Possible values are: PUBLIC, the
     * bucket is publicly accessible; and, NOT_PUBLIC, the bucket isn't publicly
     * accessible.</p>
     */
    inline void SetEffectivePermission(const EffectivePermission& value) { m_effectivePermissionHasBeenSet = true; m_effectivePermission = value; }

    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket. Possible values are: PUBLIC, the
     * bucket is publicly accessible; and, NOT_PUBLIC, the bucket isn't publicly
     * accessible.</p>
     */
    inline void SetEffectivePermission(EffectivePermission&& value) { m_effectivePermissionHasBeenSet = true; m_effectivePermission = std::move(value); }

    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket. Possible values are: PUBLIC, the
     * bucket is publicly accessible; and, NOT_PUBLIC, the bucket isn't publicly
     * accessible.</p>
     */
    inline BucketPublicAccess& WithEffectivePermission(const EffectivePermission& value) { SetEffectivePermission(value); return *this;}

    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket. Possible values are: PUBLIC, the
     * bucket is publicly accessible; and, NOT_PUBLIC, the bucket isn't publicly
     * accessible.</p>
     */
    inline BucketPublicAccess& WithEffectivePermission(EffectivePermission&& value) { SetEffectivePermission(std::move(value)); return *this;}


    /**
     * <p>The account-level and bucket-level permissions for the bucket.</p>
     */
    inline const BucketPermissionConfiguration& GetPermissionConfiguration() const{ return m_permissionConfiguration; }

    /**
     * <p>The account-level and bucket-level permissions for the bucket.</p>
     */
    inline bool PermissionConfigurationHasBeenSet() const { return m_permissionConfigurationHasBeenSet; }

    /**
     * <p>The account-level and bucket-level permissions for the bucket.</p>
     */
    inline void SetPermissionConfiguration(const BucketPermissionConfiguration& value) { m_permissionConfigurationHasBeenSet = true; m_permissionConfiguration = value; }

    /**
     * <p>The account-level and bucket-level permissions for the bucket.</p>
     */
    inline void SetPermissionConfiguration(BucketPermissionConfiguration&& value) { m_permissionConfigurationHasBeenSet = true; m_permissionConfiguration = std::move(value); }

    /**
     * <p>The account-level and bucket-level permissions for the bucket.</p>
     */
    inline BucketPublicAccess& WithPermissionConfiguration(const BucketPermissionConfiguration& value) { SetPermissionConfiguration(value); return *this;}

    /**
     * <p>The account-level and bucket-level permissions for the bucket.</p>
     */
    inline BucketPublicAccess& WithPermissionConfiguration(BucketPermissionConfiguration&& value) { SetPermissionConfiguration(std::move(value)); return *this;}

  private:

    EffectivePermission m_effectivePermission;
    bool m_effectivePermissionHasBeenSet;

    BucketPermissionConfiguration m_permissionConfiguration;
    bool m_permissionConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
