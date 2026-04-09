// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f10138
// Entry Point: 00f10138
// Size: 320 bytes
// Signature: undefined FUN_00f10138(void)


undefined8 * FUN_00f10138(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x18);
  puVar7 = (undefined8 *)(lVar8 + (long)(int)param_2 * 8 + 0x60);
  puVar4 = (undefined8 *)*puVar7;
  if (puVar4 == (undefined8 *)0x0) {
    iVar2 = *(int *)(&DAT_02124868 + (ulong)(param_2 & 0xff) * 4);
    puVar4 = (undefined8 *)(**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 0x18),0,0,0x3fe8);
    if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00f0a90c(param_1,4);
    }
    iVar2 = iVar2 + 8;
    puVar4[5] = 0;
    iVar3 = 0;
    if ((long)iVar2 != 0) {
      iVar3 = (int)(0x3fb0 / (ulong)(long)iVar2);
    }
    *(undefined4 *)(puVar4 + 4) = 0x3fe8;
    *(int *)((long)puVar4 + 0x24) = iVar2;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *(undefined8 **)(lVar8 + (ulong)(param_2 & 0xff) * 8 + 0x60) = puVar4;
    *(int *)(puVar4 + 6) = (iVar3 + -1) * iVar2;
    *(undefined4 *)((long)puVar4 + 0x34) = 0;
    uVar1 = *(uint *)(puVar4 + 6);
  }
  else {
    uVar1 = *(uint *)(puVar4 + 6);
  }
  if ((int)uVar1 < 0) {
    puVar5 = (undefined8 *)puVar4[5];
    puVar4[5] = *puVar5;
    iVar2 = *(int *)((long)puVar4 + 0x34);
    *puVar5 = puVar4;
    lVar8 = puVar4[5];
    *(int *)((long)puVar4 + 0x34) = iVar2 + 1;
  }
  else {
    uVar6 = (ulong)uVar1;
    uVar1 = uVar1 - *(int *)((long)puVar4 + 0x24);
    puVar5 = (undefined8 *)((long)puVar4 + uVar6 + 0x38);
    *(uint *)(puVar4 + 6) = uVar1;
    iVar2 = *(int *)((long)puVar4 + 0x34);
    *puVar5 = puVar4;
    lVar8 = puVar4[5];
    *(int *)((long)puVar4 + 0x34) = iVar2 + 1;
  }
  if ((lVar8 == 0) && ((int)uVar1 < 0)) {
    *puVar7 = puVar4[1];
    if ((undefined8 *)puVar4[1] != (undefined8 *)0x0) {
      *(undefined8 *)puVar4[1] = 0;
    }
    puVar4[1] = 0;
    return puVar5 + 1;
  }
  return puVar5 + 1;
}


