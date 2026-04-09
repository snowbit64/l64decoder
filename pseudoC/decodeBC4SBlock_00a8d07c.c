// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeBC4SBlock
// Entry Point: 00a8d07c
// Size: 684 bytes
// Signature: undefined __cdecl decodeBC4SBlock(BC4Block * param_1, signed * param_2, uint param_3, uint param_4)


/* DXTUtil::decodeBC4SBlock(DXTUtil::BC4Block const*, signed char*, unsigned int, unsigned int) */

void DXTUtil::decodeBC4SBlock(BC4Block *param_1,signed *param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined2 local_30;
  char local_2e;
  char local_2d;
  char local_2c;
  char local_2b;
  char local_2a;
  char local_29;
  long local_28;
  
  lVar9 = tpidr_el0;
  local_28 = *(long *)(lVar9 + 0x28);
  uVar12 = *(ulong *)param_1;
  iVar2 = (int)uVar12 << 0x18;
  iVar8 = (int)(char)uVar12;
  iVar7 = ((int)uVar12 << 0x10) >> 0x18;
  local_30 = (short)uVar12;
  iVar6 = iVar2 >> 0x16;
  iVar2 = iVar2 >> 0x17;
  if (iVar7 < iVar8) {
    iVar1 = iVar8 * 5 + iVar7 * 2;
    iVar5 = (iVar7 + iVar8 * 6) * 0x4925;
    local_2e = (char)(iVar5 >> 0x11) - (char)(iVar5 >> 0x1f);
    iVar5 = iVar8 * 3 + iVar7 * 4;
    local_2d = ((char)(iVar1 / 7) + (char)(iVar1 >> 0x1f)) -
               (char)((long)iVar1 * 0x92492493 >> 0x3f);
    iVar6 = (iVar7 * 3 + iVar6) * 0x4925;
    iVar2 = (iVar7 * 5 + iVar2) * 0x4925;
    iVar8 = (iVar8 + iVar7 * 6) * 0x4925;
    local_2c = (char)(iVar6 >> 0x11) - (char)(iVar6 >> 0x1f);
    local_2b = ((char)(iVar5 / 7) + (char)(iVar5 >> 0x1f)) -
               (char)((long)iVar5 * 0x92492493 >> 0x3f);
    local_2a = (char)(iVar2 >> 0x11) - (char)(iVar2 >> 0x1f);
    local_29 = (char)(iVar8 >> 0x11) - (char)(iVar8 >> 0x1f);
  }
  else {
    iVar1 = iVar8 * 3 + iVar7 * 2;
    iVar8 = iVar8 + iVar7 * 4;
    iVar6 = (iVar7 + iVar6) * 0x6667;
    iVar2 = (iVar7 * 3 + iVar2) * 0x6667;
    local_2d = ((char)(iVar1 / 5) + (char)(iVar1 >> 0x1f)) -
               (char)((long)iVar1 * 0x66666667 >> 0x3f);
    local_2e = (char)(iVar6 >> 0x11) - (char)(iVar6 >> 0x1f);
    local_2c = (char)(iVar2 >> 0x11) - (char)(iVar2 >> 0x1f);
    local_2b = ((char)(iVar8 / 5) + (char)(iVar8 >> 0x1f)) -
               (char)((long)iVar8 * 0x66666667 >> 0x3f);
    local_29 = '\x7f';
    local_2a = -0x80;
  }
  *param_2 = *(signed *)((long)&local_30 + (uVar12 >> 0x10 & 7));
  param_2[param_3] = *(signed *)((long)&local_30 + (*(ulong *)param_1 >> 0x13 & 7));
  uVar3 = param_3 * 2;
  param_2[uVar3] = *(signed *)((long)&local_30 + (*(ulong *)param_1 >> 0x16 & 7));
  uVar10 = param_3 * 3;
  param_2[uVar10] = *(signed *)((long)&local_30 + (*(ulong *)param_1 >> 0x19 & 7));
  param_2[param_4] = *(signed *)((long)&local_30 + (*(ulong *)param_1 >> 0x1c & 7));
  param_2[param_4 + param_3] = *(signed *)((long)&local_30 + (*(ulong *)param_1 >> 0x1f & 7));
  param_2[uVar3 + param_4] = *(signed *)((long)&local_30 + (*(ulong *)param_1 >> 0x22 & 7));
  param_2[uVar10 + param_4] = *(signed *)((long)&local_30 + (*(ulong *)param_1 >> 0x25 & 7));
  uVar4 = param_4 * 2;
  param_2[uVar4] = *(signed *)((long)&local_30 + (*(ulong *)param_1 >> 0x28 & 7));
  param_2[uVar4 + param_3] = *(signed *)((long)&local_30 + (*(ulong *)param_1 >> 0x2b & 7));
  param_2[uVar4 + uVar3] = *(signed *)((long)&local_30 + (*(ulong *)param_1 >> 0x2e & 7));
  uVar11 = param_4 * 3;
  param_2[uVar4 + uVar10] = *(signed *)((long)&local_30 + (*(ulong *)param_1 >> 0x31 & 7));
  param_2[uVar11] = *(signed *)((long)&local_30 + (*(ulong *)param_1 >> 0x34 & 7));
  param_2[uVar11 + param_3] = *(signed *)((long)&local_30 + (*(ulong *)param_1 >> 0x37 & 7));
  param_2[uVar11 + uVar3] = *(signed *)((long)&local_30 + (*(ulong *)param_1 >> 0x3a & 7));
  param_2[uVar11 + uVar10] = *(signed *)((long)&local_30 + (*(ulong *)param_1 >> 0x3d));
  if (*(long *)(lVar9 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


