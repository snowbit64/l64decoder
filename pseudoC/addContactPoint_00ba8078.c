// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addContactPoint
// Entry Point: 00ba8078
// Size: 680 bytes
// Signature: undefined __thiscall addContactPoint(ConvexTriangleCallback * this, btVector3 * param_1, btVector3 * param_2, float param_3)


/* Bt2HeightfieldTerrainShape::ConvexTriangleCallback::addContactPoint(btVector3 const&, btVector3
   const&, float) */

void __thiscall
Bt2HeightfieldTerrainShape::ConvexTriangleCallback::addContactPoint
          (ConvexTriangleCallback *this,btVector3 *param_1,btVector3 *param_2,float param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar7 = *(undefined4 *)param_1;
  fVar9 = *(float *)(param_1 + 4);
  uVar10 = *(undefined4 *)(param_1 + 8);
  puVar3 = *(undefined4 **)(*(long *)(this + 0x30) + 0x18);
  local_7c = 0;
  uVar14 = NEON_fmadd(*puVar3,uVar7,(float)puVar3[4] * fVar9);
  uVar15 = NEON_fmadd(puVar3[1],uVar7,fVar9 * (float)puVar3[5]);
  uVar7 = NEON_fmadd(puVar3[2],uVar7,fVar9 * (float)puVar3[6]);
  local_88 = NEON_fmadd(puVar3[8],uVar10,uVar14);
  uStack_84 = NEON_fmadd(puVar3[9],uVar10,uVar15);
  local_80 = NEON_fmadd(puVar3[10],uVar10,uVar7);
  fVar9 = *(float *)(param_2 + 4) - (float)puVar3[0xd];
  fVar11 = *(float *)param_2 - (float)puVar3[0xc];
  fVar12 = *(float *)(param_2 + 8) - (float)puVar3[0xe];
  local_8c = 0;
  uVar10 = NEON_fmadd(puVar3[2],fVar11,fVar9 * (float)puVar3[6]);
  uVar14 = NEON_fmadd(*puVar3,fVar11,fVar9 * (float)puVar3[4]);
  uVar7 = NEON_fmadd(puVar3[1],fVar11,fVar9 * (float)puVar3[5]);
  local_90 = (float)NEON_fmadd(puVar3[10],fVar12,uVar10);
  local_98 = (float)NEON_fmadd(puVar3[8],fVar12,uVar14);
  fStack_94 = (float)NEON_fmadd(puVar3[9],fVar12,uVar7);
  btNearestPointInLineSegment
            ((btVector3 *)&local_98,*(btVector3 **)(this + 0x28),*(btVector3 **)(this + 0x28) + 0x10
             ,(btVector3 *)&local_a8);
  uVar7 = NEON_fmadd(local_98 - local_a8,local_98 - local_a8,
                     (fStack_94 - fStack_a4) * (fStack_94 - fStack_a4));
  fVar12 = (float)NEON_fmadd(local_90 - local_a0,local_90 - local_a0,uVar7);
  btNearestPointInLineSegment
            ((btVector3 *)&local_98,(btVector3 *)(*(long *)(this + 0x28) + 0x10),
             (btVector3 *)(*(long *)(this + 0x28) + 0x20),(btVector3 *)&local_a8);
  uVar7 = NEON_fmadd(local_98 - local_a8,local_98 - local_a8,
                     (fStack_94 - fStack_a4) * (fStack_94 - fStack_a4));
  fVar13 = (float)NEON_fmadd(local_90 - local_a0,local_90 - local_a0,uVar7);
  fVar11 = fVar13;
  fVar9 = fVar12;
  if (fVar13 >= fVar12) {
    fVar11 = fVar12;
    fVar9 = fVar13;
  }
  uVar4 = (uint)(fVar13 < fVar12);
  btNearestPointInLineSegment
            ((btVector3 *)&local_98,*(btVector3 **)(this + 0x28) + 0x20,*(btVector3 **)(this + 0x28)
             ,(btVector3 *)&local_a8);
  uVar7 = NEON_fmadd(local_98 - local_a8,local_98 - local_a8,
                     (fStack_94 - fStack_a4) * (fStack_94 - fStack_a4));
  fVar8 = (float)NEON_fmadd(local_90 - local_a0,local_90 - local_a0,uVar7);
  if (fVar11 <= fVar8) {
    uVar6 = (uint)(fVar12 <= fVar13);
    fVar12 = fVar11;
    uVar5 = uVar4;
    if (fVar8 < fVar9) {
      uVar6 = 2;
      fVar9 = fVar8;
    }
  }
  else {
    fVar12 = fVar8;
    fVar9 = fVar11;
    uVar5 = 2;
    uVar6 = uVar4;
  }
  if ((0.01 < fVar12) ||
     ((uVar2 = addNewContactPoint(this,uVar5,param_1,param_2,param_3,(btVector3 *)&local_88),
      (uVar2 & 1) == 0 &&
      ((0.01 <= fVar9 ||
       (uVar2 = addNewContactPoint(this,uVar6,param_1,param_2,param_3,(btVector3 *)&local_88),
       (uVar2 & 1) == 0)))))) {
    (**(code **)(**(long **)(this + 8) + 0x20))(param_3,*(long **)(this + 8),param_1,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


