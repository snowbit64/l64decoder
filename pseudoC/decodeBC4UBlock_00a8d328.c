// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeBC4UBlock
// Entry Point: 00a8d328
// Size: 700 bytes
// Signature: undefined __cdecl decodeBC4UBlock(BC4Block * param_1, uchar * param_2, uint param_3, uint param_4)


/* DXTUtil::decodeBC4UBlock(DXTUtil::BC4Block const*, unsigned char*, unsigned int, unsigned int) */

void DXTUtil::decodeBC4UBlock(BC4Block *param_1,uchar *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  undefined2 local_20;
  undefined local_1e;
  undefined local_1d;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  long local_18;
  
  lVar11 = tpidr_el0;
  local_18 = *(long *)(lVar11 + 0x28);
  uVar12 = *(ulong *)param_1;
  uVar5 = (uint)uVar12 & 0xff;
  uVar10 = (uint)uVar12 >> 8 & 0xff;
  local_20 = (short)uVar12;
  if (uVar10 < uVar5) {
    uVar9 = uVar10 + uVar5 * 6;
    uVar1 = uVar10 * 2 + uVar5 * 5;
    uVar2 = uVar10 * 3 + uVar5 * 4;
    uVar6 = uVar1 / 7;
    uVar7 = uVar9 / 7;
    uVar3 = uVar10 * 4 + uVar5 * 3;
    uVar8 = uVar2 / 7;
    uVar4 = uVar10 * 5 + uVar5 * 2;
    uVar5 = uVar5 + uVar10 * 6;
    local_1e = (undefined)(uVar7 + ((uVar9 - uVar7 & 0xfffe) >> 1) >> 2);
    uVar10 = uVar3 / 7;
    local_1d = (undefined)(uVar6 + ((uVar1 - uVar6 & 0xfffe) >> 1) >> 2);
    uVar1 = uVar4 / 7;
    uVar6 = uVar5 / 7;
    local_1c = (undefined)(uVar8 + ((uVar2 - uVar8 & 0xfffe) >> 1) >> 2);
    local_1b = (undefined)(uVar10 + ((uVar3 - uVar10 & 0xfffe) >> 1) >> 2);
    local_1a = (undefined)(uVar1 + ((uVar4 - uVar1 & 0xfffe) >> 1) >> 2);
    local_19 = (undefined)(uVar6 + ((uVar5 - uVar6 & 0xfffe) >> 1) >> 2);
  }
  else {
    local_1a = 0;
    local_1e = (undefined)((uVar10 + uVar5 * 4) / 5);
    local_1d = (undefined)((uVar10 * 2 + uVar5 * 3) / 5);
    local_1c = (undefined)((uVar10 * 3 + uVar5 * 2) / 5);
    local_1b = (undefined)((uVar5 + uVar10 * 4) / 5);
    local_19 = 0xff;
  }
  *param_2 = *(uchar *)((long)&local_20 + (uVar12 >> 0x10 & 7));
  param_2[param_3] = *(uchar *)((long)&local_20 + (*(ulong *)param_1 >> 0x13 & 7));
  uVar5 = param_3 * 2;
  param_2[uVar5] = *(uchar *)((long)&local_20 + (*(ulong *)param_1 >> 0x16 & 7));
  uVar1 = param_3 * 3;
  param_2[uVar1] = *(uchar *)((long)&local_20 + (*(ulong *)param_1 >> 0x19 & 7));
  param_2[param_4] = *(uchar *)((long)&local_20 + (*(ulong *)param_1 >> 0x1c & 7));
  param_2[param_4 + param_3] = *(uchar *)((long)&local_20 + (*(ulong *)param_1 >> 0x1f & 7));
  param_2[uVar5 + param_4] = *(uchar *)((long)&local_20 + (*(ulong *)param_1 >> 0x22 & 7));
  param_2[uVar1 + param_4] = *(uchar *)((long)&local_20 + (*(ulong *)param_1 >> 0x25 & 7));
  uVar10 = param_4 * 2;
  param_2[uVar10] = *(uchar *)((long)&local_20 + (*(ulong *)param_1 >> 0x28 & 7));
  param_2[uVar10 + param_3] = *(uchar *)((long)&local_20 + (*(ulong *)param_1 >> 0x2b & 7));
  param_2[uVar10 + uVar5] = *(uchar *)((long)&local_20 + (*(ulong *)param_1 >> 0x2e & 7));
  uVar2 = param_4 * 3;
  param_2[uVar10 + uVar1] = *(uchar *)((long)&local_20 + (*(ulong *)param_1 >> 0x31 & 7));
  param_2[uVar2] = *(uchar *)((long)&local_20 + (*(ulong *)param_1 >> 0x34 & 7));
  param_2[uVar2 + param_3] = *(uchar *)((long)&local_20 + (*(ulong *)param_1 >> 0x37 & 7));
  param_2[uVar2 + uVar5] = *(uchar *)((long)&local_20 + (*(ulong *)param_1 >> 0x3a & 7));
  param_2[uVar2 + uVar1] = *(uchar *)((long)&local_20 + (*(ulong *)param_1 >> 0x3d));
  if (*(long *)(lVar11 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


