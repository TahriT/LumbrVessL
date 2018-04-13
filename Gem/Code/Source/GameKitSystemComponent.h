
#pragma once

#include <AzCore/Component/Component.h>

#include <GameKit/GameKitBus.h>

namespace GameKit
{
    class GameKitSystemComponent
        : public AZ::Component
        , protected GameKitRequestBus::Handler
    {
    public:
        AZ_COMPONENT(GameKitSystemComponent, "{B0524C95-DFED-4DBC-9191-021CAC55DEFB}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

    protected:
        ////////////////////////////////////////////////////////////////////////
        // GameKitRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
