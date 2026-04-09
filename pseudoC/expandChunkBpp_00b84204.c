// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: expandChunkBpp
// Entry Point: 00b84204
// Size: 808 bytes
// Signature: undefined __thiscall expandChunkBpp(ChunkedBitSquareChunk * this, uint param_1)


/* ChunkedBitSquareChunk::expandChunkBpp(unsigned int) */

code ** __thiscall ChunkedBitSquareChunk::expandChunkBpp(ChunkedBitSquareChunk *this,uint param_1)

{
  ChunkedBitSquareChunk CVar1;
  ChunkedBitSquareChunk CVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  code **ppcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  code *pcVar14;
  byte *pbVar15;
  uint uVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  
  ppcVar9 = (code **)operator_new((ulong)(param_1 << 7 | 0x20));
  CVar1 = this[0x13];
  CVar2 = this[0x10];
  *(char *)(ppcVar9 + 2) = (char)param_1;
  uVar18 = (uint)(byte)CVar2 + (uint)(byte)CVar1;
  uVar7 = uVar18 - param_1;
  *(char *)((long)ppcVar9 + 0x13) = (char)uVar7;
  if ((uVar7 & 0xff) == 0) {
    uVar18 = ~(-1 << (ulong)(uVar18 & 0x1f));
    *(undefined2 *)((long)ppcVar9 + 0x11) = 0;
    *ppcVar9 = readValueNoPalette;
    ppcVar9[1] = writeValueNoPalette;
  }
  else {
    CVar1 = this[0x12];
    uVar20 = (ulong)(byte)CVar1;
    *(ChunkedBitSquareChunk *)((long)ppcVar9 + 0x12) = CVar1;
    if ((CVar1 == (ChunkedBitSquareChunk)0x0) ||
       (memcpy((void *)((long)ppcVar9 + 0x14),this + 0x14,uVar20 << 1), (byte)CVar1 < 4)) {
      memset((void *)((long)ppcVar9 + uVar20 * 2 + 0x14),0xff,(uVar20 * -2 + 6 & 0x1fffffffe) + 2);
    }
    uVar7 = (param_1 + (uVar7 & 0xff)) - 1;
    if (1 < uVar7) {
      uVar7 = 2;
    }
    *(byte *)((long)ppcVar9 + 0x11) = ~(byte)(-1 << (ulong)(param_1 & 0x1f));
    pcVar14 = *(code **)(s_pWriteValueFns + (ulong)param_1 * 8 + (ulong)uVar7 * 0x18);
    uVar7 = -1 << (ulong)(uVar18 & 0x1f);
    uVar18 = ~uVar7;
    *ppcVar9 = (code *)(&s_pReadValueFns)[param_1];
    ppcVar9[1] = pcVar14;
    if ((byte)CVar2 + 1 == param_1) {
      if (param_1 == 1) {
        uVar4 = *(ushort *)(this + 0x14);
        uVar12 = 0;
        uVar5 = *(ushort *)((long)ppcVar9 + 0x14);
        do {
          pbVar15 = (byte *)((long)ppcVar9 + (ulong)(uVar12 >> 3) + 0x1c);
          bVar17 = *pbVar15;
          uVar11 = uVar7 & *(ushort *)
                            ((long)ppcVar9 + ((ulong)(bVar17 >> (uVar12 & 7)) & 1) * 2 + 0x14) |
                   uVar4 & uVar18;
          if (uVar11 == uVar5) {
            bVar17 = bVar17 & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
LAB_00b844b4:
            *pbVar15 = bVar17;
          }
          else {
            if (uVar11 == *(ushort *)((long)ppcVar9 + 0x16)) {
              bVar17 = bVar17 | (byte)(1 << (ulong)(uVar12 & 7));
              goto LAB_00b844b4;
            }
            if (*(char *)((long)ppcVar9 + 0x12) == '\x01') {
              *(short *)((long)ppcVar9 + 0x16) = (short)uVar11;
              bVar17 = bVar17 | (byte)(1 << (ulong)(uVar12 & 7));
              *(undefined *)((long)ppcVar9 + 0x12) = 2;
              goto LAB_00b844b4;
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != 0x400);
      }
      else if (param_1 == 2) {
        uVar11 = 0;
        uVar12 = 0;
        do {
          uVar16 = uVar11 & 6;
          pbVar15 = (byte *)((long)ppcVar9 + (ulong)(uVar12 >> 2) + 0x1c);
          bVar17 = *pbVar15;
          uVar6 = uVar7 & ((ushort *)((long)ppcVar9 + 0x14))[(ulong)(bVar17 >> uVar16) & 3] |
                  *(ushort *)
                   (this + ((ulong)((byte)this[(ulong)(uVar12 >> 3) + 0x1c] >> (uVar12 & 7)) & 1) *
                           2 + 0x14) & uVar18;
          uVar10 = (uint)*(ushort *)((long)ppcVar9 + 0x1a);
          if (((uVar6 == *(ushort *)((long)ppcVar9 + 0x14) ||
               uVar6 == *(ushort *)((long)ppcVar9 + 0x16)) || uVar6 == *(ushort *)(ppcVar9 + 3)) ||
              uVar6 == uVar10) {
            uVar13 = 2;
            if (uVar6 != *(ushort *)(ppcVar9 + 3) && uVar6 != uVar10) {
              uVar13 = 0;
            }
            uVar20 = (ulong)(uVar13 | (uVar6 == *(ushort *)((long)ppcVar9 + 0x16) || uVar6 == uVar10
                                      ));
LAB_00b8434c:
            *pbVar15 = (byte)((int)uVar20 << uVar16) | bVar17 & ((byte)(3 << uVar16) ^ 0xff);
          }
          else {
            bVar3 = *(byte *)((long)ppcVar9 + 0x12);
            uVar20 = (ulong)bVar3;
            if (bVar3 < 4) {
              *(short *)((long)ppcVar9 + uVar20 * 2 + 0x14) = (short)uVar6;
              bVar17 = *pbVar15;
              *(byte *)((long)ppcVar9 + 0x12) = bVar3 + 1;
              goto LAB_00b8434c;
            }
          }
          uVar12 = uVar12 + 1;
          uVar11 = uVar11 + 2;
        } while (uVar12 != 0x400);
      }
      goto LAB_00b8446c;
    }
  }
  iVar19 = 0;
  do {
    uVar8 = (**(code **)this)(this,iVar19,0,uVar18);
    (*ppcVar9[1])(ppcVar9,iVar19,0,uVar18,uVar8);
    iVar19 = iVar19 + 1;
  } while (iVar19 != 0x400);
LAB_00b8446c:
  operator_delete(this);
  return ppcVar9;
}


