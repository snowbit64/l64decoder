// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readFromStream
// Entry Point: 0085ab50
// Size: 604 bytes
// Signature: undefined __thiscall readFromStream(ChunkedBitSquareChunk * this, GsBitStream * param_1, uint param_2)


/* ChunkedBitSquareChunk::readFromStream(GsBitStream*, unsigned int) */

code ** __thiscall
ChunkedBitSquareChunk::readFromStream(ChunkedBitSquareChunk *this,GsBitStream *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  code **ppcVar6;
  uint uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 local_68;
  byte local_60 [4];
  ChunkedBitSquareChunk local_5c [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_5c[0] = (ChunkedBitSquareChunk)0x0;
  uVar4 = GsBitStream::readBits(param_1,(uchar *)local_5c,3,true);
  if ((uVar4 & 1) == 0) {
LAB_0085ad74:
    this = (ChunkedBitSquareChunk *)0x0;
  }
  else {
    uVar7 = (uint)(byte)local_5c[0];
    if (local_5c[0] == (ChunkedBitSquareChunk)0x7) {
      local_5c[0] = SUB41(param_2,0);
      uVar7 = param_2;
    }
    uVar1 = param_2 - uVar7;
    local_60[0] = 0;
    local_68 = 0;
    if ((uVar7 & 0xff) == 0) {
      local_60[0] = 1;
      uVar4 = GsBitStream::readBits(param_1,(uchar *)&local_68,param_2,true);
      if ((uVar4 & 1) == 0) goto LAB_0085ad74;
    }
    else if ((uVar1 & 0xff) != 0) {
      uVar4 = GsBitStream::readBits(param_1,local_60,3,true);
      if ((uVar4 & 1) == 0) goto LAB_0085ad74;
      if (local_60[0] != 0) {
        uVar4 = 0;
        puVar9 = &local_68;
        do {
          uVar5 = GsBitStream::readBits(param_1,(uchar *)puVar9,param_2,true);
          if ((uVar5 & 1) == 0) goto LAB_0085ad74;
          uVar4 = uVar4 + 1;
          puVar9 = (undefined8 *)((long)puVar9 + 2);
        } while (uVar4 < local_60[0]);
      }
    }
    uVar4 = (ulong)(byte)this[0x10];
    ppcVar6 = (code **)this;
    if (this[0x10] != local_5c[0]) {
      ppcVar6 = (code **)operator_new((ulong)(byte)local_5c[0] << 7 | 0x20);
      uVar4 = (ulong)(byte)local_5c[0];
      *(char *)((long)ppcVar6 + 0x13) = (char)uVar1;
      *(ChunkedBitSquareChunk *)(ppcVar6 + 2) = local_5c[0];
      if ((uVar1 & 0xff) == 0) {
        pcVar8 = writeValueNoPalette;
        *(undefined *)((long)ppcVar6 + 0x11) = 0;
        *ppcVar6 = readValueNoPalette;
      }
      else {
        if (1 < param_2) {
          param_2 = 2;
        }
        *(byte *)((long)ppcVar6 + 0x11) = ~(byte)(-1 << (ulong)((byte)local_5c[0] & 0x1f));
        pcVar8 = *(code **)(s_pWriteValueFns + uVar4 * 8 + (ulong)param_2 * 0x18);
        *ppcVar6 = (code *)(&s_pReadValueFns)[uVar4];
      }
      ppcVar6[1] = pcVar8;
    }
    iVar10 = (int)uVar4;
    if (iVar10 != 0) {
      memset((uchar *)((long)ppcVar6 + 0x1c),0,(ulong)(uint)(iVar10 << 7));
      uVar4 = GsBitStream::readBits(param_1,(uchar *)((long)ppcVar6 + 0x1c),iVar10 << 10,true);
      if ((uVar4 & 1) == 0) {
        if (ppcVar6 == (code **)this) {
          memset(this + 0x1c,0,(ulong)(uint)(iVar10 << 7));
        }
        else {
          operator_delete(ppcVar6);
        }
        goto LAB_0085ad74;
      }
    }
    bVar3 = local_60[0];
    if ((ulong)local_60[0] != 0) {
      memcpy((void *)((long)ppcVar6 + 0x14),&local_68,(ulong)local_60[0] << 1);
    }
    *(byte *)((long)ppcVar6 + 0x12) = bVar3;
    if (ppcVar6 != (code **)this) {
      operator_delete(this);
      this = (ChunkedBitSquareChunk *)ppcVar6;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (code **)this;
}


