// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_InitEncoder
// Entry Point: 00e829f0
// Size: 228 bytes
// Signature: undefined silk_InitEncoder(void)


int silk_InitEncoder(void *param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  
  memset(param_1,0,0x43f8);
  iVar5 = silk_init_encoder(param_1,param_2);
  iVar6 = silk_init_encoder((long)param_1 + 0x21d0,param_2);
  uVar7 = 0;
  *(undefined8 *)((long)param_1 + 0x43e0) = 0x100000001;
  *param_3 = 0x100000001;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)((long)param_1 + 0x11cc);
  *(undefined8 *)((long)param_3 + 0xc) = *(undefined8 *)((long)param_1 + 0x11d4);
  *(undefined4 *)((long)param_3 + 0x14) = *(undefined4 *)((long)param_1 + 0x11dc);
  uVar8 = NEON_rev64(*(undefined8 *)((long)param_1 + 0x1200),4);
  param_3[3] = uVar8;
  iVar1 = *(int *)((long)param_1 + 0x11e0);
  uVar2 = *(undefined4 *)((long)param_1 + 0x1210);
  uVar3 = *(undefined4 *)((long)param_1 + 0x17dc);
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)((long)param_1 + 0x1208);
  *(undefined4 *)((long)param_3 + 0x24) = uVar2;
  uVar2 = *(undefined4 *)((long)param_1 + 0x17d0);
  *(undefined4 *)(param_3 + 5) = uVar3;
  uVar3 = *(undefined4 *)((long)param_1 + 0x1244);
  uVar4 = *(undefined4 *)((long)param_1 + 0x11b8);
  *(undefined4 *)(param_3 + 6) = uVar2;
  *(undefined4 *)((long)param_3 + 0x34) = uVar3;
  *(int *)(param_3 + 9) = (short)iVar1 * 1000;
  *(undefined4 *)((long)param_3 + 0x4c) = uVar4;
  if (iVar1 == 0x10) {
    uVar7 = (uint)(*(int *)((long)param_1 + 0x1c) == 0);
  }
  *(uint *)(param_3 + 10) = uVar7;
  return iVar6 + iVar5;
}


