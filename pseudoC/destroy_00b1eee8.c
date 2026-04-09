// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00b1eee8
// Size: 76 bytes
// Signature: undefined __thiscall destroy(__tree<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::__map_value_compare<DeviceMappingManager::ProductKey,std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::less<DeviceMappingManager::ProductKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>>> * this, __tree_node * param_1)


/* std::__ndk1::__tree<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,
   DeviceMappingManager::NamedDeviceMapping>,
   std::__ndk1::__map_value_compare<DeviceMappingManager::ProductKey,
   std::__ndk1::__value_type<DeviceMappingManager::ProductKey,
   DeviceMappingManager::NamedDeviceMapping>, std::__ndk1::less<DeviceMappingManager::ProductKey>,
   true>, std::__ndk1::allocator<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,
   DeviceMappingManager::NamedDeviceMapping> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,
   DeviceMappingManager::NamedDeviceMapping>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::__map_value_compare<DeviceMappingManager::ProductKey,std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::less<DeviceMappingManager::ProductKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>>>
::destroy(__tree<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::__map_value_compare<DeviceMappingManager::ProductKey,std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::less<DeviceMappingManager::ProductKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>>>
          *this,__tree_node *param_1)

{
  integral_constant iVar1;
  
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    iVar1 = destroy(this,*(__tree_node **)(param_1 + 8));
    allocator_traits<std::__ndk1::allocator<std::__ndk1::__tree_node<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,void*>>>
    ::
    __destroy<std::__ndk1::pair<DeviceMappingManager::ProductKey_const,DeviceMappingManager::NamedDeviceMapping>>
              (iVar1,(allocator *)(this + 8),(pair *)(param_1 + 0x20));
    operator_delete(param_1);
    return;
  }
  return;
}


