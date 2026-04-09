// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processTriangle
// Entry Point: 00f93514
// Size: 788 bytes
// Signature: undefined __thiscall processTriangle(btConvexTriangleCallback * this, btVector3 * param_1, int param_2, int param_3)


/* btConvexTriangleCallback::processTriangle(btVector3*, int, int) */

void __thiscall
btConvexTriangleCallback::processTriangle
          (btConvexTriangleCallback *this,btVector3 *param_1,int param_2,int param_3)

{
  float *pfVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  long local_100;
  undefined ***pppuStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  int local_e0;
  int iStack_dc;
  undefined **local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined4 local_9c;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar13 = NEON_fminnm(*(float *)param_1,*(float *)(param_1 + 0x10));
  fVar14 = (float)NEON_fminnm(uVar13,*(float *)(param_1 + 0x20));
  if (fVar14 <= *(float *)(this + 0x28)) {
    lVar5 = (ulong)(*(float *)param_1 <= *(float *)(param_1 + 0x10)) * 0x10;
    if (*(float *)(param_1 + lVar5) <= *(float *)(param_1 + 0x20)) {
      lVar5 = 0x20;
    }
    if (*(float *)(this + 0x18) <= *(float *)(param_1 + lVar5)) {
      fVar14 = *(float *)(param_1 + 8);
      fVar11 = *(float *)(param_1 + 0x18);
      fVar12 = *(float *)(param_1 + 0x28);
      uVar13 = NEON_fminnm(fVar14,fVar11);
      fVar15 = (float)NEON_fminnm(uVar13,fVar12);
      if (fVar15 <= *(float *)(this + 0x30)) {
        pfVar1 = (float *)(param_1 + 8);
        if (fVar14 <= fVar11) {
          pfVar1 = (float *)(param_1 + 0x18);
        }
        if (*pfVar1 <= fVar12) {
          pfVar1 = (float *)(param_1 + 0x28);
        }
        if (*(float *)(this + 0x20) <= *pfVar1) {
          fVar14 = *(float *)(param_1 + 4);
          fVar11 = *(float *)(param_1 + 0x14);
          fVar12 = *(float *)(param_1 + 0x24);
          uVar13 = NEON_fminnm(fVar14,fVar11);
          fVar15 = (float)NEON_fminnm(uVar13,fVar12);
          if (fVar15 <= *(float *)(this + 0x2c)) {
            pfVar1 = (float *)(param_1 + 4);
            if (fVar14 <= fVar11) {
              pfVar1 = (float *)(param_1 + 0x14);
            }
            if (*pfVar1 <= fVar12) {
              pfVar1 = (float *)(param_1 + 0x24);
            }
            if (*(float *)(this + 0x1c) <= *pfVar1) {
              if (*(int *)(*(long *)(*(long *)(this + 8) + 8) + 8) < 0x14) {
                uStack_80 = *(undefined8 *)(param_1 + 8);
                local_88 = *(undefined8 *)param_1;
                uStack_70 = *(undefined8 *)(param_1 + 0x18);
                local_78 = *(undefined8 *)(param_1 + 0x10);
                local_c8 = 0;
                local_90 = (undefined8 *)0x0;
                plVar10 = *(long **)(this + 0x40);
                uStack_b4 = 0x3f800000;
                local_bc = 0x3f8000003f800000;
                uStack_60 = *(undefined8 *)(param_1 + 0x28);
                uStack_68 = *(undefined8 *)(param_1 + 0x20);
                local_c0 = 0xffffffff;
                local_d8 = &PTR__btPolyhedralConvexShape_00fe1bf8;
                local_100 = *(long *)(this + 0x10);
                local_9c = *(undefined4 *)(this + 0x50);
                pppuStack_f8 = &local_d8;
                local_d0 = 1;
                local_f0 = *(undefined8 *)(local_100 + 0x10);
                uStack_e8 = *(undefined8 *)(local_100 + 0x18);
                local_e0 = param_2;
                iStack_dc = param_3;
                plVar4 = (long *)(**(code **)(*plVar10 + 0x10))
                                           (plVar10,*(long *)(this + 8),&local_100,
                                            *(undefined8 *)(this + 0x58));
                plVar6 = *(long **)(this + 0x38);
                plVar7 = plVar6 + 2;
                lVar5 = *plVar7;
                if (*(long *)(lVar5 + 0x10) == *(long *)(*(long *)(this + 0x10) + 0x10)) {
                  lVar8 = 2;
                }
                else {
                  lVar8 = 3;
                  plVar7 = plVar6 + 3;
                  lVar5 = *plVar7;
                }
                lVar9 = *plVar6;
                *plVar7 = (long)&local_100;
                (**(code **)(lVar9 + lVar8 * 8))(plVar6,param_2,param_3);
                (**(code **)(*plVar4 + 0x10))
                          (plVar4,*(undefined8 *)(this + 8),&local_100,*(undefined8 *)(this + 0x48),
                           *(undefined8 *)(this + 0x38));
                lVar8 = 0x10;
                if (*(long *)(*(long *)(*(long *)(this + 0x38) + 0x10) + 0x10) !=
                    *(long *)(*(long *)(this + 0x10) + 0x10)) {
                  lVar8 = 0x18;
                }
                *(long *)(*(long *)(this + 0x38) + lVar8) = lVar5;
                (**(code **)*plVar4)(plVar4);
                (**(code **)(*plVar10 + 0x78))(plVar10,plVar4);
                local_d8 = &PTR__btPolyhedralConvexShape_0101ade0;
                if (local_90 != (undefined8 *)0x0) {
                  (**(code **)*local_90)();
                  if (local_90 != (undefined8 *)0x0) {
                    gNumAlignedFree = gNumAlignedFree + 1;
                    (*(code *)PTR_FUN_01048e40)();
                  }
                }
              }
              bVar3 = *(char *)(*(long *)(this + 0x38) + 0x30) != '\0';
              goto LAB_00f9370c;
            }
          }
        }
      }
    }
  }
  bVar3 = true;
LAB_00f9370c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


