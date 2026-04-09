// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addSingleResult
// Entry Point: 009ba2e0
// Size: 772 bytes
// Signature: undefined __thiscall addSingleResult(VehicleConvexResultCallback * this, LocalConvexResult * param_1, bool param_2)


/* Bt2RaycastVehicle::VehicleConvexResultCallback::addSingleResult(btCollisionWorld::LocalConvexResult&,
   bool) */

void __thiscall
Bt2RaycastVehicle::VehicleConvexResultCallback::addSingleResult
          (VehicleConvexResultCallback *this,LocalConvexResult *param_1,bool param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 local_1e0;
  undefined ***local_1d8;
  long lStack_1d0;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  float fStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined local_140;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined local_11c;
  undefined **local_f8;
  undefined4 local_f0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (param_2) {
    uVar16 = *(undefined4 *)(param_1 + 0x10);
    fVar17 = *(float *)(param_1 + 0x14);
    uVar14 = *(undefined4 *)(param_1 + 0x18);
    uVar15 = *(undefined4 *)(param_1 + 0x1c);
    lVar3 = *(long *)param_1;
  }
  else {
    lVar3 = *(long *)param_1;
    uVar15 = 0;
    uVar14 = *(undefined4 *)(param_1 + 0x10);
    fVar17 = *(float *)(param_1 + 0x14);
    uVar16 = NEON_fmadd(*(undefined4 *)(lVar3 + 8),uVar14,*(float *)(lVar3 + 0xc) * fVar17);
    uVar19 = *(undefined4 *)(param_1 + 0x18);
    uVar8 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x18),uVar14,fVar17 * *(float *)(lVar3 + 0x1c));
    uVar14 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x28),uVar14,fVar17 * *(float *)(lVar3 + 0x2c));
    uVar16 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x10),uVar19,uVar16);
    fVar17 = (float)NEON_fmadd(*(undefined4 *)(lVar3 + 0x20),uVar19,uVar8);
    uVar14 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x30),uVar19,uVar14);
  }
  if (((*(int *)(*(long *)(lVar3 + 200) + 8) - 0x15U < 2) && (*(long *)(param_1 + 8) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 8) + 8), puVar6 != (undefined8 *)0x0)) {
    btPolyhedralConvexShape::btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_f8);
    local_f0 = 1;
    local_f8 = &PTR__btPolyhedralConvexShape_00fe1bf8;
    uStack_a0 = puVar6[1];
    local_a8 = *puVar6;
    lStack_1d0 = *(long *)param_1;
    puVar1 = *(undefined8 **)(param_1 + 8);
    uStack_90 = puVar6[3];
    local_98 = puVar6[2];
    uStack_80 = puVar6[5];
    local_88 = puVar6[4];
    local_1c0 = *puVar1;
    local_1c8 = (undefined8 *)(lStack_1d0 + 8);
    fVar9 = *(float *)(param_1 + 0x24) - *(float *)(lStack_1d0 + 0x3c);
    fVar7 = *(float *)(param_1 + 0x20) - *(float *)(lStack_1d0 + 0x38);
    fVar10 = *(float *)(param_1 + 0x28) - *(float *)(lStack_1d0 + 0x40);
    local_1e0 = 0;
    local_1ac = 0;
    local_19c = 0;
    uVar8 = NEON_fmadd(*(undefined4 *)(lStack_1d0 + 0x10),fVar7,
                       fVar9 * *(float *)(lStack_1d0 + 0x20));
    uStack_180 = *(undefined8 *)(param_1 + 0x28);
    local_188 = *(undefined8 *)(param_1 + 0x20);
    uStack_134 = 0;
    local_13c = 0;
    uStack_124 = 0;
    local_12c = 0;
    uStack_190 = *(undefined8 *)(param_1 + 0x28);
    local_198 = *(undefined8 *)(param_1 + 0x20);
    local_1b8 = CONCAT44((float)((ulong)*(undefined8 *)(lStack_1d0 + 0x18) >> 0x20) * fVar9 +
                         (float)((ulong)*local_1c8 >> 0x20) * fVar7 +
                         (float)((ulong)*(undefined8 *)(lStack_1d0 + 0x28) >> 0x20) * fVar10,
                         (float)*(undefined8 *)(lStack_1d0 + 0x18) * fVar9 +
                         (float)*local_1c8 * fVar7 +
                         (float)*(undefined8 *)(lStack_1d0 + 0x28) * fVar10);
    local_1b0 = NEON_fmadd(*(undefined4 *)(lStack_1d0 + 0x30),fVar10,uVar8);
    local_148 = 0;
    local_140 = 0;
    local_11c = 0;
    local_168 = 0;
    uStack_160 = 0;
                    /* try { // try from 009ba498 to 009ba4ab has its CatchHandler @ 009ba5e4 */
    local_1d8 = &local_f8;
    local_1a8 = local_1b8;
    local_1a0 = local_1b0;
    local_178 = uVar16;
    fStack_174 = fVar17;
    local_170 = uVar14;
    uStack_16c = uVar15;
    BtAdjustInternalEdgeContacts
              ((btManifoldPoint *)&local_1b8,(btCollisionObjectWrapper *)&local_1e0,
               (btCollisionObjectWrapper *)0x0,*(int *)puVar1,*(int *)((long)puVar1 + 4),0);
    uVar15 = uStack_16c;
    uVar14 = local_170;
    fVar17 = fStack_174;
    uVar16 = local_178;
    btPolyhedralConvexShape::~btPolyhedralConvexShape((btPolyhedralConvexShape *)&local_f8);
  }
  fVar10 = *(float *)(this + 0x18);
  fVar9 = *(float *)(this + 0x1c);
  fVar11 = *(float *)(this + 0x20);
  uVar8 = NEON_fmadd(fVar10,uVar16,fVar17 * fVar9);
  fVar7 = (float)NEON_fmadd(fVar11,uVar14,uVar8);
  uVar8 = 0x3f800000;
  if (fVar7 <= -0.5) {
    fVar21 = *(float *)(this + 0x4c);
    uVar19 = NEON_fmadd(*(float *)(this + 0x28),*(float *)(param_1 + 0x20),
                        *(float *)(this + 0x2c) * *(float *)(param_1 + 0x24));
    fVar12 = *(float *)(param_1 + 0x30);
    fVar20 = (float)NEON_fmadd(*(float *)(this + 0x30),*(float *)(param_1 + 0x28),uVar19);
    fVar20 = fVar20 - *(float *)(this + 0x48);
    fVar7 = (*(float *)(param_1 + 0x24) - *(float *)(this + 0x2c) * fVar20) -
            (fVar21 * fVar9 * fVar12 + *(float *)(this + 0x3c));
    fVar13 = (*(float *)(param_1 + 0x20) - *(float *)(this + 0x28) * fVar20) -
             (*(float *)(this + 0x38) + fVar10 * fVar12 * fVar21);
    fVar20 = (*(float *)(param_1 + 0x28) - *(float *)(this + 0x30) * fVar20) -
             (fVar21 * fVar11 * fVar12 + *(float *)(this + 0x40));
    uVar18 = NEON_fmadd(fVar13,fVar13,fVar7 * fVar7);
    uVar19 = NEON_fmadd(fVar10,fVar13,fVar9 * fVar7);
    fVar9 = (float)NEON_fmadd(fVar20,fVar20,uVar18);
    fVar7 = (float)NEON_fmadd(fVar11,fVar20,uVar19);
    if (SQRT(fVar9) * 0.5 <= fVar7) {
      *(float *)(this + 8) = fVar12;
      uVar4 = *(undefined8 *)param_1;
      *(undefined4 *)(this + 0x50) = uVar16;
      *(float *)(this + 0x54) = fVar17;
      *(undefined4 *)(this + 0x58) = uVar14;
      *(undefined4 *)(this + 0x5c) = uVar15;
      *(undefined8 *)(this + 0x68) = uVar4;
      puVar5 = *(uint **)(param_1 + 8);
      if (puVar5 != (uint *)0x0) {
        puVar5 = (uint *)(ulong)*puVar5;
      }
      *(int *)(this + 0x60) = (int)puVar5;
      uVar8 = *(undefined4 *)(param_1 + 0x30);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


