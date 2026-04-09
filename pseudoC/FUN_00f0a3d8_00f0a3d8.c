// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0a3d8
// Entry Point: 00f0a3d8
// Size: 312 bytes
// Signature: undefined FUN_00f0a3d8(void)


void FUN_00f0a3d8(long param_1,int param_2,void *param_3,long param_4,undefined8 param_5,
                 code *param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  
  memset(param_3,0xff,param_4 << 2);
  iVar5 = *(int *)(param_1 + 0x60);
  if (0 < iVar5) {
    lVar3 = 0;
    lVar4 = *(long *)(param_1 + 0x10);
    do {
      uVar2 = *(uint *)(lVar4 + lVar3 * 4);
      if ((uVar2 & 0xff) == 0x45) {
        uVar6 = *(ulong *)(param_1 + 0x20);
        if (uVar6 != 0) {
          uVar6 = (ulong)(*(int *)(*(long *)(param_1 + 0x28) +
                                  (long)(int)((uint)lVar3 >>
                                             (ulong)(*(uint *)(param_1 + 0x78) & 0x1f)) * 4) +
                         (uint)*(byte *)(uVar6 + lVar3));
        }
        uVar6 = -(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar6 & 0xffffffff) << 2;
        iVar5 = (int)uVar2 >> 8;
        iVar1 = *(int *)((long)param_3 + uVar6);
        if (iVar5 <= iVar1) {
          iVar5 = iVar1;
        }
        *(int *)((long)param_3 + uVar6) = iVar5;
        iVar5 = *(int *)(param_1 + 0x60);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar5);
  }
  lVar3 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar3 = *(long *)(param_1 + 0x48) + 0x18;
  }
  (*param_6)(param_5,lVar3,*(undefined4 *)(param_1 + 0x7c),param_2,param_3,param_4);
  if (0 < *(int *)(param_1 + 100)) {
    lVar3 = 0;
    do {
      FUN_00f0a3d8(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar3 * 8),param_2 + 1,param_3,
                   param_4,param_5,param_6);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 100));
  }
  return;
}


