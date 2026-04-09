// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onFinished
// Entry Point: 0089f60c
// Size: 1320 bytes
// Signature: undefined __thiscall onFinished(TerrainDeformation * this, ErrorCode param_1)


/* TerrainDeformation::onFinished(TerrainDeformation::ErrorCode) */

void __thiscall TerrainDeformation::onFinished(TerrainDeformation *this,ErrorCode param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  TerrainDeformation TVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  UpdateManager *this_00;
  uint *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  undefined8 uVar20;
  uint uVar21;
  code *pcVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  basic_string local_98 [4];
  void *local_88;
  uchar local_7c [4];
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  if (param_1 != 0) {
    *(undefined2 *)(this + 0xd4) = 0;
  }
  if (*(long *)(this + 0x100) == 0) {
    uVar29 = 0;
  }
  else {
    TVar6 = this[0xd4];
    if ((TVar6 != (TerrainDeformation)0x0) || (uVar29 = 0, *(int *)(this + 0x2c) != 4)) {
      uVar11 = *(uint *)(this + 0xfc);
      if (uVar11 == 1) {
        uVar29 = 0;
      }
      else {
        uVar13 = *(uint *)(this + 0xf8);
        uVar29 = 0;
        uVar20 = NEON_fmov(0x3e800000,4);
        uVar21 = 0;
        uVar15 = uVar13;
        do {
          uVar23 = uVar21 + 1;
          uVar16 = uVar15 - 1;
          if (uVar16 != 0) {
            uVar19 = 0;
            do {
              uVar5 = uVar19;
              if (uVar15 <= uVar19) {
                uVar5 = uVar16;
              }
              uVar8 = 0;
              if (-1 < (int)uVar19) {
                uVar8 = uVar5;
              }
              uVar5 = uVar21;
              if (uVar11 <= uVar21) {
                uVar5 = uVar11 - 1;
              }
              uVar9 = 0;
              if (-1 < (int)uVar21) {
                uVar9 = uVar5;
              }
              uVar5 = uVar19 + 1;
              lVar18 = *(long *)(this + 0x100);
              if (uVar5 < uVar15) {
                uVar16 = uVar19 + 1;
              }
              uVar17 = (ulong)(uVar9 * uVar15 + uVar8);
              uVar19 = 0;
              if (-1 < (int)uVar5) {
                uVar19 = uVar16;
              }
              uVar16 = uVar23;
              if (uVar11 <= uVar23) {
                uVar16 = uVar11 - 1;
              }
              puVar14 = (undefined8 *)(lVar18 + uVar17 * 0x38);
              uVar11 = 0;
              if (-1 < (int)uVar23) {
                uVar11 = uVar16;
              }
              if (*(int *)(this + 0x2c) != 4) {
                uVar26 = *puVar14;
                uVar25 = *(undefined8 *)(lVar18 + (ulong)(uVar9 * uVar15 + uVar19) * 0x38);
                uVar27 = *(undefined8 *)(lVar18 + (ulong)(uVar11 * uVar15 + uVar8) * 0x38);
                uVar28 = *(undefined8 *)(lVar18 + (ulong)(uVar11 * uVar15 + uVar19) * 0x38);
                uVar29 = NEON_fmadd(*(float *)(this + 0x44) *
                                    ABS(((float)uVar26 + (float)uVar25 + (float)uVar27 +
                                        (float)uVar28) * (float)uVar20 -
                                        ((float)((ulong)uVar26 >> 0x20) +
                                         (float)((ulong)uVar25 >> 0x20) +
                                         (float)((ulong)uVar27 >> 0x20) +
                                        (float)((ulong)uVar28 >> 0x20)) *
                                        (float)((ulong)uVar20 >> 0x20)),*(float *)(this + 0x44),
                                    uVar29);
              }
              if (this[0xd4] != (TerrainDeformation)0x0) {
                lVar18 = lVar18 + uVar17 * 0x38;
                BaseTerrain::setScaledHeightAtPoint
                          (*(BaseTerrain **)(this + 0x38),*(uint *)(lVar18 + 8),
                           *(uint *)(lVar18 + 0xc),*(float *)puVar14);
                uVar13 = *(uint *)(this + 0xf8);
              }
              uVar16 = uVar13 - 1;
              uVar11 = *(uint *)(this + 0xfc);
              uVar19 = uVar5;
              uVar15 = uVar13;
            } while (uVar5 < uVar16);
          }
          uVar21 = uVar23;
        } while (uVar23 < uVar11 - 1);
        TVar6 = this[0xd4];
      }
      if (TVar6 != (TerrainDeformation)0x0) {
        (**(code **)(**(long **)(this + 0x38) + 0x10))();
        markAllTerrainDetailDirty();
      }
    }
    if ((this[0xd5] != (TerrainDeformation)0x0) && (uVar11 = *(uint *)(this + 0x10c), uVar11 != 0))
    {
      uVar21 = *(uint *)(this + 0x108);
      uVar13 = 0;
      uVar15 = uVar21;
      do {
        if (uVar15 != 0) {
          uVar23 = 0;
          do {
            uVar5 = *(uint *)(this + 0x50);
            uVar16 = uVar23 + *(int *)(this + 0xf0);
            uVar19 = *(int *)(this + 0xf4) + uVar13;
            uVar8 = 0;
            if (uVar5 != 0) {
              uVar8 = uVar16 / uVar5;
            }
            uVar9 = uVar13;
            if (uVar11 <= uVar13) {
              uVar9 = uVar11 - 1;
            }
            uVar11 = 0;
            if (-1 < (int)uVar13) {
              uVar11 = uVar9;
            }
            uVar8 = uVar8 - *(int *)(this + 0xe8);
            uVar9 = 0;
            if (uVar5 != 0) {
              uVar9 = uVar19 / uVar5;
            }
            puVar12 = *(uint **)(*(long *)(this + 0x110) +
                                (ulong)((uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU)) +
                                       uVar11 * uVar15) * 8);
            uVar9 = uVar9 - *(int *)(this + 0xec);
            uVar5 = *(uint *)(this + 0xf8);
            uVar4 = *(uint *)(this + 0xfc);
            uVar15 = uVar5 - 1;
            uVar11 = uVar8;
            if (uVar5 <= uVar8) {
              uVar11 = uVar15;
            }
            uVar1 = 0;
            if (-1 < (int)uVar8) {
              uVar1 = uVar11;
            }
            uVar7 = uVar4 - 1;
            uVar11 = uVar9;
            if (uVar4 <= uVar9) {
              uVar11 = uVar7;
            }
            uVar2 = 0;
            if (-1 < (int)uVar9) {
              uVar2 = uVar11;
            }
            if (uVar8 + 1 < uVar5) {
              uVar15 = uVar8 + 1;
            }
            uVar11 = 0;
            if (-1 < (int)(uVar8 + 1)) {
              uVar11 = uVar15;
            }
            if (uVar9 + 1 < uVar4) {
              uVar7 = uVar9 + 1;
            }
            uVar15 = 0;
            if (-1 < (int)(uVar9 + 1)) {
              uVar15 = uVar7;
            }
            if ((*(int *)(this + 0x2c) == 0) && (puVar12 == (uint *)0x0)) {
              lVar18 = *(long *)(this + 0x100);
              if ((*(float *)(lVar18 + (ulong)(uVar2 * uVar5 + uVar1) * 0x38 + 0x14) == 0.0) ||
                 (((*(float *)(lVar18 + (ulong)(uVar2 * uVar5 + uVar11) * 0x38 + 0x14) == 0.0 ||
                   (*(float *)(lVar18 + (ulong)(uVar15 * uVar5 + uVar1) * 0x38 + 0x14) == 0.0)) ||
                  (*(float *)(lVar18 + (ulong)(uVar15 * uVar5 + uVar11) * 0x38 + 0x14) == 0.0)))) {
                puVar12 = *(uint **)(this + 0x90);
                goto LAB_0089f994;
              }
            }
            else {
LAB_0089f994:
              if (puVar12 != (uint *)0x0) {
                if (puVar12[4] < 2) {
                  uVar11 = *puVar12;
                }
                else {
                  uVar11 = TerrainUtil::getRandomLayer
                                     (puVar12[4],puVar12,uVar16,uVar19,(float)puVar12[5],0x762bf67);
                }
                BaseTerrain::getLayersRegion
                          (*(BaseTerrain **)(this + 0x38),uVar16,uVar19,1,1,(uchar *)local_98);
                uVar24 = uVar29;
                if (uVar11 != (byte)local_98[0]) {
                  local_7c[0] = (uchar)uVar11;
                  BaseTerrain::setLayersRegion
                            (*(BaseTerrain **)(this + 0x38),uVar16,uVar19,1,1,local_7c);
                  BaseTerrain::markLayersRegionDirty
                            (*(BaseTerrain **)(this + 0x38),uVar16,uVar19,1,1);
                  uVar24 = NEON_fmadd(*(undefined4 *)(this + 0x48),*(undefined4 *)(this + 0x48),
                                      uVar29);
                  if (*(int *)(this + 0x2c) != 4) {
                    uVar24 = uVar29;
                  }
                }
                uVar21 = *(uint *)(this + 0x108);
                uVar29 = uVar24;
              }
            }
            uVar23 = uVar23 + 1;
            uVar11 = *(uint *)(this + 0x10c);
            uVar15 = uVar21;
          } while (uVar23 < uVar21);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar11);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_98);
  pcVar22 = *(code **)(this + 0xd8);
  uVar20 = *(undefined8 *)(this + 0xe0);
  if (*(void **)(this + 0x100) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x100));
  }
  if (*(void **)(this + 0x110) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x110));
  }
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined2 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  this[0x118] = (TerrainDeformation)0x0;
  if (((byte)this[0x130] & 1) == 0) {
    *(undefined2 *)(this + 0x130) = 0;
  }
  else {
    **(undefined **)(this + 0x140) = 0;
    *(undefined8 *)(this + 0x138) = 0;
  }
  *(code **)(this + 0xd8) = (code *)0x0;
  *(undefined8 *)(this + 0xe0) = 0;
                    /* try { // try from 0089fab4 to 0089faeb has its CatchHandler @ 0089fb34 */
  this_00 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::removeUpdateable(this_00,(Updateable *)(this + 0x20));
  if (pcVar22 != (code *)0x0) {
    pvVar3 = (void *)((ulong)local_98 | 1);
    if (((byte)local_98[0] & 1) != 0) {
      pvVar3 = local_88;
    }
    (*pcVar22)(uVar29,param_1,pvVar3,uVar20);
  }
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar10 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


