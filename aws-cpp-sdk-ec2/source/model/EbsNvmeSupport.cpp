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

#include <aws/ec2/model/EbsNvmeSupport.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace EbsNvmeSupportMapper
      {

        static const int unsupported_HASH = HashingUtils::HashString("unsupported");
        static const int supported_HASH = HashingUtils::HashString("supported");
        static const int required_HASH = HashingUtils::HashString("required");


        EbsNvmeSupport GetEbsNvmeSupportForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == unsupported_HASH)
          {
            return EbsNvmeSupport::unsupported;
          }
          else if (hashCode == supported_HASH)
          {
            return EbsNvmeSupport::supported;
          }
          else if (hashCode == required_HASH)
          {
            return EbsNvmeSupport::required;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EbsNvmeSupport>(hashCode);
          }

          return EbsNvmeSupport::NOT_SET;
        }

        Aws::String GetNameForEbsNvmeSupport(EbsNvmeSupport enumValue)
        {
          switch(enumValue)
          {
          case EbsNvmeSupport::unsupported:
            return "unsupported";
          case EbsNvmeSupport::supported:
            return "supported";
          case EbsNvmeSupport::required:
            return "required";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EbsNvmeSupportMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
