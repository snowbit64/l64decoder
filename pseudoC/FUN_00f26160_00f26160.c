// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f26160
// Entry Point: 00f26160
// Size: 244 bytes
// Signature: undefined FUN_00f26160(void)


ulong FUN_00f26160(undefined8 param_1,double *param_2,double *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  
  iVar2 = *(int *)((long)param_2 + 0xc);
  if (iVar2 == *(int *)((long)param_3 + 0xc)) {
    if (iVar2 == 5) {
      dVar7 = *param_2;
      dVar8 = *param_3;
      if (dVar7 == dVar8) {
        return 0;
      }
      uVar3 = *(uint *)((long)dVar7 + 0x14);
      uVar4 = *(uint *)((long)dVar8 + 0x14);
      uVar5 = uVar3;
      if (uVar3 >= uVar4) {
        uVar5 = uVar4;
      }
      uVar1 = 0;
      if (uVar3 != uVar4) {
        uVar1 = (uint)(uVar3 < uVar4) << 0x1f;
      }
      uVar5 = memcmp((void *)((long)dVar7 + 0x18),(void *)((long)dVar8 + 0x18),(ulong)uVar5);
      if (uVar5 != 0) {
        uVar1 = uVar5;
      }
      return (ulong)(uVar1 >> 0x1f);
    }
    if (iVar2 == 3) {
      return (ulong)(*param_2 < *param_3);
    }
    uVar6 = FUN_00f26254(param_1,param_2,param_3,0xf);
    if ((int)uVar6 != -1) {
      return uVar6;
    }
  }
  FUN_00f09ce8(param_1,param_2,param_3,0xf);
  return 0;
}


