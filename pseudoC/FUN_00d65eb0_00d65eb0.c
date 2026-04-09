// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d65eb0
// Entry Point: 00d65eb0
// Size: 296 bytes
// Signature: undefined FUN_00d65eb0(void)


void FUN_00d65eb0(long param_1,undefined8 param_2,int *param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x1e8);
  if (*(uint *)(lVar7 + 0x10) < *(uint *)(param_1 + 0x160)) {
    puVar1 = (uint *)(lVar7 + 0x14);
    uVar6 = *puVar1;
    do {
      uVar5 = *(uint *)(param_1 + 0x15c);
      if (uVar6 < uVar5) {
        (**(code **)(*(long *)(param_1 + 0x1f0) + 8))
                  (param_1,param_2,param_3,param_4,lVar7 + 0x20,puVar1);
        uVar6 = *puVar1;
        uVar5 = *(uint *)(param_1 + 0x15c);
      }
      if (uVar6 != uVar5) {
        return;
      }
      cVar4 = (**(code **)(*(long *)(param_1 + 0x1f8) + 8))(param_1,lVar7 + 0x20);
      if (cVar4 == '\0') {
        if (*(char *)(lVar7 + 0x18) != '\0') {
          return;
        }
        iVar3 = *param_3;
        *(undefined *)(lVar7 + 0x18) = 1;
        *param_3 = iVar3 + -1;
        return;
      }
      if (*(char *)(lVar7 + 0x18) != '\0') {
        iVar3 = *param_3;
        *(undefined *)(lVar7 + 0x18) = 0;
        *param_3 = iVar3 + 1;
      }
      uVar6 = 0;
      uVar2 = *(uint *)(param_1 + 0x160);
      uVar5 = *(int *)(lVar7 + 0x10) + 1;
      *(uint *)(lVar7 + 0x10) = uVar5;
      *(undefined4 *)(lVar7 + 0x14) = 0;
    } while (uVar5 < uVar2);
  }
  return;
}


