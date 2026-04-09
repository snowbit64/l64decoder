// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00b1f010
// Entry Point: 00b1f010
// Size: 220 bytes
// Signature: undefined FUN_00b1f010(void)


void FUN_00b1f010(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  DeviceMappingManager::DeviceMapping::~DeviceMapping((DeviceMapping *)(param_2 + 0x30));
  pvVar2 = *(void **)(param_2 + 0x18);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    pvVar3 = *(void **)(param_2 + 0x20);
    if (*(void **)(param_2 + 0x20) != pvVar2) {
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
      pvVar4 = *(void **)(param_2 + 0x18);
    }
    *(void **)(param_2 + 0x20) = pvVar2;
    operator_delete(pvVar4);
  }
  if ((*param_2 & 1) != 0) {
    operator_delete(*(void **)(param_2 + 0x10));
    return;
  }
  return;
}


