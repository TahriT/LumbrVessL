
#pragma once

#include <AzCore/Component/Component.h>

#include <LumbrVessL/LumbrVessLBus.h>

namespace LumbrVessL
{
    class LumbrVessLSystemComponent
        : public AZ::Component
        , protected LumbrVessLRequestBus::Handler
    {
    public:
        AZ_COMPONENT(LumbrVessLSystemComponent, "{FB352087-53E5-42CA-82CE-3649DF3E5F62}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

    protected:
        ////////////////////////////////////////////////////////////////////////
        // LumbrVessLRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
