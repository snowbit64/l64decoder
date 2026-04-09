// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeUpdateToStream
// Entry Point: 008ee984
// Size: 888 bytes
// Signature: undefined __thiscall writeUpdateToStream(SpanSet * this, GsBitStream * param_1, uint param_2, BaseTerrain * param_3, uint param_4, int param_5, bool param_6)


/* BaseTerrainSyncer::SpanSet::writeUpdateToStream(GsBitStream*, unsigned int, BaseTerrain*,
   unsigned int, int, bool) */

void __thiscall
BaseTerrainSyncer::SpanSet::writeUpdateToStream
          (SpanSet *this,GsBitStream *param_1,uint param_2,BaseTerrain *param_3,uint param_4,
          int param_5,bool param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uchar local_378 [4];
  undefined2 local_374;
  ushort local_370 [2];
  uint local_36c [191];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  if (((DAT_0107e0a0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0107e0a0), iVar7 != 0)) {
    DAT_0107e098 = 0x10;
    if (!param_6) {
      DAT_0107e098 = 8;
    }
    __cxa_guard_release(&DAT_0107e0a0);
  }
  if (param_3 != (BaseTerrain *)0x0) {
    uVar15 = *(uint *)(this + 0xc);
    uVar16 = uVar15 << 1;
    if (uVar16 != 0) {
      uVar14 = 0;
      lVar11 = *(long *)this;
      uVar12 = 1;
      iVar7 = 0x12;
      do {
        uVar1 = -(uVar12 >> 1);
        if ((uVar12 & 1) != 0) {
          uVar1 = uVar12 >> 1;
        }
        uVar1 = uVar1 + param_5;
        if ((-1 < (int)uVar1) && (uVar1 < uVar15)) {
          puVar17 = (uint *)(lVar11 + (ulong)uVar1 * 8);
          uVar2 = *puVar17;
          if (uVar2 != 0xffffffff) {
            puVar10 = (uint *)(lVar11 + (ulong)uVar1 * 8 + 4);
            uVar3 = *puVar10;
            uVar5 = uVar3 - uVar2;
            if (param_2 < iVar7 + 0x28 + uVar5 * DAT_0107e098) {
              uVar3 = (param_2 - iVar7) - 0x28;
              if ((param_2 - iVar7 < 0x28) || (uVar3 < DAT_0107e098)) break;
              uVar5 = 0;
              if (DAT_0107e098 != 0) {
                uVar5 = uVar3 / DAT_0107e098;
              }
              uVar13 = uVar5 + uVar2;
              local_36c[(ulong)uVar14 * 3] = uVar2;
              local_36c[(ulong)uVar14 * 3 + 1] = uVar13;
            }
            else {
              uVar13 = 0xffffffff;
              local_36c[(ulong)uVar14 * 3] = uVar2;
              local_36c[(ulong)uVar14 * 3 + 1] = uVar3;
              *puVar10 = 0xffffffff;
            }
            uVar9 = (ulong)uVar14;
            uVar14 = uVar14 + 1;
            *puVar17 = uVar13;
            local_370[uVar9 * 6] = (ushort)uVar1;
            if (uVar14 == 0x40) goto LAB_008eeabc;
            iVar7 = iVar7 + 0x28 + uVar5 * DAT_0107e098;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar16 != uVar12);
      if (uVar14 != 0) {
LAB_008eeabc:
        local_374._0_1_ = 1;
        GsBitStream::writeBits(param_1,(uchar *)&local_374,1,true);
        local_374 = CONCAT11(local_374._1_1_,param_6);
        GsBitStream::writeBits(param_1,(uchar *)&local_374,1,true);
        local_374 = (ushort)uVar14;
        GsBitStream::writeBits(param_1,(uchar *)&local_374,0x10,true);
        qsort(local_370,(ulong)uVar14,0xc,spanSortFunc);
        uVar9 = 0;
        uVar15 = 0xffffffff;
        do {
          uVar4 = local_370[uVar9 * 6];
          uVar16 = (uint)uVar4;
          if (uVar15 + 1 == uVar16) {
            local_374 = (ushort)local_374._1_1_ << 8;
            uVar15 = 1;
          }
          else {
            local_374 = CONCAT11(local_374._1_1_,1);
            GsBitStream::writeBits(param_1,(uchar *)&local_374,1,true);
            uVar15 = 0x10;
            local_374 = uVar4;
          }
          GsBitStream::writeBits(param_1,(uchar *)&local_374,uVar15,true);
          local_374 = (ushort)local_36c[uVar9 * 3];
          GsBitStream::writeBits(param_1,(uchar *)&local_374,0x10,true);
          puVar17 = local_36c + uVar9 * 3 + 1;
          local_374 = (ushort)*puVar17;
          GsBitStream::writeBits(param_1,(uchar *)&local_374,0x10,true);
          uVar12 = *puVar17;
          for (uVar15 = local_36c[uVar9 * 3]; uVar15 < uVar12; uVar15 = uVar15 + 1) {
            if (param_6) {
              TerrainLodTexture::getLayersRegion
                        (*(TerrainLodTexture **)(param_3 + 0xd8),uVar15,uVar16,1,1,local_378);
              uVar12 = 8;
              local_374 = CONCAT11(local_374._1_1_,local_378[0]);
            }
            else {
              local_374 = BaseTerrain::getRawHeightAtPoint(param_3,uVar15,uVar16);
              uVar12 = 0x10;
            }
            GsBitStream::writeBits(param_1,(uchar *)&local_374,uVar12,true);
            uVar12 = *puVar17;
          }
          uVar9 = uVar9 + 1;
          uVar15 = uVar16;
        } while (uVar9 != uVar14);
        uVar8 = 1;
        goto LAB_008eec78;
      }
    }
  }
  uVar8 = 0;
LAB_008eec78:
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


