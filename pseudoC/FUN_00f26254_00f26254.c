// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f26254
// Entry Point: 00f26254
// Size: 312 bytes
// Signature: undefined FUN_00f26254(void)


uint FUN_00f26254(long param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar3 = (undefined8 *)FUN_00f197f8(param_1,param_2,param_4);
  if (*(int *)((long)puVar3 + 0xc) != 0) {
    uVar4 = FUN_00f197f8(param_1,param_3,param_4);
    iVar1 = FUN_00f11034(puVar3,uVar4);
    if (iVar1 != 0) {
      puVar7 = *(undefined8 **)(param_1 + 8);
      uVar4 = *puVar3;
      lVar6 = *(long *)(param_1 + 0x30);
      puVar7[1] = puVar3[1];
      *puVar7 = uVar4;
      lVar5 = *(long *)(param_1 + 8);
      uVar4 = *param_2;
      *(undefined8 *)(lVar5 + 0x18) = param_2[1];
      *(undefined8 *)(lVar5 + 0x10) = uVar4;
      lVar5 = *(long *)(param_1 + 8);
      uVar4 = *param_3;
      *(undefined8 *)(lVar5 + 0x28) = param_3[1];
      *(undefined8 *)(lVar5 + 0x20) = uVar4;
      lVar5 = *(long *)(param_1 + 8);
      if (*(long *)(param_1 + 0x28) - lVar5 < 0x31) {
        FUN_00f0ab24(param_1,3);
        lVar5 = *(long *)(param_1 + 8);
      }
      *(long *)(param_1 + 8) = lVar5 + 0x30;
      FUN_00f0ac4c(param_1,lVar5,1);
      lVar5 = *(long *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar5 + -0x10;
      uVar4 = *(undefined8 *)(lVar5 + -0x10);
      puVar7 = (undefined8 *)((long)puVar7 + (*(long *)(param_1 + 0x30) - lVar6));
      puVar7[1] = *(undefined8 *)(lVar5 + -8);
      *puVar7 = uVar4;
      uVar2 = (*(int **)(param_1 + 8))[3];
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          return 1;
        }
        uVar2 = (uint)(**(int **)(param_1 + 8) != 0);
      }
      return uVar2;
    }
  }
  return 0xffffffff;
}


