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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/SpotProvisioningSpecification.h>
#include <aws/elasticmapreduce/model/OnDemandProvisioningSpecification.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The launch specification for Spot instances in the fleet, which determines
   * the defined duration, provisioning timeout behavior, and allocation
   * strategy.</p> <note> <p>The instance fleet configuration is available only in
   * Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions. On-Demand and
   * Spot instance allocation strategies are available in Amazon EMR version 5.12.1
   * and later.</p> </note><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceFleetProvisioningSpecifications">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API InstanceFleetProvisioningSpecifications
  {
  public:
    InstanceFleetProvisioningSpecifications();
    InstanceFleetProvisioningSpecifications(Aws::Utils::Json::JsonView jsonValue);
    InstanceFleetProvisioningSpecifications& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The launch specification for Spot instances in the fleet, which determines
     * the defined duration, provisioning timeout behavior, and allocation
     * strategy.</p>
     */
    inline const SpotProvisioningSpecification& GetSpotSpecification() const{ return m_spotSpecification; }

    /**
     * <p>The launch specification for Spot instances in the fleet, which determines
     * the defined duration, provisioning timeout behavior, and allocation
     * strategy.</p>
     */
    inline bool SpotSpecificationHasBeenSet() const { return m_spotSpecificationHasBeenSet; }

    /**
     * <p>The launch specification for Spot instances in the fleet, which determines
     * the defined duration, provisioning timeout behavior, and allocation
     * strategy.</p>
     */
    inline void SetSpotSpecification(const SpotProvisioningSpecification& value) { m_spotSpecificationHasBeenSet = true; m_spotSpecification = value; }

    /**
     * <p>The launch specification for Spot instances in the fleet, which determines
     * the defined duration, provisioning timeout behavior, and allocation
     * strategy.</p>
     */
    inline void SetSpotSpecification(SpotProvisioningSpecification&& value) { m_spotSpecificationHasBeenSet = true; m_spotSpecification = std::move(value); }

    /**
     * <p>The launch specification for Spot instances in the fleet, which determines
     * the defined duration, provisioning timeout behavior, and allocation
     * strategy.</p>
     */
    inline InstanceFleetProvisioningSpecifications& WithSpotSpecification(const SpotProvisioningSpecification& value) { SetSpotSpecification(value); return *this;}

    /**
     * <p>The launch specification for Spot instances in the fleet, which determines
     * the defined duration, provisioning timeout behavior, and allocation
     * strategy.</p>
     */
    inline InstanceFleetProvisioningSpecifications& WithSpotSpecification(SpotProvisioningSpecification&& value) { SetSpotSpecification(std::move(value)); return *this;}


    /**
     * <p> The launch specification for On-Demand instances in the instance fleet,
     * which determines the allocation strategy. </p> <note> <p>The instance fleet
     * configuration is available only in Amazon EMR versions 4.8.0 and later,
     * excluding 5.0.x versions. On-Demand instances allocation strategy is available
     * in Amazon EMR version 5.12.1 and later.</p> </note>
     */
    inline const OnDemandProvisioningSpecification& GetOnDemandSpecification() const{ return m_onDemandSpecification; }

    /**
     * <p> The launch specification for On-Demand instances in the instance fleet,
     * which determines the allocation strategy. </p> <note> <p>The instance fleet
     * configuration is available only in Amazon EMR versions 4.8.0 and later,
     * excluding 5.0.x versions. On-Demand instances allocation strategy is available
     * in Amazon EMR version 5.12.1 and later.</p> </note>
     */
    inline bool OnDemandSpecificationHasBeenSet() const { return m_onDemandSpecificationHasBeenSet; }

    /**
     * <p> The launch specification for On-Demand instances in the instance fleet,
     * which determines the allocation strategy. </p> <note> <p>The instance fleet
     * configuration is available only in Amazon EMR versions 4.8.0 and later,
     * excluding 5.0.x versions. On-Demand instances allocation strategy is available
     * in Amazon EMR version 5.12.1 and later.</p> </note>
     */
    inline void SetOnDemandSpecification(const OnDemandProvisioningSpecification& value) { m_onDemandSpecificationHasBeenSet = true; m_onDemandSpecification = value; }

    /**
     * <p> The launch specification for On-Demand instances in the instance fleet,
     * which determines the allocation strategy. </p> <note> <p>The instance fleet
     * configuration is available only in Amazon EMR versions 4.8.0 and later,
     * excluding 5.0.x versions. On-Demand instances allocation strategy is available
     * in Amazon EMR version 5.12.1 and later.</p> </note>
     */
    inline void SetOnDemandSpecification(OnDemandProvisioningSpecification&& value) { m_onDemandSpecificationHasBeenSet = true; m_onDemandSpecification = std::move(value); }

    /**
     * <p> The launch specification for On-Demand instances in the instance fleet,
     * which determines the allocation strategy. </p> <note> <p>The instance fleet
     * configuration is available only in Amazon EMR versions 4.8.0 and later,
     * excluding 5.0.x versions. On-Demand instances allocation strategy is available
     * in Amazon EMR version 5.12.1 and later.</p> </note>
     */
    inline InstanceFleetProvisioningSpecifications& WithOnDemandSpecification(const OnDemandProvisioningSpecification& value) { SetOnDemandSpecification(value); return *this;}

    /**
     * <p> The launch specification for On-Demand instances in the instance fleet,
     * which determines the allocation strategy. </p> <note> <p>The instance fleet
     * configuration is available only in Amazon EMR versions 4.8.0 and later,
     * excluding 5.0.x versions. On-Demand instances allocation strategy is available
     * in Amazon EMR version 5.12.1 and later.</p> </note>
     */
    inline InstanceFleetProvisioningSpecifications& WithOnDemandSpecification(OnDemandProvisioningSpecification&& value) { SetOnDemandSpecification(std::move(value)); return *this;}

  private:

    SpotProvisioningSpecification m_spotSpecification;
    bool m_spotSpecificationHasBeenSet;

    OnDemandProvisioningSpecification m_onDemandSpecification;
    bool m_onDemandSpecificationHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
