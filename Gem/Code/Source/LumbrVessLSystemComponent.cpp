
#include "LumbrVessL_precompiled.h"

#include <AzCore/Serialization/SerializeContext.h>
#include <AzCore/Serialization/EditContext.h>

#include "LumbrVessLSystemComponent.h"

namespace LumbrVessL
{
    void LumbrVessLSystemComponent::Reflect(AZ::ReflectContext* context)
    {
        if (AZ::SerializeContext* serialize = azrtti_cast<AZ::SerializeContext*>(context))
        {
            serialize->Class<LumbrVessLSystemComponent, AZ::Component>()
                ->Version(0)
                ->SerializerForEmptyClass();

            if (AZ::EditContext* ec = serialize->GetEditContext())
            {
                ec->Class<LumbrVessLSystemComponent>("LumbrVessL", "[Description of functionality provided by this System Component]")
                    ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
                        ->Attribute(AZ::Edit::Attributes::AppearsInAddComponentMenu, AZ_CRC("System"))
                        ->Attribute(AZ::Edit::Attributes::AutoExpand, true)
                    ;
            }
        }
    }

    void LumbrVessLSystemComponent::GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided)
    {
        provided.push_back(AZ_CRC("LumbrVessLService"));
    }

    void LumbrVessLSystemComponent::GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible)
    {
        incompatible.push_back(AZ_CRC("LumbrVessLService"));
    }

    void LumbrVessLSystemComponent::GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required)
    {
        (void)required;
    }

    void LumbrVessLSystemComponent::GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent)
    {
        (void)dependent;
    }

    void LumbrVessLSystemComponent::Init()
    {
    }

    void LumbrVessLSystemComponent::Activate()
    {
        LumbrVessLRequestBus::Handler::BusConnect();
    }

    void LumbrVessLSystemComponent::Deactivate()
    {
        LumbrVessLRequestBus::Handler::BusDisconnect();
    }
}
