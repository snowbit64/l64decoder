// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drawPlane
// Entry Point: 009af5c4
// Size: 716 bytes
// Signature: undefined __thiscall drawPlane(btIDebugDraw * this, btVector3 * param_1, float param_2, btTransform * param_3, btVector3 * param_4)


/* btIDebugDraw::drawPlane(btVector3 const&, float, btTransform const&, btVector3 const&) */

void __thiscall
btIDebugDraw::drawPlane
          (btIDebugDraw *this,btVector3 *param_1,float param_2,btTransform *param_3,
          btVector3 *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float local_88;
  float fStack_84;
  float local_80;
  undefined4 local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar6 = *(float *)(param_1 + 4);
  fVar7 = *(float *)(param_1 + 8);
  fVar5 = *(float *)param_1;
  fVar4 = fVar5 * param_2;
  fVar3 = fVar6 * param_2;
  fVar2 = fVar7 * param_2;
  if (ABS(fVar7) <= 0.7071068) {
    fVar8 = (float)NEON_fmadd(fVar5,fVar5,fVar6 * fVar6);
    fVar12 = 1.0 / SQRT(fVar8);
    fVar9 = fVar5 * fVar12;
    fVar5 = fVar8 * fVar12;
    fVar11 = 0.0;
    fVar8 = fVar9 * -fVar7;
    fVar7 = fVar7 * fVar12 * -fVar6;
    fVar12 = fVar12 * -fVar6 * 100.0;
  }
  else {
    fVar8 = (float)NEON_fmadd(fVar6,fVar6,fVar7 * fVar7);
    fVar11 = 1.0 / SQRT(fVar8);
    fVar9 = fVar11 * -fVar7;
    fVar8 = fVar8 * fVar11;
    fVar12 = 0.0;
    fVar7 = fVar6 * fVar11 * -fVar5;
    fVar5 = fVar5 * fVar9;
    fVar11 = fVar6 * fVar11 * 100.0;
  }
  fVar16 = fVar4 + fVar12;
  fVar12 = fVar4 - fVar12;
  fVar18 = fVar2 + fVar11;
  fVar11 = fVar2 - fVar11;
  fVar19 = fVar3 + fVar9 * 100.0;
  fVar6 = fVar3 - fVar9 * 100.0;
  fVar9 = fVar4 + fVar8 * 100.0;
  fVar4 = fVar4 - fVar8 * 100.0;
  uVar13 = NEON_fmadd(fVar16,*(undefined4 *)param_3,fVar19 * *(float *)(param_3 + 4));
  uVar20 = NEON_fmadd(fVar16,*(undefined4 *)(param_3 + 0x10),fVar19 * *(float *)(param_3 + 0x14));
  uVar17 = NEON_fmadd(fVar16,*(undefined4 *)(param_3 + 0x20),fVar19 * *(float *)(param_3 + 0x24));
  uVar14 = NEON_fmadd(fVar12,*(undefined4 *)param_3,fVar6 * *(float *)(param_3 + 4));
  uVar15 = NEON_fmadd(fVar12,*(undefined4 *)(param_3 + 0x10),fVar6 * *(float *)(param_3 + 0x14));
  uVar10 = NEON_fmadd(fVar12,*(undefined4 *)(param_3 + 0x20),fVar6 * *(float *)(param_3 + 0x24));
  local_6c = 0;
  local_78 = (float)NEON_fmadd(fVar18,*(undefined4 *)(param_3 + 8),uVar13);
  fStack_74 = (float)NEON_fmadd(fVar18,*(undefined4 *)(param_3 + 0x18),uVar20);
  local_70 = (float)NEON_fmadd(fVar18,*(undefined4 *)(param_3 + 0x28),uVar17);
  local_88 = (float)NEON_fmadd(fVar11,*(undefined4 *)(param_3 + 8),uVar14);
  fStack_84 = (float)NEON_fmadd(fVar11,*(undefined4 *)(param_3 + 0x18),uVar15);
  local_80 = (float)NEON_fmadd(fVar11,*(undefined4 *)(param_3 + 0x28),uVar10);
  fVar6 = fVar3 + fVar7 * 100.0;
  local_78 = local_78 + *(float *)(param_3 + 0x30);
  fStack_74 = fStack_74 + *(float *)(param_3 + 0x34);
  local_70 = local_70 + *(float *)(param_3 + 0x38);
  local_88 = local_88 + *(float *)(param_3 + 0x30);
  fStack_84 = fStack_84 + *(float *)(param_3 + 0x34);
  local_80 = local_80 + *(float *)(param_3 + 0x38);
  fVar8 = fVar2 + fVar5 * 100.0;
  fVar3 = fVar3 - fVar7 * 100.0;
  fVar2 = fVar2 - fVar5 * 100.0;
  local_7c = 0;
  (**(code **)(*(long *)this + 0x20))(this,&local_78,&local_88,param_4);
  uVar15 = NEON_fmadd(fVar9,*(undefined4 *)param_3,fVar6 * *(float *)(param_3 + 4));
  uVar10 = NEON_fmadd(fVar4,*(undefined4 *)param_3,fVar3 * *(float *)(param_3 + 4));
  uVar17 = NEON_fmadd(fVar9,*(undefined4 *)(param_3 + 0x10),fVar6 * *(float *)(param_3 + 0x14));
  uVar13 = NEON_fmadd(fVar4,*(undefined4 *)(param_3 + 0x10),fVar3 * *(float *)(param_3 + 0x14));
  uVar20 = NEON_fmadd(fVar9,*(undefined4 *)(param_3 + 0x20),fVar6 * *(float *)(param_3 + 0x24));
  uVar14 = NEON_fmadd(fVar4,*(undefined4 *)(param_3 + 0x20),fVar3 * *(float *)(param_3 + 0x24));
  local_78 = (float)NEON_fmadd(fVar8,*(undefined4 *)(param_3 + 8),uVar15);
  fStack_74 = (float)NEON_fmadd(fVar8,*(undefined4 *)(param_3 + 0x18),uVar17);
  local_88 = (float)NEON_fmadd(fVar2,*(undefined4 *)(param_3 + 8),uVar10);
  fStack_84 = (float)NEON_fmadd(fVar2,*(undefined4 *)(param_3 + 0x18),uVar13);
  local_70 = (float)NEON_fmadd(fVar8,*(undefined4 *)(param_3 + 0x28),uVar20);
  local_80 = (float)NEON_fmadd(fVar2,*(undefined4 *)(param_3 + 0x28),uVar14);
  local_78 = local_78 + *(float *)(param_3 + 0x30);
  fStack_74 = fStack_74 + *(float *)(param_3 + 0x34);
  local_88 = local_88 + *(float *)(param_3 + 0x30);
  local_70 = local_70 + *(float *)(param_3 + 0x38);
  local_6c = 0;
  fStack_84 = fStack_84 + *(float *)(param_3 + 0x34);
  local_80 = local_80 + *(float *)(param_3 + 0x38);
  local_7c = 0;
  (**(code **)(*(long *)this + 0x20))(this,&local_78,&local_88,param_4);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


