
#include "GameKit_precompiled.h"
#include <platform_impl.h>

#include <AzCore/Memory/SystemAllocator.h>

#include "GameKitSystemComponent.h"

#include <IGem.h>

namespace GameKit
{
    class GameKitModule
        : public CryHooksModule
    {
    public:
        AZ_RTTI(GameKitModule, "{6BD22A23-26F0-447E-86F2-0EF8C59E4E5E}", CryHooksModule);
        AZ_CLASS_ALLOCATOR(GameKitModule, AZ::SystemAllocator, 0);

        GameKitModule()
            : CryHooksModule()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                GameKitSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<GameKitSystemComponent>(),
            };
        }
    };
}

// DO NOT MODIFY THIS LINE UNLESS YOU RENAME THE GEM
// The first parameter should be GemName_GemIdLower
// The second should be the fully qualified name of the class above
AZ_DECLARE_MODULE_CLASS(GameKit_43ae520db1d546b28dba9d8716660b5c, GameKit::GameKitModule)
