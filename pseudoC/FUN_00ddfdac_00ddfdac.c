// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ddfdac
// Entry Point: 00ddfdac
// Size: 304 bytes
// Signature: undefined FUN_00ddfdac(void)


void FUN_00ddfdac(void *param_1,long param_2,int param_3,int param_4,undefined2 *param_5,
                 uint param_6)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar6 = (ulong)param_6;
  uVar7 = param_6;
  uVar5 = param_6;
  if (0 < (int)param_6) {
    uVar8 = 0;
    do {
      uVar4 = uVar8;
      if (*(short *)((long)param_1 + uVar8 * 2) == -1) break;
      uVar8 = uVar8 + 1;
      uVar4 = uVar6;
    } while (uVar6 != uVar8);
    uVar7 = (uint)uVar4;
    uVar8 = 0;
    do {
      if (*(short *)(param_2 + uVar8 * 2) == -1) {
        uVar5 = (uint)uVar8;
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar6 != uVar8);
  }
  uVar6 = -(ulong)(param_6 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_6 << 1;
  memset(param_5,0xff,uVar6);
  if ((int)uVar7 < 2) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulong)(uVar7 - 1);
    uVar4 = uVar8;
    puVar3 = param_5;
    do {
      param_3 = param_3 + 1;
      iVar1 = 0;
      if (uVar7 != 0) {
        iVar1 = param_3 / (int)uVar7;
      }
      uVar4 = uVar4 - 1;
      *puVar3 = *(undefined2 *)((long)param_1 + (long)(int)(param_3 - iVar1 * uVar7) * 2);
      puVar3 = puVar3 + 1;
    } while (uVar4 != 0);
  }
  if (1 < (int)uVar5) {
    uVar7 = 1;
    puVar3 = param_5 + uVar8;
    do {
      iVar1 = param_4 + uVar7;
      uVar7 = uVar7 + 1;
      iVar2 = 0;
      if (uVar5 != 0) {
        iVar2 = iVar1 / (int)uVar5;
      }
      *puVar3 = *(undefined2 *)(param_2 + (long)(int)(iVar1 - iVar2 * uVar5) * 2);
      puVar3 = puVar3 + 1;
    } while (uVar5 != uVar7);
  }
  memcpy(param_1,param_5,uVar6);
  return;
}


