// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_state_borders_fill
// Entry Point: 00df7c30
// Size: 960 bytes
// Signature: undefined oc_state_borders_fill(void)


void oc_state_borders_fill(long param_1,int param_2)

{
  size_t sVar1;
  byte *pbVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar7 = param_1 + (long)param_2 * 0x48;
  iVar4 = *(int *)(lVar7 + 0x1a8);
  lVar9 = (long)iVar4 * (long)*(int *)(lVar7 + 0x1a4);
  lVar8 = (long)param_2;
  if (lVar9 != 0) {
    lVar10 = 0;
    lVar11 = *(long *)(lVar7 + 0x1b0);
    iVar5 = *(int *)(param_1 + lVar8 * 0x48 + 0x1a0);
    do {
      pbVar2 = (byte *)(lVar11 + lVar10);
      plVar3 = (long *)(lVar11 + iVar5 + lVar10);
      lVar10 = lVar10 + iVar4;
      *(ulong *)(pbVar2 + -0x10) = (ulong)*pbVar2 * 0x101010101010101;
      *(ulong *)(pbVar2 + -8) = (ulong)*pbVar2 * 0x101010101010101;
      lVar12 = (ulong)*(byte *)((long)plVar3 + -1) * 0x101010101010101;
      *plVar3 = lVar12;
      plVar3[1] = lVar12;
    } while (lVar9 - lVar10 != 0);
  }
  lVar9 = (long)*(int *)(lVar7 + 0x1a8);
  if (*(int *)(lVar7 + 0x1a8) != 0) {
    lVar10 = 0;
    iVar4 = *(int *)(lVar7 + 0x1a4);
    lVar7 = *(long *)(lVar7 + 0x1b0);
    sVar1 = (long)*(int *)(param_1 + lVar8 * 0x48 + 0x1a0) + 0x20;
    pvVar6 = (void *)(lVar7 + -0x10);
    do {
      memcpy((void *)((long)pvVar6 - lVar9),pvVar6,sVar1);
      memcpy((void *)(lVar7 + iVar4 * lVar9 + -0x10 + lVar10),
             (void *)(lVar7 + ((long)iVar4 + -1) * lVar9 + -0x10 + lVar10),sVar1);
      lVar10 = lVar10 + lVar9;
      pvVar6 = (void *)((long)pvVar6 - lVar9);
    } while (lVar9 * 0x10 - lVar10 != 0);
  }
  lVar7 = param_1 + lVar8 * 0x48;
  iVar4 = *(int *)(lVar7 + 0x1c0);
  lVar9 = (long)iVar4 * (long)*(int *)(lVar7 + 0x1bc);
  if (lVar9 != 0) {
    lVar10 = 0;
    lVar11 = *(long *)(lVar7 + 0x1c8);
    iVar5 = *(int *)(param_1 + lVar8 * 0x48 + 0x1b8);
    uVar13 = 0x10L >> (~*(uint *)(param_1 + 0x30) & 1);
    do {
      pvVar6 = (void *)(lVar11 + iVar5 + lVar10);
      memset((void *)((lVar11 - uVar13) + lVar10),(uint)*(byte *)(lVar11 + lVar10),uVar13);
      memset(pvVar6,(uint)*(byte *)((long)pvVar6 + -1),uVar13);
      lVar10 = lVar10 + iVar4;
    } while (lVar9 - lVar10 != 0);
  }
  lVar9 = (long)*(int *)(lVar7 + 0x1c0);
  lVar10 = (0x10UL >> ((*(uint *)(param_1 + 0x30) >> 1 ^ 0xffffffff) & 1)) * lVar9;
  if (lVar10 != 0) {
    lVar11 = 0;
    iVar4 = *(int *)(lVar7 + 0x1bc);
    lVar7 = *(long *)(lVar7 + 0x1c8);
    uVar13 = 0x10L >> (~*(uint *)(param_1 + 0x30) & 1);
    sVar1 = (long)*(int *)(param_1 + lVar8 * 0x48 + 0x1b8) + uVar13 * 2;
    pvVar6 = (void *)(lVar7 - uVar13);
    do {
      memcpy((void *)((long)pvVar6 - lVar9),pvVar6,sVar1);
      memcpy((void *)(lVar7 + (iVar4 * lVar9 - uVar13) + lVar11),
             (void *)(((lVar7 + ((long)iVar4 + -1) * lVar9) - uVar13) + lVar11),sVar1);
      lVar11 = lVar11 + lVar9;
      pvVar6 = (void *)((long)pvVar6 - lVar9);
    } while (lVar10 - lVar11 != 0);
  }
  lVar7 = param_1 + lVar8 * 0x48;
  iVar4 = *(int *)(lVar7 + 0x1d8);
  lVar9 = (long)iVar4 * (long)*(int *)(lVar7 + 0x1d4);
  if (lVar9 != 0) {
    lVar10 = 0;
    lVar11 = *(long *)(lVar7 + 0x1e0);
    iVar5 = *(int *)(param_1 + lVar8 * 0x48 + 0x1d0);
    uVar13 = 0x10L >> (~*(uint *)(param_1 + 0x30) & 1);
    do {
      pvVar6 = (void *)(lVar11 + iVar5 + lVar10);
      memset((void *)((lVar11 - uVar13) + lVar10),(uint)*(byte *)(lVar11 + lVar10),uVar13);
      memset(pvVar6,(uint)*(byte *)((long)pvVar6 + -1),uVar13);
      lVar10 = lVar10 + iVar4;
    } while (lVar9 - lVar10 != 0);
  }
  lVar9 = (long)*(int *)(lVar7 + 0x1d8);
  lVar10 = (0x10UL >> ((*(uint *)(param_1 + 0x30) >> 1 ^ 0xffffffff) & 1)) * lVar9;
  if (lVar10 != 0) {
    lVar11 = 0;
    iVar4 = *(int *)(lVar7 + 0x1d4);
    lVar7 = *(long *)(lVar7 + 0x1e0);
    uVar13 = 0x10L >> (~*(uint *)(param_1 + 0x30) & 1);
    sVar1 = (long)*(int *)(param_1 + lVar8 * 0x48 + 0x1d0) + uVar13 * 2;
    pvVar6 = (void *)(lVar7 - uVar13);
    do {
      memcpy((void *)((long)pvVar6 - lVar9),pvVar6,sVar1);
      memcpy((void *)(lVar7 + (iVar4 * lVar9 - uVar13) + lVar11),
             (void *)(((lVar7 + ((long)iVar4 + -1) * lVar9) - uVar13) + lVar11),sVar1);
      lVar11 = lVar11 + lVar9;
      pvVar6 = (void *)((long)pvVar6 - lVar9);
    } while (lVar10 - lVar11 != 0);
  }
  return;
}


