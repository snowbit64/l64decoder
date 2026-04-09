// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DecompressColour
// Entry Point: 00de96cc
// Size: 596 bytes
// Signature: undefined __cdecl DecompressColour(uchar * param_1, void * param_2, bool param_3)


/* squish::DecompressColour(unsigned char*, void const*, bool) */

void squish::DecompressColour(uchar *param_1,void *param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ushort uVar18;
  ushort uVar19;
  undefined local_28;
  undefined local_27;
  byte local_26;
  undefined local_25;
  undefined local_24;
  undefined local_23;
  byte local_22;
  undefined local_21;
  undefined local_20;
  undefined local_1f;
  undefined local_1e;
  undefined local_1d;
  undefined2 local_1c;
  undefined local_1a;
  char local_19;
  long local_18;
  
  lVar17 = tpidr_el0;
  local_18 = *(long *)(lVar17 + 0x28);
                    /* WARNING: Load size is inaccurate */
  local_25 = 0xff;
                    /* WARNING: Load size is inaccurate */
  bVar9 = *(byte *)((long)param_2 + 1);
  uVar19 = *param_2;
  local_21 = 0xff;
  bVar10 = *(byte *)(ushort *)((long)param_2 + 2);
  bVar11 = *(byte *)((long)param_2 + 3);
  uVar18 = *(ushort *)((long)param_2 + 2);
  uVar13 = (uint)*param_2 << 3;
  uVar1 = *param_2 >> 2 & 7;
  uVar14 = (uint)bVar10 << 3;
  uVar2 = bVar10 >> 2 & 7;
  uVar15 = bVar9 & 0xf8 | (uint)(bVar9 >> 5);
  uVar3 = uVar19 >> 3 & 0xfc | bVar9 >> 1 & 3;
  uVar16 = bVar11 & 0xf8 | (uint)(bVar11 >> 5);
  uVar4 = uVar18 >> 3 & 0xfc | bVar11 >> 1 & 3;
  local_28 = (char)uVar15;
  local_26 = (byte)uVar13 | (byte)uVar1;
  local_27 = (char)uVar3;
  local_24 = (char)uVar16;
  local_23 = (char)uVar4;
  local_22 = (byte)uVar14 | (byte)uVar2;
  if (uVar19 <= uVar18 && param_3) {
    local_1a = 0;
    local_1c = 0;
    local_20 = (char)(uVar16 + uVar15 >> 1);
    local_1f = (char)(uVar4 + uVar3 >> 1);
    local_1e = (char)((uVar14 & 0xf8 | uVar2) + (uVar13 & 0xf8 | uVar1) >> 1);
  }
  else {
    uVar1 = uVar13 & 0xf8 | uVar1;
    local_20 = (char)((uVar16 + uVar15 * 2) / 3);
    local_1f = (char)((uVar4 + uVar3 * 2) / 3);
    local_1a = (undefined)((uVar1 + (uVar14 & 0xf8 | uVar2) * 2) / 3);
    local_1c = CONCAT11((char)((uVar3 + uVar4 * 2) / 3),(char)((uVar15 + uVar16 * 2) / 3));
    local_1e = (char)((uVar1 * 2 + (uVar14 & 0xf8 | uVar2)) / 3);
  }
  bVar9 = *(byte *)((long)param_2 + 4);
  bVar10 = *(byte *)((long)param_2 + 5);
  local_19 = (uVar19 <= uVar18 && param_3) + '\x01';
  local_1d = 0xff;
  uVar5 = *(undefined4 *)(&local_28 + ((ulong)bVar9 & 0xc));
  uVar6 = *(undefined4 *)(&local_28 + ((ulong)(bVar9 >> 2) & 0xc));
  uVar7 = *(undefined4 *)(&local_28 + ((ulong)(bVar9 >> 4) & 0xc));
  bVar11 = *(byte *)((long)param_2 + 6);
  bVar12 = *(byte *)((long)param_2 + 7);
  *(undefined4 *)param_1 = *(undefined4 *)(&local_28 + ((ulong)bVar9 & 3) * 4);
  *(undefined4 *)(param_1 + 4) = uVar5;
  *(undefined4 *)(param_1 + 8) = uVar6;
  *(undefined4 *)(param_1 + 0xc) = uVar7;
  uVar5 = *(undefined4 *)(&local_28 + ((ulong)bVar10 & 0xc));
  uVar6 = *(undefined4 *)(&local_28 + ((ulong)(bVar10 >> 2) & 0xc));
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(&local_28 + ((ulong)bVar10 & 3) * 4);
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  uVar5 = *(undefined4 *)(&local_28 + ((ulong)(bVar10 >> 4) & 0xc));
  uVar7 = *(undefined4 *)(&local_28 + ((ulong)bVar11 & 3) * 4);
  uVar8 = *(undefined4 *)(&local_28 + ((ulong)bVar11 & 0xc));
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  uVar5 = *(undefined4 *)(&local_28 + ((ulong)(bVar11 >> 2) & 0xc));
  uVar6 = *(undefined4 *)(&local_28 + ((ulong)(bVar11 >> 4) & 0xc));
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  uVar7 = *(undefined4 *)(&local_28 + ((ulong)bVar12 & 0xc));
  uVar8 = *(undefined4 *)(&local_28 + ((ulong)bVar12 & 3) * 4);
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  uVar5 = *(undefined4 *)(&local_28 + ((ulong)(bVar12 >> 2) & 0xc));
  uVar6 = *(undefined4 *)(&local_28 + ((ulong)(bVar12 >> 4) & 0xc));
  *(undefined4 *)(param_1 + 0x30) = uVar8;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  if (*(long *)(lVar17 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


