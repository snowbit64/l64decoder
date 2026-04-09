// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DeviceMappingManager
// Entry Point: 00b1af48
// Size: 184 bytes
// Signature: undefined __thiscall ~DeviceMappingManager(DeviceMappingManager * this)


/* DeviceMappingManager::~DeviceMappingManager() */

void __thiscall DeviceMappingManager::~DeviceMappingManager(DeviceMappingManager *this)

{
  void *pvVar1;
  void *pvVar2;
  Thread *this_00;
  void *pvVar3;
  
  this_00 = *(Thread **)(this + 0x17d8);
  if (this_00 != (Thread *)0x0) {
    Thread::~Thread(this_00);
    operator_delete(this_00);
  }
  DeviceMapping::~DeviceMapping((DeviceMapping *)(this + 0xc20));
  DeviceMapping::~DeviceMapping((DeviceMapping *)(this + 0x68));
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    operator_delete(pvVar1);
  }
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = *(void **)(this + 0x20);
    pvVar2 = pvVar1;
    if (pvVar3 != pvVar1) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0xbe8);
        FUN_00b1f010(this + 0x28,pvVar3);
      } while (pvVar3 != pvVar1);
      pvVar2 = *(void **)(this + 0x18);
    }
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar2);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::__map_value_compare<DeviceMappingManager::ProductKey,std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::less<DeviceMappingManager::ProductKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>>>
  ::destroy((__tree<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::__map_value_compare<DeviceMappingManager::ProductKey,std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>,std::__ndk1::less<DeviceMappingManager::ProductKey>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>>>
             *)this,*(__tree_node **)(this + 8));
  return;
}


