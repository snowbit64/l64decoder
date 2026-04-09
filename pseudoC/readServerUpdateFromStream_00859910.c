// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readServerUpdateFromStream
// Entry Point: 00859910
// Size: 1072 bytes
// Signature: undefined __cdecl readServerUpdateFromStream(GsBitStream * param_1, float param_2, float param_3, float param_4)


/* DensityMapSyncer::readServerUpdateFromStream(GsBitStream*, float, float, float) */

void DensityMapSyncer::readServerUpdateFromStream
               (GsBitStream *param_1,float param_2,float param_3,float param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  long *plVar14;
  GsBitStream *in_x1;
  uchar *puVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  long **pplVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  long *this;
  uint local_70;
  byte local_6c [4];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  local_6c[0] = 0;
  uVar11 = GsBitStream::readBits(in_x1,local_6c,8,true);
  if (((uVar11 & 1) != 0) && (local_6c[0] != 0)) {
    uVar17 = 0;
    while( true ) {
      local_70 = 0;
      uVar11 = GsBitStream::readBits(in_x1,(uchar *)&local_70,0x18,true);
      if ((uVar11 & 1) == 0) break;
      uVar18 = (*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 4) * -0x5555555555555555;
      uVar11 = (ulong)(local_70 >> 0x13) & 0x1f;
      if (uVar18 < uVar11 || uVar18 - uVar11 == 0) break;
      pplVar19 = (long **)(*(long *)(param_1 + 0x28) + uVar11 * 0x30);
      uVar26 = *(uint *)((long)pplVar19 + 0xc);
      this = *pplVar19;
      uVar24 = 0;
      if (uVar26 != 0) {
        uVar24 = (local_70 & 0x7ffff) / uVar26;
      }
      iVar16 = (local_70 & 0x7ffff) - uVar24 * uVar26;
      puVar12 = (uint *)(**(code **)(*this + 0x30))(this);
      if (puVar12 == (uint *)0x0) {
        plVar14 = (long *)(**(code **)(**pplVar19 + 0x38))();
        iVar8 = (**(code **)(**pplVar19 + 0x48))();
        iVar9 = (**(code **)(**pplVar19 + 0x58))();
        uVar21 = (uint)(iVar9 * iVar8) >> 3;
        iVar8 = *(int *)(param_1 + 100);
        iVar10 = (**(code **)(**pplVar19 + 0x58))(*pplVar19);
        iVar9 = *(int *)(param_1 + 100);
        iVar2 = iVar9 * uVar21;
        uVar27 = iVar2 * uVar24;
        uVar26 = uVar27 + iVar2;
        if (uVar27 < uVar26) {
          uVar7 = (uint)(iVar10 * iVar8) >> 3;
          do {
            uVar22 = uVar27 + uVar7 * iVar16;
            uVar23 = uVar22 & 0xffff;
            uVar3 = (*(int *)(plVar14 + 1) + 7U >> 3) - uVar22;
            puVar15 = (uchar *)(*(long *)(*plVar14 + (ulong)(uVar22 >> 0x10) * 8) + (ulong)uVar23);
            uVar25 = 0x10000 - uVar23;
            if (uVar3 + uVar23 < 0x10001) {
              uVar25 = uVar3;
            }
            uVar23 = uVar7;
            if (uVar25 < uVar7) {
              do {
                uVar11 = GsBitStream::readAlignedBytes(in_x1,puVar15,uVar25);
                if ((uVar11 & 1) == 0) goto LAB_00859d0c;
                uVar22 = uVar25 + uVar22;
                uVar23 = uVar23 - uVar25;
                uVar3 = uVar22 & 0xffff;
                uVar4 = (*(int *)(plVar14 + 1) + 7U >> 3) - uVar22;
                puVar15 = (uchar *)(*(long *)(*plVar14 + (ulong)(uVar22 >> 0x10) * 8) + (ulong)uVar3
                                   );
                uVar25 = 0x10000 - uVar3;
                if (uVar4 + uVar3 < 0x10001) {
                  uVar25 = uVar4;
                }
              } while (uVar25 < uVar23);
            }
            uVar11 = GsBitStream::readAlignedBytes(in_x1,puVar15,uVar23);
            if ((uVar11 & 1) == 0) goto LAB_00859d0c;
            uVar27 = uVar27 + uVar21;
          } while (uVar27 < uVar26);
          iVar9 = *(int *)(param_1 + 100);
        }
        lVar13 = *this;
        uVar21 = iVar9 * iVar16;
        uVar24 = iVar9 * uVar24;
        param_1[0x68] = (GsBitStream)0x1;
        uVar26 = uVar21 + iVar9;
        uVar27 = uVar24 + iVar9;
        uVar7 = (**(code **)(lVar13 + 0x58))(this);
      }
      else {
        iVar8 = *(int *)(param_1 + 0x60);
        uVar21 = iVar8 * iVar16;
        uVar24 = iVar8 * uVar24;
        uVar26 = uVar21 + iVar8;
        uVar27 = uVar24 + iVar8;
        if (uVar24 < uVar27) {
          uVar7 = uVar24;
          do {
            if (uVar21 < uVar26) {
              uVar11 = (ulong)puVar12[0xd];
              bVar6 = true;
              uVar22 = uVar21;
              do {
                iVar16 = (int)uVar11;
                if (iVar16 != 0) {
                  uVar23 = *puVar12;
                  uVar18 = 0;
                  puVar20 = puVar12 + 0x10;
                  do {
                    uVar28 = (ulong)(((uVar7 << (ulong)(uVar23 & 0x1f)) + uVar22) * iVar16 +
                                    (int)uVar18);
                    uVar18 = uVar18 + 1;
                    puVar1 = puVar20;
                    if (uVar11 <= uVar18) {
                      puVar1 = puVar12 + 8;
                    }
                    lVar13 = ChunkedBitSquareChunk::readFromStream
                                       (*(ChunkedBitSquareChunk **)
                                         (*(long *)(puVar12 + 10) + uVar28 * 8),in_x1,
                                        *puVar1 - puVar20[-2]);
                    if (lVar13 == 0) {
                      if (bVar6) goto LAB_00859d0c;
                      goto LAB_00859a40;
                    }
                    uVar11 = (ulong)puVar12[0xd];
                    puVar20 = puVar20 + 2;
                    *(long *)(*(long *)(puVar12 + 10) + uVar28 * 8) = lVar13;
                  } while (uVar18 < uVar11);
                }
                uVar22 = uVar22 + 1;
                bVar6 = uVar22 < uVar26;
              } while (uVar22 != uVar26);
            }
LAB_00859a40:
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar27);
        }
        uVar21 = uVar21 * 0x20;
        lVar13 = *this;
        param_1[0x68] = (GsBitStream)0x1;
        uVar24 = uVar24 * 0x20;
        uVar26 = uVar26 * 0x20;
        uVar27 = uVar27 * 0x20;
        uVar7 = (**(code **)(lVar13 + 0x58))(this);
      }
      DensityMap::markDensityRegionDirty
                ((DensityMap *)this,uVar21,uVar24,uVar26,uVar27,0,uVar7,0xffffffff,true,false,true);
      param_1[0x68] = (GsBitStream)0x0;
      uVar17 = uVar17 + 1;
      if (local_6c[0] <= uVar17) break;
    }
  }
LAB_00859d0c:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


