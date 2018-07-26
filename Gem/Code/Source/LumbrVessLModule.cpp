
#include "LumbrVessL_precompiled.h"
#include <platform_impl.h>

#include <AzCore/Memory/SystemAllocator.h>

#include "LumbrVessLSystemComponent.h"

#include <IGem.h>

namespace LumbrVessL
{
    class LumbrVessLModule
        : public CryHooksModule
    {
    public:
        AZ_RTTI(LumbrVessLModule, "{26D8EBB3-0864-46C7-AD0E-95AE6CD44EAB}", CryHooksModule);
        AZ_CLASS_ALLOCATOR(LumbrVessLModule, AZ::SystemAllocator, 0);

        LumbrVessLModule()
            : CryHooksModule()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                LumbrVessLSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<LumbrVessLSystemComponent>(),
            };
        }
    };
}

// DO NOT MODIFY THIS LINE UNLESS YOU RENAME THE GEM
// The first parameter should be GemName_GemIdLower
// The second should be the fully qualified name of the class above
AZ_DECLARE_MODULE_CLASS(LumbrVessL_5e052391ab6e43fdbd1359b105092e4a, LumbrVessL::LumbrVessLModule)
