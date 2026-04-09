// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~pair
// Entry Point: 00b1ded8
// Size: 220 bytes
// Signature: undefined __thiscall ~pair(pair<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping> * this)


/* std::__ndk1::pair<DeviceMappingManager::ProductKey,
   DeviceMappingManager::NamedDeviceMapping>::~pair() */

void __thiscall
std::__ndk1::pair<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping>::~pair
          (pair<DeviceMappingManager::ProductKey,DeviceMappingManager::NamedDeviceMapping> *this)

{
  byte *pbVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  DeviceMappingManager::DeviceMapping::~DeviceMapping((DeviceMapping *)(this + 0x38));
  pvVar2 = *(void **)(this + 0x20);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    pvVar3 = *(void **)(this + 0x28);
    if (*(void **)(this + 0x28) != pvVar2) {
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
      pvVar4 = *(void **)(this + 0x20);
    }
    *(void **)(this + 0x28) = pvVar2;
    operator_delete(pvVar4);
  }
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}


