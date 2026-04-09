// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCustomShaderVariation
// Entry Point: 00946610
// Size: 1540 bytes
// Signature: undefined __thiscall setCustomShaderVariation(GsMaterial * this, uint param_1, bool param_2)


/* WARNING: Type propagation algorithm not settling */
/* GsMaterial::setCustomShaderVariation(unsigned int, bool) */

void __thiscall GsMaterial::setCustomShaderVariation(GsMaterial *this,uint param_1,bool param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ResourceManager *pRVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  long *plVar17;
  ulong *puVar18;
  ulong uVar19;
  size_t sVar20;
  Resource **ppRVar21;
  int iVar22;
  uint uVar23;
  undefined8 *puVar24;
  uint local_234;
  Resource *local_230 [16];
  undefined8 local_1b0 [40];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar10 = *(long *)(this + 0x80);
  if (lVar10 == 0) {
    uVar9 = 0x25;
    if (*(long *)(this + 0x38) != 0) {
      uVar9 = 0x225;
    }
    *(undefined4 *)(this + 0x98) = uVar9;
    goto LAB_00946bd8;
  }
  uVar15 = (ulong)*(uint *)(this + 0x88);
  uVar19 = (ulong)param_1;
  if (*(uint *)(this + 0x88) == param_1) {
LAB_00946b48:
    uVar13 = 0x25;
    if (*(long *)(this + 0x38) != 0) {
      uVar13 = 0x225;
    }
    *(uint *)(this + 0x98) = uVar13;
  }
  else {
    lVar11 = *(long *)(lVar10 + 0x110);
    uVar14 = (*(long *)(lVar10 + 0x118) - lVar11 >> 5) * 0x6db6db6db6db6db7;
    if (uVar14 < uVar15 || uVar14 - uVar15 == 0) {
      uVar13 = 0;
      uVar15 = 0;
    }
    else {
      lVar10 = lVar11 + uVar15 * 0xe0;
      uVar13 = (uint)((ulong)(*(long *)(lVar10 + 0x48) - *(long *)(lVar10 + 0x40)) >> 3);
      uVar15 = (ulong)(*(long *)(lVar10 + 0x60) - *(long *)(lVar10 + 0x58)) >> 3;
    }
    iVar22 = (int)uVar15;
    if (uVar14 < uVar19 || uVar14 - uVar19 == 0) {
      uVar23 = 0;
      uVar14 = 0;
      if (!param_2) goto LAB_009466f8;
LAB_00946768:
      pvVar5 = *(void **)(this + 0x78);
      if (uVar13 != 0) {
        memcpy(local_1b0,pvVar5,(ulong)uVar13 << 4);
      }
      if (iVar22 != 0) {
        memcpy(local_230,*(void **)(this + 0x70),(uVar15 & 0xffffffff) << 3);
      }
      if (uVar13 != uVar23) {
        if (pvVar5 != (void *)0x0) {
          operator_delete__(pvVar5);
        }
        pvVar5 = operator_new__((ulong)uVar23 << 4);
        *(void **)(this + 0x78) = pvVar5;
      }
      if (iVar22 != (int)uVar14) {
        if (*(void **)(this + 0x70) != (void *)0x0) {
          operator_delete__(*(void **)(this + 0x70));
        }
        pvVar5 = operator_new__((uVar14 & 0xffffffff) << 3);
        *(void **)(this + 0x70) = pvVar5;
      }
      if (uVar23 != 0) {
        uVar6 = 0;
        do {
          lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(this + 0x80) + 0x110) + uVar19 * 0xe0 +
                                      0x40) + uVar6 * 8);
          uVar7 = *(undefined8 *)(lVar10 + 0x30);
          puVar24 = (undefined8 *)(*(long *)(this + 0x78) + uVar6 * 0x10);
          puVar24[1] = *(undefined8 *)(lVar10 + 0x38);
          *puVar24 = uVar7;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar23);
      }
      sVar20 = (uVar14 & 0xffffffff) * 8;
      memset(*(void **)(this + 0x70),0,sVar20);
      if (uVar13 != 0) {
        lVar10 = 0;
        puVar24 = local_1b0;
        do {
          pbVar12 = *(byte **)(*(long *)(*(long *)(*(CustomShader **)(this + 0x80) + 0x110) +
                                         (ulong)*(uint *)(this + 0x88) * 0xe0 + 0x40) + lVar10);
          pbVar16 = *(byte **)(pbVar12 + 0x10);
          if ((*pbVar12 & 1) == 0) {
            pbVar16 = pbVar12 + 1;
          }
          uVar6 = CustomShader::getParameterIndex
                            (*(CustomShader **)(this + 0x80),param_1,(char *)pbVar16,&local_234);
          if ((uVar6 & 1) != 0) {
            uVar7 = *puVar24;
            puVar2 = (undefined8 *)(*(long *)(this + 0x78) + (ulong)local_234 * 0x10);
            puVar2[1] = puVar24[1];
            *puVar2 = uVar7;
          }
          lVar10 = lVar10 + 8;
          puVar24 = puVar24 + 2;
        } while ((ulong)uVar13 * 8 - lVar10 != 0);
      }
      if (iVar22 != 0) {
        lVar10 = 0;
        do {
          lVar11 = *(long *)((long)local_230 + lVar10);
          if (lVar11 != 0) {
            pbVar12 = *(byte **)(*(long *)(*(long *)(*(CustomShader **)(this + 0x80) + 0x110) +
                                           (ulong)*(uint *)(this + 0x88) * 0xe0 + 0x58) + lVar10);
            pbVar16 = *(byte **)(pbVar12 + 0x10);
            if ((*pbVar12 & 1) == 0) {
              pbVar16 = pbVar12 + 1;
            }
            uVar6 = CustomShader::getTextureIndex
                              (*(CustomShader **)(this + 0x80),param_1,(char *)pbVar16,&local_234);
            if ((uVar6 & 1) != 0) {
              *(long *)(*(long *)(this + 0x70) + (ulong)local_234 * 8) = lVar11;
              FUN_00f276d0(1,*(long *)(*(long *)(this + 0x70) + (ulong)local_234 * 8) + 8);
            }
          }
          lVar10 = lVar10 + 8;
        } while ((uVar15 & 0xffffffff) * 8 - lVar10 != 0);
      }
      if ((int)uVar14 != 0) {
        lVar10 = 0;
        do {
          if (*(long *)(*(long *)(this + 0x70) + lVar10) == 0) {
            lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(this + 0x80) + 0x110) + uVar19 * 0xe0 +
                                        0x58) + lVar10);
            bVar1 = *(byte *)(lVar11 + 0x18);
            uVar14 = (ulong)(bVar1 >> 1);
            if ((bVar1 & 1) != 0) {
              uVar14 = *(ulong *)(lVar11 + 0x20);
            }
            if (uVar14 != 0) {
              if ((bVar1 & 1) == 0) {
                pcVar8 = (char *)(lVar11 + 0x19);
              }
              else {
                pcVar8 = *(char **)(lVar11 + 0x28);
                if (pcVar8 == (char *)0x0) goto LAB_009469e0;
              }
              uVar7 = TextureUtil::loadMaterialTexture(pcVar8,*(bool *)(lVar11 + 0x30),1);
              *(undefined8 *)(*(long *)(this + 0x70) + lVar10) = uVar7;
            }
          }
LAB_009469e0:
          lVar10 = lVar10 + 8;
        } while (sVar20 - lVar10 != 0);
      }
      if (iVar22 != 0) {
        uVar15 = uVar15 & 0xffffffff;
        ppRVar21 = local_230;
        do {
          pRVar4 = (ResourceManager *)ResourceManager::getInstance();
          ResourceManager::release(pRVar4,*ppRVar21);
          uVar15 = uVar15 - 1;
          ppRVar21 = ppRVar21 + 1;
        } while (uVar15 != 0);
      }
    }
    else {
      lVar11 = lVar11 + uVar19 * 0xe0;
      uVar23 = (uint)((ulong)(*(long *)(lVar11 + 0x48) - *(long *)(lVar11 + 0x40)) >> 3);
      uVar14 = (ulong)(*(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58)) >> 3;
      if (param_2) goto LAB_00946768;
LAB_009466f8:
      if (iVar22 != 0) {
        lVar10 = 0;
        do {
          pRVar4 = (ResourceManager *)ResourceManager::getInstance();
          ResourceManager::release(pRVar4,*(Resource **)(*(long *)(this + 0x70) + lVar10));
          lVar10 = lVar10 + 8;
        } while ((uVar15 & 0xffffffff) * 8 - lVar10 != 0);
      }
      if (iVar22 != (int)uVar14) {
        if (*(void **)(this + 0x70) != (void *)0x0) {
          operator_delete__(*(void **)(this + 0x70));
        }
        pvVar5 = operator_new__((uVar14 & 0xffffffff) << 3);
        *(void **)(this + 0x70) = pvVar5;
      }
      if (uVar13 == uVar23) {
        sVar20 = (ulong)uVar23 << 4;
      }
      else {
        if (*(void **)(this + 0x78) != (void *)0x0) {
          operator_delete__(*(void **)(this + 0x78));
        }
        sVar20 = (ulong)uVar23 << 4;
        pvVar5 = operator_new__(sVar20);
        *(void **)(this + 0x78) = pvVar5;
      }
      memset(*(void **)(this + 0x70),0,(uVar14 & 0xffffffff) << 3);
      memset(*(void **)(this + 0x78),0,sVar20);
    }
    lVar10 = *(long *)(this + 0x80);
    *(uint *)(this + 0x88) = param_1;
    uVar15 = (*(long *)(lVar10 + 0x30) - *(long *)(lVar10 + 0x28) >> 3) * 0x38e38e39;
    if ((int)uVar15 == 0) goto LAB_00946b48;
    uVar15 = uVar15 & 0xffffffff;
    plVar17 = (long *)(*(long *)(lVar10 + 0x28) + 8);
    puVar18 = (ulong *)(this + 0x148);
    do {
      uVar14 = (ulong)*(uint *)(*plVar17 + uVar19 * 4) << 0x20;
      if (puVar18[-0x12] != 0) {
        puVar18[-0x12] = puVar18[-0x12] & 0xffffffff | uVar14;
      }
      if (puVar18[-0xf] != 0) {
        puVar18[-0xf] = puVar18[-0xf] & 0xffffffff | uVar14;
      }
      if (puVar18[-0xc] != 0) {
        puVar18[-0xc] = puVar18[-0xc] & 0xffffffff | uVar14;
      }
      if (puVar18[-9] != 0) {
        puVar18[-9] = puVar18[-9] & 0xffffffff | uVar14;
      }
      if (puVar18[-6] != 0) {
        puVar18[-6] = puVar18[-6] & 0xffffffff | uVar14;
      }
      if (puVar18[-3] != 0) {
        puVar18[-3] = puVar18[-3] & 0xffffffff | uVar14;
      }
      if (*puVar18 != 0) {
        *puVar18 = *puVar18 & 0xffffffff | uVar14;
      }
      uVar15 = uVar15 - 1;
      plVar17 = plVar17 + 9;
      puVar18 = puVar18 + 1;
    } while (uVar15 != 0);
    uVar13 = 0x25;
    if (*(long *)(this + 0x38) != 0) {
      uVar13 = 0x225;
    }
    *(uint *)(this + 0x98) = uVar13;
    if (lVar10 == 0) goto LAB_00946bd8;
  }
  uVar15 = (*(long *)(lVar10 + 0x118) - *(long *)(lVar10 + 0x110) >> 5) * 0x6db6db6db6db6db7;
  if (uVar15 < uVar19 || uVar15 - uVar19 == 0) {
    uVar23 = 0xffffffff;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x110) + uVar19 * 0xe0;
    uVar13 = *(uint *)(lVar10 + 0x70) | uVar13;
    uVar23 = ~*(uint *)(lVar10 + 0x74);
  }
  *(uint *)(this + 0x98) = uVar23 & uVar13;
LAB_00946bd8:
  this[0x160] = (GsMaterial)0x1;
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


