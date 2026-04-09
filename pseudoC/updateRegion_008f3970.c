// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRegion
// Entry Point: 008f3970
// Size: 1088 bytes
// Signature: undefined __cdecl updateRegion(uint param_1, uint param_2, uint param_3, uint param_4, BaseTerrain * param_5)


/* TerrainLodTexture::updateRegion(unsigned int, unsigned int, unsigned int, unsigned int,
   BaseTerrain*) */

void TerrainLodTexture::updateRegion
               (uint param_1,uint param_2,uint param_3,uint param_4,BaseTerrain *param_5)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ushort *puVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  char cVar20;
  char cVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint local_6c;
  
  uVar8 = (ulong)param_1;
  uVar11 = (uint)param_5;
  if ((uint)(1 << (ulong)(*(int *)(uVar8 + 0x10) * 2 - 1U & 0x1f)) <
      (uVar11 - param_3) * (param_4 - param_2)) {
    *(undefined *)(uVar8 + 0x30) = 1;
    RenderDeviceManager::getInstance();
    plVar9 = (long *)RenderDeviceManager::getCurrentRenderDevice();
    uVar7 = (**(code **)(*plVar9 + 0xa8))();
  }
  else {
    uVar7 = 0;
  }
  local_6c = param_3;
  if (*(uint *)(uVar8 + 0x3c) == 0) {
    if (param_3 < uVar11) {
      do {
        uVar2 = param_2;
        if (param_2 < param_4) {
          do {
            lVar19 = *(long *)(uVar8 + 0x60);
            uVar13 = (*(long *)(uVar8 + 0x68) - lVar19 >> 3) * -0x3333333333333333;
            if ((int)uVar13 == 0) {
              cVar20 = -1;
            }
            else {
              uVar18 = 0;
              cVar20 = -1;
              uVar24 = 0xffffffff;
              while( true ) {
                lVar19 = lVar19 + uVar18 * 0x28;
                uVar10 = DensityMapModifier::readValue
                                   (*(DensityMapModifier **)(lVar19 + 8),
                                    uVar2 >> (ulong)(*(uint *)(lVar19 + 0x20) & 0x1f),
                                    local_6c >> (ulong)(*(uint *)(lVar19 + 0x20) & 0x1f));
                uVar16 = uVar10 & *(ushort *)(lVar19 + 0x18);
                uVar23 = *(uint *)(*(long *)(lVar19 + 0x10) + uVar16 * 200 + 0xc0);
                uVar12 = (ulong)uVar23;
                if (uVar23 != 0) {
                  puVar14 = (ushort *)(*(long *)(lVar19 + 0x10) + uVar16 * 200 + 0x10);
                  uVar23 = uVar24;
                  cVar21 = cVar20;
                  do {
                    uVar16 = (uVar10 & 0xffffffff) >> ((ulong)*(byte *)(puVar14 + 1) & 0x3f) &
                             (ulong)*puVar14;
                    plVar9 = (long *)(puVar14 + -8);
                    plVar3 = (long *)(puVar14 + -4);
                    puVar14 = puVar14 + 0xc;
                    cVar4 = *(char *)(*plVar9 + uVar16);
                    bVar5 = *(byte *)(*plVar3 + uVar16);
                    bVar1 = (int)(uint)bVar5 <= (int)uVar23;
                    cVar20 = cVar4;
                    if (cVar4 == -1 || bVar1) {
                      cVar20 = cVar21;
                    }
                    uVar24 = (uint)bVar5;
                    if (cVar4 == -1 || bVar1) {
                      uVar24 = uVar23;
                    }
                    uVar12 = uVar12 - 1;
                    uVar23 = uVar24;
                    cVar21 = cVar20;
                  } while (uVar12 != 0);
                }
                uVar18 = uVar18 + 1;
                if (uVar18 == (uVar13 & 0xffffffff)) break;
                lVar19 = *(long *)(uVar8 + 0x60);
              }
            }
            lVar19 = *(long *)(uVar8 + 0x18);
            cVar21 = *(char *)(uVar8 + 0x30);
            uVar13 = (ulong)((local_6c << (ulong)(*(uint *)(uVar8 + 0x10) & 0x1f)) + uVar2);
            *(char *)(lVar19 + uVar13 * 2 + 1) = cVar20;
            if (((cVar21 != '\0') || (*(long *)(uVar8 + 0x28) == 0)) ||
               (plVar9 = *(long **)(*(long *)(uVar8 + 0x28) + 0x68),
               uVar13 = (**(code **)(*plVar9 + 0x78))(plVar9,uVar2,local_6c,lVar19 + uVar13 * 2,2),
               (uVar13 & 1) == 0)) {
              *(undefined *)(uVar8 + 0x30) = 1;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 != param_4);
        }
        local_6c = local_6c + 1;
      } while (local_6c != uVar11);
    }
  }
  else if (param_3 < uVar11) {
    iVar6 = 1 << (ulong)(*(uint *)(uVar8 + 0x3c) & 0x1f);
    do {
      uVar2 = param_2;
      if (param_2 < param_4) {
        do {
          uVar24 = *(uint *)(uVar8 + 0x3c);
          iVar15 = 0;
          do {
            iVar17 = 0;
            do {
              lVar19 = *(long *)(uVar8 + 0x60);
              uVar13 = (*(long *)(uVar8 + 0x68) - lVar19 >> 3) * -0x3333333333333333;
              if ((int)uVar13 != 0) {
                uVar18 = 0;
                cVar20 = -1;
                uVar23 = 0xffffffff;
                while( true ) {
                  lVar19 = lVar19 + uVar18 * 0x28;
                  uVar10 = DensityMapModifier::readValue
                                     (*(DensityMapModifier **)(lVar19 + 8),
                                      iVar17 + (uVar2 << (ulong)(uVar24 & 0x1f)) >>
                                      (ulong)(*(uint *)(lVar19 + 0x20) & 0x1f),
                                      iVar15 + (local_6c << (ulong)(uVar24 & 0x1f)) >>
                                      (ulong)(*(uint *)(lVar19 + 0x20) & 0x1f));
                  uVar16 = uVar10 & *(ushort *)(lVar19 + 0x18);
                  uVar22 = *(uint *)(*(long *)(lVar19 + 0x10) + uVar16 * 200 + 0xc0);
                  uVar12 = (ulong)uVar22;
                  if (uVar22 != 0) {
                    puVar14 = (ushort *)(*(long *)(lVar19 + 0x10) + uVar16 * 200 + 0x10);
                    uVar22 = uVar23;
                    cVar21 = cVar20;
                    do {
                      uVar16 = (uVar10 & 0xffffffff) >> ((ulong)*(byte *)(puVar14 + 1) & 0x3f) &
                               (ulong)*puVar14;
                      plVar9 = (long *)(puVar14 + -8);
                      plVar3 = (long *)(puVar14 + -4);
                      puVar14 = puVar14 + 0xc;
                      cVar4 = *(char *)(*plVar9 + uVar16);
                      bVar5 = *(byte *)(*plVar3 + uVar16);
                      bVar1 = (int)(uint)bVar5 <= (int)uVar22;
                      cVar20 = cVar4;
                      if (cVar4 == -1 || bVar1) {
                        cVar20 = cVar21;
                      }
                      uVar23 = (uint)bVar5;
                      if (cVar4 == -1 || bVar1) {
                        uVar23 = uVar22;
                      }
                      uVar12 = uVar12 - 1;
                      uVar22 = uVar23;
                      cVar21 = cVar20;
                    } while (uVar12 != 0);
                  }
                  uVar18 = uVar18 + 1;
                  if (uVar18 == (uVar13 & 0xffffffff)) break;
                  lVar19 = *(long *)(uVar8 + 0x60);
                }
                if (cVar20 != -1) goto LAB_008f3a50;
              }
              iVar17 = iVar17 + 1;
            } while (iVar17 != iVar6);
            iVar15 = iVar15 + 1;
          } while (iVar15 != iVar6);
          cVar20 = -1;
LAB_008f3a50:
          lVar19 = *(long *)(uVar8 + 0x18);
          cVar21 = *(char *)(uVar8 + 0x30);
          uVar13 = (ulong)((local_6c << (ulong)(*(uint *)(uVar8 + 0x10) & 0x1f)) + uVar2);
          *(char *)(lVar19 + uVar13 * 2 + 1) = cVar20;
          if (((cVar21 != '\0') || (*(long *)(uVar8 + 0x28) == 0)) ||
             (plVar9 = *(long **)(*(long *)(uVar8 + 0x28) + 0x68),
             uVar13 = (**(code **)(*plVar9 + 0x78))(plVar9,uVar2,local_6c,lVar19 + uVar13 * 2,2),
             (uVar13 & 1) == 0)) {
            *(undefined *)(uVar8 + 0x30) = 1;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 != param_4);
      }
      local_6c = local_6c + 1;
    } while (local_6c != uVar11);
  }
  if ((uVar7 & 1) != 0) {
    RenderDeviceManager::getInstance();
    plVar9 = (long *)RenderDeviceManager::getCurrentRenderDevice();
    (**(code **)(*plVar9 + 0xb0))();
  }
  return;
}


