// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getHeadingBounds
// Entry Point: 0073a780
// Size: 404 bytes
// Signature: undefined __thiscall getHeadingBounds(VehicleNavigationAgent * this, Vector2 * param_1, Vector2 * param_2, PlanarPose * param_3)


/* VehicleNavigationAgent::getHeadingBounds(Vector2&, Vector2&, PlanarPose const&) const */

void __thiscall
VehicleNavigationAgent::getHeadingBounds
          (VehicleNavigationAgent *this,Vector2 *param_1,Vector2 *param_2,PlanarPose *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  OrientedBox *this_00;
  long lVar4;
  long lVar5;
  OrientedBox *pOVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(this + 0x12d8);
  lVar5 = *(long *)(this + 0x12e0);
  if (lVar4 != lVar5) {
    uVar2 = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)param_2 = uVar2;
    *(undefined8 *)param_1 = uVar2;
    pOVar6 = *(OrientedBox **)(this + 0x12e0);
    for (this_00 = *(OrientedBox **)(this + 0x12d8); this_00 != pOVar6; this_00 = this_00 + 0x1c) {
      lVar3 = *(long *)(this + 0x12a0);
      fStack_9c = *(float *)(param_3 + 8);
      local_a8 = *(float *)(param_3 + 0xc);
      fVar10 = *(float *)(lVar3 + 0xc) + 0.5;
      fVar8 = -local_a8;
      fVar7 = *(float *)(lVar3 + 0x1c) + *(float *)(lVar3 + 0x10) + 0.5;
      uVar11 = NEON_fmadd(fStack_9c,fVar7,*(undefined4 *)param_3);
      uVar12 = NEON_fmadd(local_a8,fVar7,*(undefined4 *)(param_3 + 4));
      fStack_a4 = -fStack_9c;
      fVar13 = (float)NEON_fmsub(local_a8,fVar10,uVar11);
      fVar14 = (float)NEON_fmadd(fStack_9c,fVar10,uVar12);
      local_a0 = fVar8;
      fVar7 = (float)OrientedBox::support(this_00,(Vector2 *)&local_a8);
      fVar9 = (float)NEON_fmadd(fVar7 - fVar13,*(undefined4 *)(param_1 + 4),
                                *(float *)param_1 * -(fVar8 - fVar14));
      if (0.0 < fVar9) {
        *(float *)param_1 = fVar7 - fVar13;
        *(float *)(param_1 + 4) = fVar8 - fVar14;
      }
      fVar13 = (float)NEON_fmsub(local_a0,fVar10,uVar11);
      fVar10 = (float)NEON_fmsub(fStack_9c,fVar10,uVar12);
      fVar7 = fStack_9c;
      fVar8 = (float)OrientedBox::support(this_00,(Vector2 *)&local_a0);
      fVar9 = (float)NEON_fmadd(fVar8 - fVar13,*(undefined4 *)(param_2 + 4),
                                *(float *)param_2 * -(fVar7 - fVar10));
      if (fVar9 < 0.0) {
        *(float *)param_2 = fVar8 - fVar13;
        *(float *)(param_2 + 4) = fVar7 - fVar10;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4 != lVar5);
}


