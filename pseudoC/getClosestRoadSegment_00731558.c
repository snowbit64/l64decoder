// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClosestRoadSegment
// Entry Point: 00731558
// Size: 644 bytes
// Signature: undefined __thiscall getClosestRoadSegment(VehicleNavigationMap * this, Vector3 * param_1, Vector3 * param_2, float param_3, uint * param_4, float * param_5)


/* VehicleNavigationMap::getClosestRoadSegment(Vector3 const&, Vector3 const&, float, unsigned int&,
   float&) */

void __thiscall
VehicleNavigationMap::getClosestRoadSegment
          (VehicleNavigationMap *this,Vector3 *param_1,Vector3 *param_2,float param_3,uint *param_4,
          float *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  Vector3 *pVVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint local_dc;
  undefined4 local_d8;
  float fStack_d4;
  undefined4 local_d0;
  Vector3 aVStack_c8 [16];
  float local_b8;
  float fStack_b4;
  float local_b0;
  long local_a8;
  
  lVar4 = tpidr_el0;
  local_a8 = *(long *)(lVar4 + 0x28);
  if (*(long *)(this + 0x30) != *(long *)(this + 0x38)) {
    bVar5 = true;
    if ((*(float *)param_2 == 0.0) && (*(float *)(param_2 + 4) == 0.0)) {
      bVar5 = *(float *)(param_2 + 8) != 0.0;
    }
    lVar7 = *(long *)(this + 0x48);
    if (lVar7 != 0) {
      uVar3 = *(uint *)(lVar7 + 0x10) >> 1;
      if ((*(uint *)(lVar7 + 0x10) & 1) != 0) {
        uVar3 = 1;
      }
      if (uVar3 != 0) {
        fVar21 = param_3 * param_3;
        fVar22 = 0.0;
        uVar8 = 0;
        fVar15 = param_3 + 1.0;
        local_dc = 0xffffffff;
        fVar18 = *(float *)param_1 - fVar15;
        fVar19 = *(float *)(param_1 + 8) - fVar15;
        fVar20 = fVar15 + *(float *)param_1;
        fVar15 = fVar15 + *(float *)(param_1 + 8);
        do {
          pfVar10 = (float *)(lVar7 + (ulong)uVar8 * 0x14);
          uVar11 = (ulong)uVar8;
          fVar13 = *pfVar10;
          fVar16 = pfVar10[2];
          fVar14 = fVar18;
          if (fVar18 < fVar13) {
            fVar14 = fVar13;
          }
          fVar13 = fVar20;
          if (fVar16 < fVar20) {
            fVar13 = fVar16;
          }
          if (fVar13 < fVar14) {
LAB_00731630:
            uVar1 = *(uint *)(lVar7 + uVar11 * 0x14 + 0x10);
            uVar2 = uVar1 >> 1;
            if ((uVar1 & 1) != 0) {
              uVar2 = 1;
            }
            uVar8 = uVar2 + uVar8;
          }
          else {
            lVar9 = lVar7 + uVar11 * 0x14;
            fVar13 = *(float *)(lVar9 + 4);
            fVar16 = *(float *)(lVar9 + 0xc);
            fVar14 = fVar19;
            if (fVar19 < fVar13) {
              fVar14 = fVar13;
            }
            fVar13 = fVar15;
            if (fVar16 < fVar15) {
              fVar13 = fVar16;
            }
            if (fVar13 < fVar14) goto LAB_00731630;
            uVar2 = *(uint *)(lVar7 + uVar11 * 0x14 + 0x10);
            if ((uVar2 & 1) != 0) {
              lVar7 = (ulong)(uVar2 >> 1) * 4;
              pVVar12 = (Vector3 *)
                        (*(long *)(this + 0x18) +
                        (ulong)*(ushort *)(*(long *)(this + 0x30) + lVar7) * 0x50);
              fVar14 = (float)RoadSegment::getClosestPosition(pVVar12,param_1);
              uVar17 = NEON_fmadd(*(float *)(param_1 + 4) - fStack_b4,
                                  *(float *)(param_1 + 4) - fStack_b4,
                                  (*(float *)param_1 - local_b8) * (*(float *)param_1 - local_b8));
              fVar13 = (float)NEON_fmadd(*(float *)(param_1 + 8) - local_b0,
                                         *(float *)(param_1 + 8) - local_b0,uVar17);
              if (fVar13 < fVar21) {
                RoadSegment::getPositionAndDirection(fVar14,pVVar12,aVStack_c8);
                if (bVar5) {
                  uVar17 = NEON_fmadd(local_d8,*(undefined4 *)param_2,
                                      fStack_d4 * *(float *)(param_2 + 4));
                  fVar16 = (float)NEON_fmadd(local_d0,*(undefined4 *)(param_2 + 8),uVar17);
                  if (fVar16 <= 0.0) goto LAB_00731764;
                }
                local_dc = (uint)*(ushort *)(*(long *)(this + 0x30) + lVar7);
                fVar21 = fVar13;
                fVar22 = fVar14;
              }
            }
LAB_00731764:
            uVar8 = uVar8 + 1;
          }
          if (uVar8 == uVar3) goto LAB_00731770;
          lVar7 = *(long *)(this + 0x48);
        } while( true );
      }
    }
  }
LAB_00731794:
  uVar6 = 0;
LAB_00731798:
  if (*(long *)(lVar4 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
LAB_00731770:
  if (local_dc != 0xffffffff) {
    uVar6 = 1;
    *param_4 = local_dc;
    *param_5 = fVar22;
    goto LAB_00731798;
  }
  goto LAB_00731794;
}


