// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __destroy<std::__ndk1::pair<DeviceMappingManager::ProductKey_const,DeviceMappingManager::NamedDeviceMapping>>
// Entry Point: 00b1ef34
// Size: 220 bytes
// Signature: void __cdecl __destroy<std::__ndk1::pair<DeviceMappingManager::ProductKey_const,DeviceMappingManager::NamedDeviceMapping>>(integral_constant param_1, allocator * param_2, pair * param_3)


/* void 
   std::__ndk1::allocator_traits<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,
   DeviceMappingManager::NamedDeviceMapping>, void*> >
   >::__destroy<std::__ndk1::pair<DeviceMappingManager::ProductKey const,
   DeviceMappingManager::NamedDeviceMapping> >(std::__ndk1::integral_constant<bool, false>,
   std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,
   DeviceMappingManager::NamedDeviceMapping>, void*> >&,
   std::__ndk1::pair<DeviceMappingManager::ProductKey const,
   DeviceMappingManager::NamedDeviceMapping>*) */

void std::__ndk1::
     allocator_traits<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,void*>>>
     ::
     __destroy<std::__ndk1::pair<DeviceMappingManager::ProductKey_const,DeviceMappingManager::NamedDeviceMapping>>
               (integral_constant param_1,allocator *param_2,pair *param_3)

{
  byte *pbVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  DeviceMappingManager::DeviceMapping::~DeviceMapping((DeviceMapping *)(param_3 + 0xe));
  pvVar2 = *(void **)(param_3 + 8);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    pvVar3 = *(void **)(param_3 + 10);
    if (*(void **)(param_3 + 10) != pvVar2) {
      do {
        pbVar5 = *(byte **)((long)pvVar3 + -0x18);
        pvVar4 = (void *)((long)pvVar3 + -0x20);
        if (pbVar5 != (byte *)0x0) {
          pbVar1 = *(byte **)((long)pvVar3 + -0x10);
          pbVar6 = pbVar5;
          if (pbVar1 != pbVar5) {
            do {
              pbVar6 = pbVar1 + -0x18;
              if ((*pbVar6 & 1) != 0) {
                operator_delete(*(void **)(pbVar1 + -8));
              }
              pbVar1 = pbVar6;
            } while (pbVar6 != pbVar5);
            pbVar6 = *(byte **)((long)pvVar3 + -0x18);
          }
          *(byte **)((long)pvVar3 + -0x10) = pbVar5;
          operator_delete(pbVar6);
        }
        pvVar3 = pvVar4;
      } while (pvVar4 != pvVar2);
      pvVar4 = *(void **)(param_3 + 8);
    }
    *(void **)(param_3 + 10) = pvVar2;
    operator_delete(pvVar4);
  }
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    operator_delete(*(void **)(param_3 + 6));
    return;
  }
  return;
}


