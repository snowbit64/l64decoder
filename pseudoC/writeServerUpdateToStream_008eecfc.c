// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeServerUpdateToStream
// Entry Point: 008eecfc
// Size: 436 bytes
// Signature: undefined __thiscall writeServerUpdateToStream(BaseTerrainSyncer * this, GsBitStream * param_1, uint param_2, Vector3 * param_3, uint param_4)


/* BaseTerrainSyncer::writeServerUpdateToStream(GsBitStream*, unsigned int, Vector3 const&, unsigned
   int) */

void __thiscall
BaseTerrainSyncer::writeServerUpdateToStream
          (BaseTerrainSyncer *this,GsBitStream *param_1,uint param_2,Vector3 *param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  SpanSet *pSVar6;
  ulong uVar7;
  BaseTerrain *pBVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  uchar local_5c [4];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  lVar10 = *(long *)this;
  iVar11 = (int)((ulong)(*(long *)(this + 8) - lVar10) >> 5);
  iVar12 = iVar11 + -1;
  if (0 < iVar11) {
    pBVar8 = *(BaseTerrain **)(this + 0x28);
    iVar11 = 0;
    do {
      iVar1 = iVar11 + iVar12;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      uVar9 = iVar1 >> 1;
      uVar13 = (ulong)uVar9;
      uVar4 = *(uint *)(lVar10 + (-(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 | uVar13 << 5));
      if (uVar4 < param_2) {
        iVar11 = uVar9 + 1;
      }
      else {
        if (uVar4 <= param_2) {
          lVar14 = uVar13 * 0x20;
          iVar12 = (int)(*(float *)(param_3 + 8) / *(float *)(pBVar8 + 0xa8) +
                         *(float *)(pBVar8 + 0x94) + 0.5);
          bVar2 = *(char *)(lVar10 + uVar13 * 0x20 + 8) == '\0';
          if (bVar2) {
            pSVar6 = *(SpanSet **)(lVar10 + lVar14 + 0x10);
          }
          else {
            pSVar6 = *(SpanSet **)(lVar10 + lVar14 + 0x18);
          }
          uVar9 = param_4;
          uVar7 = SpanSet::writeUpdateToStream(pSVar6,param_1,param_4,pBVar8,param_4,iVar12,!bVar2);
          lVar10 = *(long *)this;
          lVar14 = lVar10 + lVar14;
          bVar3 = *(byte *)(lVar14 + 8) ^ 1;
          *(byte *)(lVar14 + 8) = bVar3;
          if ((uVar7 & 1) == 0) {
            lVar10 = lVar10 + uVar13 * 0x20;
            if (bVar3 == 0) {
              pSVar6 = *(SpanSet **)(lVar10 + 0x10);
              pBVar8 = *(BaseTerrain **)(this + 0x28);
            }
            else {
              pSVar6 = *(SpanSet **)(lVar10 + 0x18);
              pBVar8 = *(BaseTerrain **)(this + 0x28);
            }
            uVar7 = SpanSet::writeUpdateToStream
                              (pSVar6,param_1,param_4,pBVar8,uVar9,iVar12,bVar3 != 0);
            lVar10 = *(long *)this + uVar13 * 0x20;
            *(byte *)(lVar10 + 8) = *(byte *)(lVar10 + 8) ^ 1;
            if ((uVar7 & 1) == 0) {
              local_5c[0] = '\0';
              GsBitStream::writeBits(param_1,local_5c,1,true);
            }
          }
          break;
        }
        iVar12 = uVar9 - 1;
      }
    } while (iVar11 <= iVar12);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


