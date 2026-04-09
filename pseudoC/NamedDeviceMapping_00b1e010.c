// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NamedDeviceMapping
// Entry Point: 00b1e010
// Size: 220 bytes
// Signature: undefined __thiscall ~NamedDeviceMapping(NamedDeviceMapping * this)


/* DeviceMappingManager::NamedDeviceMapping::~NamedDeviceMapping() */

void __thiscall
DeviceMappingManager::NamedDeviceMapping::~NamedDeviceMapping(NamedDeviceMapping *this)

{
  byte *pbVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  DeviceMapping::~DeviceMapping((DeviceMapping *)(this + 0x30));
  pvVar2 = *(void **)(this + 0x18);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    pvVar3 = *(void **)(this + 0x20);
    if (*(void **)(this + 0x20) != pvVar2) {
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
      pvVar4 = *(void **)(this + 0x18);
    }
    *(void **)(this + 0x20) = pvVar2;
    operator_delete(pvVar4);
  }
  if (((byte)*this & 1) != 0) {
    operator_delete(*(void **)(this + 0x10));
    return;
  }
  return;
}


