// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: project
// Entry Point: 00f620f8
// Size: 552 bytes
// Signature: undefined __thiscall project(btConvexShape * this, btTransform * param_1, btVector3 * param_2, float * param_3, float * param_4, btVector3 * param_5, btVector3 * param_6)


/* btConvexShape::project(btTransform const&, btVector3 const&, float&, float&, btVector3&,
   btVector3&) const */

void __thiscall
btConvexShape::project
          (btConvexShape *this,btTransform *param_1,btVector3 *param_2,float *param_3,float *param_4
          ,btVector3 *param_5,btVector3 *param_6)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  undefined4 local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fVar2 = *(float *)param_2;
  fVar7 = *(float *)(param_2 + 4);
  local_7c = 0;
  fVar10 = *(float *)(param_2 + 8);
  uVar3 = NEON_fmadd(*(undefined4 *)(param_1 + 0x18),fVar7,*(float *)(param_1 + 8) * fVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  local_88 = (float)*(undefined8 *)param_1 * fVar2 + (float)*(undefined8 *)(param_1 + 0x10) * fVar7
             + (float)uVar6 * fVar10;
  fStack_84 = (float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar2 +
              (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * fVar7 +
              (float)((ulong)uVar6 >> 0x20) * fVar10;
  fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),fVar10,uVar3);
  local_80 = fVar7;
  fVar2 = (float)(**(code **)(*(long *)this + 0x80))(this,&local_88);
  local_8c = 0;
  uVar8 = NEON_fmadd(*(undefined4 *)(param_1 + 4),fVar7,fVar2 * *(float *)param_1);
  uVar11 = NEON_fmadd(*(undefined4 *)(param_1 + 0x14),fVar7,*(float *)(param_1 + 0x10) * fVar2);
  uVar3 = NEON_fmadd(*(undefined4 *)(param_1 + 0x24),fVar7,*(float *)(param_1 + 0x20) * fVar2);
  uVar13 = (undefined4)uVar6;
  fVar9 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),uVar13,uVar8);
  fVar12 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x18),uVar13,uVar11);
  local_98 = CONCAT44(-fStack_84,-local_88);
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),uVar13,uVar3);
  fVar5 = *(float *)(param_1 + 0x38);
  fVar4 = *(float *)(param_1 + 0x34);
  local_90 = -local_80;
  fVar2 = fVar2 + fVar5;
  fVar9 = fVar9 + *(float *)(param_1 + 0x30);
  fVar12 = fVar12 + fVar4;
  fVar7 = (float)(**(code **)(*(long *)this + 0x80))(this,&local_98);
  uVar3 = NEON_fmadd(*(undefined4 *)(param_1 + 4),fVar4,fVar7 * *(float *)param_1);
  uVar13 = NEON_fmadd(*(undefined4 *)(param_2 + 4),fVar12,*(float *)param_2 * fVar9);
  uVar8 = NEON_fmadd(*(undefined4 *)(param_1 + 0x14),fVar4,*(float *)(param_1 + 0x10) * fVar7);
  fVar10 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),fVar5,uVar3);
  fVar15 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x18),fVar5,uVar8);
  fVar16 = *(float *)(param_1 + 0x34);
  fVar14 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),fVar2,uVar13);
  uVar3 = NEON_fmadd(*(undefined4 *)(param_1 + 0x24),fVar4,*(float *)(param_1 + 0x20) * fVar7);
  uVar13 = *(undefined4 *)(param_1 + 0x28);
  fVar10 = fVar10 + *(float *)(param_1 + 0x30);
  fVar4 = *(float *)(param_1 + 0x38);
  *param_3 = fVar14;
  fVar7 = (float)NEON_fmadd(uVar13,fVar5,uVar3);
  fVar15 = fVar15 + fVar16;
  fVar7 = fVar7 + fVar4;
  uVar3 = NEON_fmadd(*(undefined4 *)(param_2 + 4),fVar15,*(float *)param_2 * fVar10);
  fVar4 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),fVar7,uVar3);
  *param_4 = fVar4;
  *(float *)param_6 = fVar10;
  *(float *)(param_6 + 4) = fVar15;
  *(float *)(param_6 + 8) = fVar7;
  *(undefined4 *)(param_6 + 0xc) = 0;
  *(float *)param_5 = fVar9;
  *(float *)(param_5 + 4) = fVar12;
  *(float *)(param_5 + 8) = fVar2;
  *(undefined4 *)(param_5 + 0xc) = 0;
  fVar4 = *param_3;
  if (*param_4 < fVar4) {
    *param_3 = *param_4;
    *param_4 = fVar4;
    *(float *)param_6 = fVar9;
    *(float *)(param_6 + 4) = fVar12;
    *(float *)(param_6 + 8) = fVar2;
    *(undefined4 *)(param_6 + 0xc) = 0;
    *(float *)param_5 = fVar10;
    *(float *)(param_5 + 4) = fVar15;
    *(float *)(param_5 + 8) = fVar7;
    *(undefined4 *)(param_5 + 0xc) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


