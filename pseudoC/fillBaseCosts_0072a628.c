// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillBaseCosts
// Entry Point: 0072a628
// Size: 836 bytes
// Signature: undefined __thiscall fillBaseCosts(VehicleNavigationMapGenerator * this, uint param_1, uint param_2, PhysicsTask * param_3, bool * param_4)


/* VehicleNavigationMapGenerator::fillBaseCosts(unsigned int, unsigned int,
   VehicleNavigationMapGenerator::PhysicsTask*, bool&) */

void __thiscall
VehicleNavigationMapGenerator::fillBaseCosts
          (VehicleNavigationMapGenerator *this,uint param_1,uint param_2,PhysicsTask *param_3,
          bool *param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uchar uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  uchar *__s;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float afStack_c0 [5];
  float local_ac;
  long local_a8;
  
  lVar12 = tpidr_el0;
  local_a8 = *(long *)(lVar12 + 0x28);
  lVar4 = *(long *)(this + 0x108);
  lVar5 = *(long *)(this + 0x110);
  uVar6 = *(uint *)(lVar4 + 0xec);
  uVar10 = -uVar6;
  fVar24 = *(float *)(lVar4 + 0xc0) * 64.0;
  fVar21 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0xc4));
  fVar22 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 200));
  uVar3 = 0x40 << (ulong)(uVar6 & 0x1f);
  if ((int)uVar6 < 0) {
    uVar3 = 0x40 >> (ulong)(uVar10 & 0x1f);
  }
  __s = (uchar *)operator_new__((ulong)(uVar3 * uVar3));
  if ((int)*(uint *)(lVar4 + 0xe4) < 0) {
    memset(__s,0,(ulong)(uVar3 * uVar3));
  }
  else {
    if ((int)uVar6 < 0) {
      uVar14 = (param_1 << 6) >> (ulong)(uVar10 & 0x1f);
      uVar15 = (param_2 << 6) >> (ulong)(uVar10 & 0x1f);
    }
    else {
      uVar14 = (param_1 << 6) << (ulong)(uVar6 & 0x1f);
      uVar15 = (param_2 << 6) << (ulong)(uVar6 & 0x1f);
    }
    BaseTerrain::getInfoLayerData
              ((BaseTerrain *)(lVar5 + 0x170),*(uint *)(lVar4 + 0xe4),*(uint *)(lVar4 + 0xe8),uVar14
               ,uVar15,uVar3,uVar3,__s);
  }
  uVar23 = NEON_fmadd((float)(ulong)param_1,fVar24,fVar21 * -0.5);
  uVar25 = NEON_fmadd((float)(ulong)param_2,fVar24,fVar22 * -0.5);
  *param_4 = true;
  uVar20 = 0;
  do {
    uVar18 = 0;
    uVar19 = (uint)uVar20;
    uVar14 = uVar19 << (ulong)(uVar6 & 0x1f);
    uVar1 = uVar20 + 1;
    uVar15 = (int)uVar1 << (ulong)(uVar6 & 0x1f);
    do {
      uVar26 = NEON_fmadd((float)(uVar20 & 0xffffffff) + 0.5,
                          *(undefined4 *)(*(long *)(this + 0x108) + 0xc0),uVar23);
      uVar27 = NEON_fmadd((float)(uVar18 & 0xffffffff) + 0.5,
                          *(undefined4 *)(*(long *)(this + 0x108) + 0xc0),uVar25);
      uVar13 = BaseTerrain::getLodTextureSize();
      fVar22 = (float)(uVar13 & 0xffffffff) /
               (*(float *)(lVar5 + 0x218) * (float)(ulong)(*(int *)(lVar5 + 0x200) - 1));
      uVar13 = BaseTerrain::getLodTextureSize();
      fVar21 = (float)NEON_fmadd(uVar26,fVar22,(float)(uVar13 & 0xffffffff) * 0.5);
      uVar13 = BaseTerrain::getLodTextureSize();
      local_ac = 1.0;
      fVar22 = (float)NEON_fmadd(uVar27,fVar22,(float)(uVar13 & 0xffffffff) * 0.5);
      BaseTerrain::getAttributes
                ((BaseTerrain *)(lVar5 + 0x170),(int)(fVar21 + -0.5),(int)(fVar22 + -0.5),afStack_c0
                 ,(bool *)0x0,6);
      if (local_ac < 0.0) {
LAB_0072a7ac:
        *(undefined4 *)(*(long *)(param_3 + 0x28) + (uVar20 + uVar18 * 0x40) * 4) = 0x7f7fffff;
      }
      else {
        uVar17 = (uint)uVar18;
        if (uVar6 == 0) {
          uVar7 = __s[uVar19 + uVar3 * uVar17];
joined_r0x0072a8d8:
          if (uVar7 != '\0') goto LAB_0072a7ac;
        }
        else {
          if ((int)uVar6 < 1) {
            uVar7 = __s[(uVar19 >> (ulong)(uVar10 & 0x1f)) +
                        (uVar17 >> (ulong)(uVar10 & 0x1f)) * uVar3];
            goto joined_r0x0072a8d8;
          }
          if (uVar14 < uVar15) {
            uVar8 = uVar17 << (ulong)(uVar6 & 0x1f);
            uVar9 = uVar17 + 1 << (ulong)(uVar6 & 0x1f);
            uVar16 = uVar14 + uVar3 * uVar8;
            uVar17 = uVar14;
            do {
              iVar11 = uVar9 - uVar8;
              uVar2 = uVar16;
              if (uVar8 < uVar9) {
                do {
                  if (__s[uVar2] != '\0') goto LAB_0072a7ac;
                  uVar2 = uVar2 + uVar3;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
              uVar17 = uVar17 + 1;
              uVar16 = uVar16 + 1;
            } while (uVar17 < uVar15);
          }
        }
        fVar21 = local_ac;
        if (local_ac <= 0.01) {
          fVar21 = 0.01;
        }
        *(float *)(*(long *)(param_3 + 0x28) + (uVar20 + uVar18 * 0x40) * 4) = fVar21;
        *param_4 = false;
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != 0x40);
    uVar20 = uVar1;
    if (uVar1 == 0x40) {
      operator_delete__(__s);
      if (*(long *)(lVar12 + 0x28) == local_a8) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


