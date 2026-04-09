// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scanForTileUpdateJobs
// Entry Point: 0095d624
// Size: 1008 bytes
// Signature: undefined __thiscall scanForTileUpdateJobs(MultiresTexture * this, uint param_1)


/* MultiresTexture::scanForTileUpdateJobs(unsigned int) */

void __thiscall MultiresTexture::scanForTileUpdateJobs(MultiresTexture *this,uint param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  
  if (param_1 != 0) {
    lVar12 = *(long *)(this + 400);
    uVar7 = (*(long *)(this + 0x198) - lVar12 >> 4) * -0x1111111111111111;
    iVar6 = (int)uVar7;
    if (iVar6 != 0) {
      uVar8 = 0;
      while( true ) {
        uVar3 = ~(uint)uVar8 + iVar6;
        lVar12 = lVar12 + (ulong)uVar3 * 0xf0;
        uVar2 = *(uint *)(lVar12 + 0x14);
        if (uVar2 != 0) {
          uVar9 = 0;
          do {
            uVar11 = 0;
            do {
              uVar4 = *(uint *)(*(long *)(lVar12 + 0x80) +
                               (ulong)(uVar11 + uVar9 * *(int *)(lVar12 + 0x70)) * 4);
              if ((uVar4 & 0xffffff05) == 5) {
                lVar5 = *(long *)(this + 0x110);
                if (lVar5 == *(long *)(this + 0x108)) {
                  freeUpSomeTiles(this,1);
                  lVar5 = *(long *)(this + 0x110);
                  if (lVar5 == *(long *)(this + 0x108)) {
                    return;
                  }
                }
                lVar10 = (ulong)uVar3 * 0xf0;
                uVar2 = *(uint *)(lVar5 + -4);
                lVar1 = *(long *)(this + 400) + lVar10;
                *(uint **)(this + 0x110) = (uint *)(lVar5 + -4);
                uVar2 = MultiresTextureGpuUpdater::issueTileJob
                                  (*(MultiresTextureGpuUpdater **)(this + 0x1b0),uVar2,uVar3,
                                   (SharedTileInfo *)(lVar1 + 0x20),uVar11 + *(int *)(lVar1 + 0x4c),
                                   *(int *)(lVar1 + 0x50) + uVar9);
                param_1 = param_1 - 1;
                lVar10 = *(long *)(this + 400) + lVar10;
                *(uint *)(*(long *)(lVar10 + 0x80) +
                         (ulong)(uVar11 + uVar9 * *(int *)(lVar10 + 0x70)) * 4) =
                     uVar4 & 0xffff0000 | uVar4 & 0xfd | (uVar2 & 0xff) << 8;
                if (param_1 == 0) {
                  return;
                }
                uVar2 = *(uint *)(lVar12 + 0x14);
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar2);
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar2);
        }
        uVar8 = uVar8 + 1;
        if (uVar8 == (uVar7 & 0xffffffff)) break;
        lVar12 = *(long *)(this + 400);
      }
      if (iVar6 != 0) {
        uVar8 = 0;
        do {
          lVar12 = *(long *)(this + 400) + uVar8 * 0xf0;
          uVar3 = *(uint *)(lVar12 + 0x14);
          if (uVar3 != 0) {
            uVar2 = 0;
            do {
              uVar9 = 0;
              do {
                uVar11 = *(uint *)(*(long *)(lVar12 + 0x80) +
                                  (ulong)(uVar9 + uVar2 * *(int *)(lVar12 + 0x70)) * 4);
                if ((uVar11 & 0xff03) == 3) {
                  uVar3 = uVar11 >> 0x10;
                  if (uVar3 == 0) {
                    lVar5 = *(long *)(this + 0x110);
                    if (lVar5 == *(long *)(this + 0x108)) {
                      freeUpSomeTiles(this,1);
                      lVar5 = *(long *)(this + 0x110);
                      if (lVar5 == *(long *)(this + 0x108)) {
                        return;
                      }
                    }
                    uVar3 = *(uint *)(lVar5 + -4);
                    *(uint **)(this + 0x110) = (uint *)(lVar5 + -4);
                  }
                  lVar5 = *(long *)(this + 400) + uVar8 * 0xf0;
                  uVar3 = MultiresTextureGpuUpdater::issueTileJob
                                    (*(MultiresTextureGpuUpdater **)(this + 0x1b0),uVar3,(uint)uVar8
                                     ,(SharedTileInfo *)(lVar5 + 0x20),
                                     uVar9 + *(int *)(lVar5 + 0x4c),*(int *)(lVar5 + 0x50) + uVar2);
                  param_1 = param_1 - 1;
                  lVar5 = *(long *)(this + 400) + uVar8 * 0xf0;
                  *(uint *)(*(long *)(lVar5 + 0x80) +
                           (ulong)(uVar9 + uVar2 * *(int *)(lVar5 + 0x70)) * 4) =
                       uVar11 & 0xffff0000 | uVar11 & 0xfd | (uVar3 & 0xff) << 8;
                  if (param_1 == 0) {
                    return;
                  }
                  uVar3 = *(uint *)(lVar12 + 0x14);
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar3);
              uVar2 = uVar2 + 1;
            } while (uVar2 < uVar3);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != (uVar7 & 0xffffffff));
        if (iVar6 != 0) {
          uVar8 = 0;
          do {
            lVar12 = *(long *)(this + 400) + uVar8 * 0xf0;
            uVar3 = *(uint *)(lVar12 + 0x14);
            if (uVar3 != 0) {
              uVar2 = 0;
              do {
                uVar9 = 0;
                do {
                  uVar11 = *(uint *)(*(long *)(lVar12 + 0x80) +
                                    (ulong)(uVar9 + uVar2 * *(int *)(lVar12 + 0x70)) * 4);
                  if (((uVar11 & 0xff01) == 1) &&
                     ((uVar4 = uVar11 >> 0x10, (uVar11 >> 1 & 1) != 0 || (uVar4 == 0)))) {
                    if (uVar4 == 0) {
                      lVar5 = *(long *)(this + 0x110);
                      if (lVar5 == *(long *)(this + 0x108)) {
                        freeUpSomeTiles(this,1);
                        lVar5 = *(long *)(this + 0x110);
                        if (lVar5 == *(long *)(this + 0x108)) {
                          return;
                        }
                      }
                      uVar4 = *(uint *)(lVar5 + -4);
                      *(uint **)(this + 0x110) = (uint *)(lVar5 + -4);
                    }
                    lVar5 = *(long *)(this + 400) + uVar8 * 0xf0;
                    uVar3 = MultiresTextureGpuUpdater::issueTileJob
                                      (*(MultiresTextureGpuUpdater **)(this + 0x1b0),uVar4,
                                       (uint)uVar8,(SharedTileInfo *)(lVar5 + 0x20),
                                       uVar9 + *(int *)(lVar5 + 0x4c),*(int *)(lVar5 + 0x50) + uVar2
                                      );
                    param_1 = param_1 - 1;
                    lVar5 = *(long *)(this + 400) + uVar8 * 0xf0;
                    *(uint *)(*(long *)(lVar5 + 0x80) +
                             (ulong)(uVar9 + uVar2 * *(int *)(lVar5 + 0x70)) * 4) =
                         uVar11 & 0xffff0000 | uVar11 & 0xfd | (uVar3 & 0xff) << 8;
                    if (param_1 == 0) {
                      return;
                    }
                    uVar3 = *(uint *)(lVar12 + 0x14);
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < uVar3);
                uVar2 = uVar2 + 1;
              } while (uVar2 < uVar3);
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != (uVar7 & 0xffffffff));
        }
      }
    }
  }
  return;
}


