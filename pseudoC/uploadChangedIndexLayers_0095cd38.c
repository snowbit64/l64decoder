// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: uploadChangedIndexLayers
// Entry Point: 0095cd38
// Size: 1064 bytes
// Signature: undefined __thiscall uploadChangedIndexLayers(MultiresTexture * this, ICommandBuffer * param_1)


/* MultiresTexture::uploadChangedIndexLayers(ICommandBuffer*) */

void __thiscall
MultiresTexture::uploadChangedIndexLayers(MultiresTexture *this,ICommandBuffer *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  MultiresTexture MVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  SoftVirtualTexture *this_00;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  char *pcVar23;
  uint uVar24;
  uint *puVar25;
  float fVar26;
  
  lVar20 = *(long *)(this + 0xe0);
  puVar14 = *(uint **)(this + 400);
  puVar4 = *(uint **)(this + 0x198);
  uVar17 = *(uint *)(lVar20 + 0x5c);
  uVar19 = 0;
  bVar11 = *(int *)(lVar20 + 0x50) != 1;
  iVar2 = *(int *)(lVar20 + 0x4c);
  if (bVar11) {
    iVar2 = 0;
  }
  iVar3 = 0;
  if (bVar11) {
    iVar3 = *(int *)(lVar20 + 0x4c);
  }
  uVar12 = uVar17 | uVar17 << 0xe;
  uVar8 = (int)((ulong)((long)puVar4 - (long)puVar14) >> 4) * -0x11111111 - 1;
  do {
    uVar22 = (ulong)(uVar8 - uVar19);
    if (*(char *)(puVar14 + uVar22 * 0x3c + 0x3a) != '\0') {
      puVar18 = puVar14 + uVar22 * 0x3c;
      if (puVar18[5] != 0) {
        uVar21 = 0;
        lVar15 = *(long *)(puVar18 + 0x2c);
        lVar13 = *(long *)(puVar14 + uVar22 * 0x3c + 0x20);
        do {
          uVar16 = 0;
          MVar6 = this[0x89];
          do {
            uVar5 = *(uint *)(lVar13 + (ulong)(uVar16 + uVar21 * puVar18[0x1c]) * 4);
            uVar7 = uVar5 >> 0x10;
            uVar24 = uVar12;
            if ((MVar6 == (MultiresTexture)0x0) || (uVar7 != 0)) {
              if (uVar7 == 0) {
                if (uVar19 != 0) {
                  uVar22 = (ulong)(*puVar18 + 1);
                  iVar9 = (uVar16 + puVar18[0x13] >> 1) - puVar14[uVar22 * 0x3c + 0x13];
                  if ((((iVar9 < 0) ||
                       (iVar10 = (puVar18[0x14] + uVar21 >> 1) - puVar14[uVar22 * 0x3c + 0x14],
                       iVar10 < 0)) || ((int)puVar14[uVar22 * 0x3c + 0x28] <= iVar9)) ||
                     ((int)puVar14[uVar22 * 0x3c + 0x29] <= iVar10)) {
                    puVar25 = puVar14 + uVar22 * 0x3c + 0x2a;
                  }
                  else {
                    puVar25 = (uint *)(*(long *)(puVar14 + uVar22 * 0x3c + 0x2c) +
                                      (ulong)(iVar9 + puVar14[uVar22 * 0x3c + 0x28] * iVar10) * 4);
                  }
                  uVar5 = *puVar25;
                  if (uVar5 != uVar12) {
                    if (uVar5 >> 0x1c < *(uint *)(lVar20 + 0x48)) {
                      iVar9 = (uVar5 >> 0x1c) + 1;
                      uVar7 = *(uint *)(lVar20 + 0x48) - iVar9;
                      uVar24 = ((uVar16 + puVar18[0x13] & 1) << (ulong)(uVar7 & 0x1f)) +
                               (uVar5 & 0xfffffff) +
                               ((puVar18[0x14] + uVar21 & 1) << (ulong)(uVar7 & 0x1f)) * 0x4000 |
                               iVar9 * 0x10000000;
                    }
                    else {
                      uVar24 = 0;
                    }
                  }
                }
              }
              else {
                uVar5 = *(uint *)(lVar20 + 0x50);
                uVar24 = 0;
                if (uVar5 != 0) {
                  uVar24 = uVar7 / uVar5;
                }
                uVar24 = *(int *)(lVar20 + 0x5c) +
                         (uVar7 - uVar24 * uVar5) * *(int *)(lVar20 + 0x4c) |
                         (*(int *)(lVar20 + 0x5c) + *(int *)(lVar20 + 0x4c) * uVar24) * 0x4000;
              }
            }
            else if ((uVar5 & 1) != 0) {
              uVar24 = iVar3 + uVar17 | (iVar2 + uVar17) * 0x4000;
            }
            uVar5 = uVar16 + uVar21 * puVar18[0x28];
            uVar16 = uVar16 + 1;
            *(uint *)(lVar15 + (ulong)uVar5 * 4) = uVar24;
            uVar5 = puVar18[5];
          } while (uVar16 < uVar5);
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar5);
      }
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 <= uVar8);
  if (puVar14 != puVar4) {
    do {
      if (*(char *)(puVar14 + 0x3a) != '\0') {
        SoftVirtualTexture::updateIndexDataForLevel
                  (*(SoftVirtualTexture **)(this + 0xe0),param_1,*puVar14,*(uint **)(puVar14 + 0x2c)
                  );
        *(undefined *)(puVar14 + 0x3a) = 0;
      }
      puVar14 = puVar14 + 0x3c;
    } while (puVar14 != puVar4);
    puVar14 = *(uint **)(this + 0x198);
    puVar4 = *(uint **)(this + 400);
    while (puVar4 != puVar14) {
      fVar26 = (float)NEON_ucvtf(puVar4[2]);
      SoftVirtualTexture::updateIndexAttributesForLevel
                (*(SoftVirtualTexture **)(this + 0xe0),*puVar4,*puVar4,(float)puVar4[0x13],
                 (float)puVar4[0x14],fVar26);
      puVar4 = puVar4 + 0x3c;
    }
  }
  SoftVirtualTexture::updateIndexAttributes(*(SoftVirtualTexture **)(this + 0xe0),param_1);
  if (this[0x8a] != (MultiresTexture)0x0) {
    this_00 = *(SoftVirtualTexture **)(this + 0xe0);
    if (*(int *)(this + 0x98) == 0) {
      puVar14 = *(uint **)(this + 0xf8);
    }
    else {
      uVar19 = 0;
      lVar20 = *(long *)(this + 400) + (ulong)*(uint *)(this_00 + 0x70) * 0xf0;
      puVar4 = (uint *)(lVar20 + 0x78);
      pcVar1 = (char *)(lVar20 + 0x60);
      do {
        uVar17 = 0;
        puVar14 = *(uint **)(this + 0xf8);
        do {
          pcVar23 = pcVar1;
          if ((int)uVar17 < 0) {
            uVar12 = *puVar4;
          }
          else {
            if (((int)uVar19 < 0) || (*(int *)(lVar20 + 0x70) <= (int)uVar17)) {
              uVar12 = *puVar4;
            }
            else {
              puVar18 = puVar4;
              if ((int)uVar19 < *(int *)(lVar20 + 0x74)) {
                puVar18 = (uint *)(*(long *)(lVar20 + 0x80) +
                                  (ulong)(uVar17 + uVar19 * *(int *)(lVar20 + 0x70)) * 4);
              }
              uVar12 = *puVar18;
            }
            if (((-1 < (int)uVar19) && ((int)uVar17 < *(int *)(lVar20 + 0x58))) &&
               ((int)uVar19 < *(int *)(lVar20 + 0x5c))) {
              pcVar23 = (char *)(*(long *)(lVar20 + 0x68) +
                                (ulong)(uVar17 + uVar19 * *(int *)(lVar20 + 0x58)));
            }
          }
          if (*pcVar23 == '\x01') {
            uVar8 = uVar12 >> 0x10;
            if ((uVar12 & 1) == 0) {
              uVar12 = 0xff0000ff;
              if (uVar8 != 0) {
                uVar12 = 0xffff00ff;
              }
            }
            else if ((uVar12 >> 2 & 1) == 0) {
              uVar12 = 0xff008080;
              if (uVar8 != 0) {
                uVar12 = 0xff008000;
              }
            }
            else {
              uVar12 = 0xff00ffff;
              if (uVar8 != 0) {
                uVar12 = 0xff00ff00;
              }
            }
          }
          else {
            uVar12 = 0;
          }
          uVar8 = uVar17 + uVar19 * *(int *)(this + 0xe8);
          uVar17 = uVar17 + 1;
          puVar14[uVar8] = uVar12;
        } while (uVar17 < *(uint *)(this + 0x98));
        uVar19 = uVar19 + 1;
      } while (uVar19 < *(uint *)(this + 0x98));
    }
    SoftVirtualTexture::updateIndexDebugData(this_00,param_1,puVar14);
    return;
  }
  return;
}


