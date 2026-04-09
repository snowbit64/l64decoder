// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addContactPoint
// Entry Point: 00f4d1d4
// Size: 540 bytes
// Signature: undefined __thiscall addContactPoint(btBridgedManifoldResult * this, btVector3 * param_1, btVector3 * param_2, float param_3)


/* btBridgedManifoldResult::addContactPoint(btVector3 const&, btVector3 const&, float) */

void __thiscall
btBridgedManifoldResult::addContactPoint
          (btBridgedManifoldResult *this,btVector3 *param_1,btVector3 *param_2,float param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined local_4c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar1 = *(long *)(this + 0x10);
  lVar5 = *(long *)(*(long *)(this + 8) + 0x308);
  local_b8 = (float)NEON_fmadd(*(undefined4 *)param_1,param_3,*(float *)param_2);
  lVar7 = *(long *)(lVar1 + 0x10);
  fStack_b4 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 4),param_3,*(float *)(param_2 + 4));
  local_b0 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),param_3,*(float *)(param_2 + 8));
  if (lVar5 == lVar7) {
    fVar17 = *(float *)(lVar5 + 0x40);
    fVar15 = local_b8 - *(float *)(lVar5 + 0x38);
    fVar13 = fStack_b4 - *(float *)(lVar5 + 0x3c);
    uVar18 = *(undefined8 *)(lVar5 + 0x28);
    lVar3 = *(long *)(this + 0x18);
    lVar9 = *(long *)(lVar3 + 0x10);
    fVar11 = (float)*(undefined8 *)(lVar5 + 8) * fVar15 +
             (float)*(undefined8 *)(lVar5 + 0x18) * fVar13;
    fVar12 = (float)((ulong)*(undefined8 *)(lVar5 + 8) >> 0x20) * fVar15 +
             (float)((ulong)*(undefined8 *)(lVar5 + 0x18) >> 0x20) * fVar13;
    uVar14 = NEON_fmadd(*(undefined4 *)(lVar5 + 0x20),fVar13,*(float *)(lVar5 + 0x10) * fVar15);
    uVar16 = *(undefined4 *)(lVar5 + 0x30);
  }
  else {
    lVar3 = *(long *)(this + 0x18);
    lVar9 = *(long *)(lVar3 + 0x10);
    fVar17 = *(float *)(lVar9 + 0x40);
    fVar15 = local_b8 - *(float *)(lVar9 + 0x38);
    fVar13 = fStack_b4 - *(float *)(lVar9 + 0x3c);
    uVar18 = *(undefined8 *)(lVar9 + 0x28);
    fVar11 = (float)*(undefined8 *)(lVar9 + 8) * fVar15 +
             (float)*(undefined8 *)(lVar9 + 0x18) * fVar13;
    fVar12 = (float)((ulong)*(undefined8 *)(lVar9 + 8) >> 0x20) * fVar15 +
             (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) * fVar13;
    uVar14 = NEON_fmadd(*(undefined4 *)(lVar9 + 0x20),fVar13,*(float *)(lVar9 + 0x10) * fVar15);
    uVar16 = *(undefined4 *)(lVar9 + 0x30);
    lVar9 = lVar7;
  }
  fVar17 = local_b0 - fVar17;
  local_e8 = CONCAT44(fVar12 + (float)((ulong)uVar18 >> 0x20) * fVar17,
                      fVar11 + (float)uVar18 * fVar17);
  local_e0 = NEON_fmadd(uVar16,fVar17,uVar14);
  uStack_a0 = *(undefined8 *)(param_1 + 8);
  local_a8 = *(undefined8 *)param_1;
  fVar12 = *(float *)param_2 - *(float *)(lVar9 + 0x38);
  fVar13 = *(float *)(param_2 + 4) - *(float *)(lVar9 + 0x3c);
  local_dc = 0;
  fVar11 = *(float *)(param_2 + 8) - *(float *)(lVar9 + 0x40);
  local_cc = 0;
  uStack_c0 = *(undefined8 *)(param_2 + 8);
  local_c8 = *(undefined8 *)param_2;
  local_90 = 0;
  local_94 = 0;
  uVar14 = NEON_fmadd(*(undefined4 *)(lVar9 + 0x20),fVar13,*(float *)(lVar9 + 0x10) * fVar12);
  local_78 = 0;
  local_70 = 0;
  local_4c = 0;
  local_d8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 8) >> 0x20) * fVar12 +
                      (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) * fVar13 +
                      (float)((ulong)*(undefined8 *)(lVar9 + 0x28) >> 0x20) * fVar11,
                      (float)*(undefined8 *)(lVar9 + 8) * fVar12 +
                      (float)*(undefined8 *)(lVar9 + 0x18) * fVar13 +
                      (float)*(undefined8 *)(lVar9 + 0x28) * fVar11);
  local_d0 = NEON_fmadd(*(undefined4 *)(lVar9 + 0x30),fVar11,uVar14);
  uStack_64 = 0;
  local_6c = 0;
  uStack_54 = 0;
  local_5c = 0;
  local_ac = 0;
  if (lVar5 == lVar7) {
    puVar4 = (undefined4 *)(this + 0x20);
    puVar6 = (undefined4 *)(this + 0x24);
    puVar8 = (undefined4 *)(this + 0x28);
    puVar10 = (undefined4 *)(this + 0x2c);
    lVar5 = lVar1;
  }
  else {
    puVar4 = (undefined4 *)(this + 0x24);
    puVar6 = (undefined4 *)(this + 0x20);
    puVar8 = (undefined4 *)(this + 0x2c);
    puVar10 = (undefined4 *)(this + 0x28);
    lVar5 = lVar3;
    lVar3 = lVar1;
  }
  local_88 = *puVar4;
  uStack_84 = *puVar6;
  local_80 = *puVar8;
  uStack_7c = *puVar10;
  local_98 = param_3;
  fVar11 = (float)(**(code **)(**(long **)(this + 0x38) + 0x18))
                            (*(long **)(this + 0x38),&local_e8,lVar5,local_88,local_80,lVar3);
  if (fVar11 < 0.0) {
    this[0x30] = (btBridgedManifoldResult)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


