// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0098b9e8
// Size: 1932 bytes
// Signature: undefined __thiscall update(PlayerCenteredCollisionHeightmap * this, Vector3 * param_1, Vector3 * param_2, float param_3)


/* PlayerCenteredCollisionHeightmap::update(Vector3 const&, Vector3 const&, float) */

void __thiscall
PlayerCenteredCollisionHeightmap::update
          (PlayerCenteredCollisionHeightmap *this,Vector3 *param_1,Vector3 *param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  DeferredDebugRenderer *this_00;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  float fVar30;
  undefined8 uVar31;
  uint uVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  
  fVar33 = *(float *)(this + 0x10);
  uVar31 = *(undefined8 *)this;
  uVar40 = NEON_ucvtf(uVar31,4);
  fVar43 = *(float *)param_2;
  fVar44 = *(float *)(param_2 + 8);
  iVar34 = (int)(float)(int)(((float)*(undefined8 *)param_1 + (float)uVar40 * -fVar33 * 0.5) /
                             fVar33 + 0.5);
  iVar36 = (int)(float)(int)((*(float *)(param_1 + 8) +
                             (float)((ulong)uVar40 >> 0x20) * -fVar33 * 0.5) / fVar33 + 0.5);
  iVar4 = iVar34 - *(int *)(this + 0x1c);
  if ((iVar4 == 0) && (iVar36 == *(int *)(this + 0x20))) goto LAB_0098bf14;
  uVar20 = (uint)uVar31;
  iVar3 = iVar36 - *(int *)(this + 0x20);
  iVar1 = 0;
  if (0 < iVar4) {
    iVar1 = iVar4;
  }
  uVar15 = 0;
  if (iVar4 < 1) {
    uVar15 = -iVar4;
  }
  uVar28 = (ulong)uVar15;
  uVar32 = (uint)((ulong)uVar31 >> 0x20);
  uVar29 = uVar20 - iVar1;
  iVar1 = 0;
  if (0 < iVar3) {
    iVar1 = iVar3;
  }
  uVar9 = 0;
  if (iVar3 < 1) {
    uVar9 = -iVar3;
  }
  uVar27 = (ulong)uVar9;
  if (((int)uVar15 < (int)uVar29) && (uVar26 = uVar32 - iVar1, (int)uVar9 < (int)uVar26)) {
    copyRegion(this,uVar15,uVar29,iVar4,uVar9,uVar26,iVar3);
    if ((int)uVar15 < 1) {
      uVar20 = *(uint *)this;
      if ((int)uVar29 < (int)uVar20) {
        if (uVar9 < uVar26 + 1) {
          lVar22 = *(long *)(this + 0x28);
          uVar19 = (ulong)(uVar29 + 1);
          iVar4 = *(int *)(this + 8);
          uVar15 = uVar20 + 1;
          uVar18 = uVar15 - uVar19;
          uVar23 = uVar18 & 0xfffffffffffffffe;
          uVar32 = uVar9 * iVar4;
          uVar28 = uVar27;
          do {
            if (uVar29 + 1 < uVar15) {
              uVar11 = uVar19;
              if (1 < uVar18) {
                puVar8 = (undefined *)(lVar22 + uVar19 * 0xc + 0x14 + (ulong)uVar32 * 0xc);
                uVar11 = uVar23;
                do {
                  uVar11 = uVar11 - 2;
                  puVar8[-0xc] = 0;
                  *puVar8 = 0;
                  puVar8 = puVar8 + 0x18;
                } while (uVar11 != 0);
                uVar11 = uVar23 + uVar19;
                if (uVar18 == uVar23) goto LAB_0098bcd8;
              }
              lVar25 = uVar15 - uVar11;
              puVar8 = (undefined *)(lVar22 + 8 + (ulong)uVar32 * 0xc + uVar11 * 0xc);
              do {
                lVar25 = lVar25 + -1;
                *puVar8 = 0;
                puVar8 = puVar8 + 0xc;
              } while (lVar25 != 0);
            }
LAB_0098bcd8:
            uVar28 = uVar28 + 1;
            uVar32 = uVar32 + iVar4;
          } while (uVar28 != uVar26 + 1);
        }
        uVar15 = uVar9;
        if (uVar9 < uVar26) {
          do {
            uVar32 = uVar29;
            if (uVar29 < uVar20) {
              do {
                computeCell(this,uVar32,uVar15);
                uVar32 = uVar32 + 1;
              } while (uVar20 != uVar32);
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 != uVar26);
        }
      }
    }
    else {
      if (uVar9 < uVar26 + 1) {
        iVar4 = *(int *)(this + 8);
        uVar18 = uVar28 & 0xfffffffe;
        lVar22 = *(long *)(this + 0x28);
        uVar20 = uVar9 * iVar4;
        uVar19 = uVar27;
        do {
          if (uVar15 < 2) {
            uVar23 = 0;
LAB_0098bb58:
            lVar25 = uVar28 - uVar23;
            puVar8 = (undefined *)(lVar22 + 8 + (ulong)uVar20 * 0xc + uVar23 * 0xc);
            do {
              lVar25 = lVar25 + -1;
              *puVar8 = 0;
              puVar8 = puVar8 + 0xc;
            } while (lVar25 != 0);
          }
          else {
            puVar8 = (undefined *)(lVar22 + 0x14 + (ulong)uVar20 * 0xc);
            uVar23 = uVar18;
            do {
              uVar23 = uVar23 - 2;
              puVar8[-0xc] = 0;
              *puVar8 = 0;
              puVar8 = puVar8 + 0x18;
            } while (uVar23 != 0);
            uVar23 = uVar18;
            if (uVar18 != uVar28) goto LAB_0098bb58;
          }
          uVar19 = uVar19 + 1;
          uVar20 = uVar20 + iVar4;
        } while (uVar19 != uVar26 + 1);
      }
      uVar20 = uVar9;
      if (uVar9 < uVar26) {
        do {
          uVar29 = 0;
          do {
            computeCell(this,uVar29,uVar20);
            uVar29 = uVar29 + 1;
          } while (uVar15 != uVar29);
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar26);
      }
    }
    if ((int)uVar9 < 1) {
      uVar20 = *(uint *)(this + 4);
      if ((int)uVar26 < (int)uVar20) {
        uVar29 = *(uint *)this;
        uVar15 = uVar26 + 1;
        uVar28 = (ulong)uVar15;
        if (uVar15 < uVar20 + 1) {
          iVar4 = *(int *)(this + 8);
          uVar27 = (ulong)(uVar29 + 1);
          lVar22 = *(long *)(this + 0x28);
          uVar19 = uVar27 & 0xfffffffe;
          uVar15 = iVar4 * uVar15;
          do {
            if (uVar29 + 1 != 0) {
              if (uVar29 == 0) {
                uVar18 = 0;
              }
              else {
                uVar18 = uVar19;
                puVar8 = (undefined *)(lVar22 + 0x14 + (ulong)uVar15 * 0xc);
                do {
                  uVar18 = uVar18 - 2;
                  puVar8[-0xc] = 0;
                  *puVar8 = 0;
                  puVar8 = puVar8 + 0x18;
                } while (uVar18 != 0);
                uVar18 = uVar19;
                if (uVar19 == uVar27) goto LAB_0098bea0;
              }
              lVar25 = uVar27 - uVar18;
              puVar8 = (undefined *)(lVar22 + 8 + (ulong)uVar15 * 0xc + uVar18 * 0xc);
              do {
                lVar25 = lVar25 + -1;
                *puVar8 = 0;
                puVar8 = puVar8 + 0xc;
              } while (lVar25 != 0);
            }
LAB_0098bea0:
            uVar28 = uVar28 + 1;
            uVar15 = uVar15 + iVar4;
          } while (uVar28 != uVar20 + 1);
        }
        if (uVar26 < uVar20) {
          do {
            if (uVar29 != 0) {
              uVar15 = 0;
              do {
                computeCell(this,uVar15,uVar26);
                uVar15 = uVar15 + 1;
              } while (uVar29 != uVar15);
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 != uVar20);
        }
      }
    }
    else {
      uVar15 = *(uint *)this;
      uVar20 = 0;
      lVar22 = *(long *)(this + 0x28);
      uVar28 = 0;
      iVar4 = *(int *)(this + 8);
      uVar19 = (ulong)(uVar15 + 1);
      uVar18 = uVar19 & 0xfffffffe;
      do {
        if (uVar15 + 1 != 0) {
          if (uVar15 == 0) {
            uVar23 = 0;
          }
          else {
            puVar8 = (undefined *)(lVar22 + 0x14 + (ulong)uVar20 * 0xc);
            uVar23 = uVar18;
            do {
              uVar23 = uVar23 - 2;
              puVar8[-0xc] = 0;
              *puVar8 = 0;
              puVar8 = puVar8 + 0x18;
            } while (uVar23 != 0);
            uVar23 = uVar18;
            if (uVar18 == uVar19) goto LAB_0098bdbc;
          }
          lVar25 = uVar19 - uVar23;
          puVar8 = (undefined *)(lVar22 + 8 + (ulong)uVar20 * 0xc + uVar23 * 0xc);
          do {
            lVar25 = lVar25 + -1;
            *puVar8 = 0;
            puVar8 = puVar8 + 0xc;
          } while (lVar25 != 0);
        }
LAB_0098bdbc:
        uVar28 = uVar28 + 1;
        uVar20 = uVar20 + iVar4;
      } while (uVar28 != uVar27);
      uVar20 = 0;
      do {
        if (uVar15 != 0) {
          uVar29 = 0;
          do {
            computeCell(this,uVar29,uVar20);
            uVar29 = uVar29 + 1;
          } while (uVar15 != uVar29);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar9);
    }
  }
  else {
    if (uVar32 != 0xffffffff) {
      lVar22 = *(long *)(this + 0x28);
      uVar27 = (ulong)(uVar20 + 1);
      uVar15 = 0;
      uVar28 = 0;
      iVar4 = *(int *)(this + 8);
      uVar19 = uVar27 & 0xfffffffe;
      do {
        if (uVar20 + 1 != 0) {
          if (uVar20 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = uVar19;
            puVar8 = (undefined *)(lVar22 + 0x14 + (ulong)uVar15 * 0xc);
            do {
              uVar18 = uVar18 - 2;
              puVar8[-0xc] = 0;
              *puVar8 = 0;
              puVar8 = puVar8 + 0x18;
            } while (uVar18 != 0);
            uVar18 = uVar19;
            if (uVar19 == uVar27) goto LAB_0098bba8;
          }
          lVar25 = uVar27 - uVar18;
          puVar8 = (undefined *)(lVar22 + 8 + (ulong)uVar15 * 0xc + uVar18 * 0xc);
          do {
            lVar25 = lVar25 + -1;
            *puVar8 = 0;
            puVar8 = puVar8 + 0xc;
          } while (lVar25 != 0);
        }
LAB_0098bba8:
        uVar28 = uVar28 + 1;
        uVar15 = uVar15 + iVar4;
      } while (uVar28 != uVar32 + 1);
      if (uVar32 == 0) goto LAB_0098bf0c;
    }
    uVar15 = 0;
    do {
      if (uVar20 != 0) {
        uVar29 = 0;
        do {
          computeCell(this,uVar29,uVar15);
          uVar29 = uVar29 + 1;
        } while (uVar20 != uVar29);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar32);
  }
LAB_0098bf0c:
  *(ulong *)(this + 0x1c) = CONCAT44(iVar36,iVar34);
LAB_0098bf14:
  if (*(int *)(this + 0x18) == 0) {
LAB_0098c0e4:
    EngineManager::getInstance();
    this_00 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
    uVar28 = DeferredDebugRenderer::isCategoryEnabled(this_00,0x400);
    if ((uVar28 & 1) != 0) {
      debugDraw();
    }
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
    return;
  }
  uVar15 = *(uint *)(this + 8);
  uVar29 = *(uint *)(this + 0xc);
  uVar20 = 0;
  fVar33 = (float)NEON_fmadd(fVar43,fVar43,fVar44 * fVar44);
  fVar45 = (float)(ulong)(uVar29 - 1) * 0.5;
  fVar46 = (float)(ulong)(uVar15 - 1) * 0.5;
  fVar35 = (float)NEON_fmadd(fVar46,fVar46,fVar45 * fVar45);
  if (uVar29 == 0) goto LAB_0098c0ac;
  do {
    uVar32 = 0;
    uVar21 = 0;
    lVar22 = *(long *)(this + 0x28);
    fVar30 = fVar35 * 16.0;
    uVar9 = uVar15;
    uVar26 = uVar15;
    uVar10 = uVar29;
    uVar16 = uVar29;
    do {
      if (uVar15 != 0) {
        uVar24 = 0;
        pcVar12 = (char *)(lVar22 + 8);
        fVar37 = (float)(ulong)uVar32 - fVar45;
        uVar14 = uVar26;
        uVar17 = uVar16;
        do {
          bVar7 = (iVar34 + uVar24 & 3 | iVar36 + uVar32 & 3) != 0;
          uVar13 = (uint)(((iVar34 + uVar24 | iVar36 + uVar32) & 1) == 0);
          uVar2 = uVar21;
          fVar38 = fVar30;
          uVar5 = uVar9;
          uVar26 = uVar14;
          uVar6 = uVar10;
          uVar16 = uVar17;
          if (*pcVar12 == '\0') {
            fVar38 = (float)(ulong)uVar24 - fVar46;
            fVar41 = (float)NEON_fmadd(fVar38,fVar38,fVar37 * fVar37);
            fVar39 = (float)NEON_fmadd(fVar38,fVar43 * (1.0 / SQRT(fVar33)),
                                       fVar44 * (1.0 / SQRT(fVar33)) * fVar37);
            fVar42 = fVar41 * 0.5;
            if (uVar13 == 0) {
              fVar42 = fVar41;
            }
            fVar38 = fVar41 * 0.25;
            if (bVar7) {
              fVar38 = fVar42;
            }
            if (fVar39 / SQRT(fVar41) <= param_3) {
              fVar38 = fVar38 * 16.0;
            }
            uVar5 = uVar24;
            uVar16 = uVar32;
            if (fVar30 <= fVar38) {
              fVar38 = fVar30;
              uVar5 = uVar9;
              uVar16 = uVar17;
            }
          }
          else {
            uVar9 = 2;
            if (bVar7) {
              uVar9 = uVar13;
            }
            uVar2 = (uint)(*(int *)(this + 0x24) - *(int *)(pcVar12 + -4)) >> (ulong)uVar9;
            uVar26 = uVar24;
            uVar6 = uVar32;
            if (uVar2 <= uVar21) {
              uVar2 = uVar21;
              uVar26 = uVar14;
              uVar6 = uVar10;
            }
          }
          uVar10 = uVar6;
          uVar9 = uVar5;
          fVar30 = fVar38;
          uVar21 = uVar2;
          uVar24 = uVar24 + 1;
          pcVar12 = pcVar12 + 0xc;
          uVar14 = uVar26;
          uVar17 = uVar16;
        } while (uVar15 != uVar24);
        lVar22 = lVar22 + 0xc + (ulong)(uVar15 - 1) * 0xc;
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 != uVar29);
    if (uVar9 == uVar15) goto LAB_0098c0b4;
    fVar30 = *(float *)(param_1 + 4);
    uVar10 = uVar16;
    while( true ) {
      updateVert(this,uVar9,fVar30,uVar10);
      uVar20 = uVar20 + 1;
      if (*(uint *)(this + 0x18) <= uVar20) goto LAB_0098c0e4;
      uVar15 = *(uint *)(this + 8);
      uVar29 = *(uint *)(this + 0xc);
      iVar34 = *(int *)(this + 0x1c);
      iVar36 = *(int *)(this + 0x20);
      if (uVar29 != 0) break;
LAB_0098c0ac:
      uVar10 = 0;
      uVar26 = uVar15;
LAB_0098c0b4:
      uVar9 = uVar26;
      fVar30 = *(float *)(param_1 + 4);
    }
  } while( true );
}


