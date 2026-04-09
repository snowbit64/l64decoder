// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addNewContactPoint
// Entry Point: 00ba8320
// Size: 900 bytes
// Signature: undefined __thiscall addNewContactPoint(ConvexTriangleCallback * this, int param_1, btVector3 * param_2, btVector3 * param_3, float param_4, btVector3 * param_5)


/* Bt2HeightfieldTerrainShape::ConvexTriangleCallback::addNewContactPoint(int, btVector3 const&,
   btVector3 const&, float, btVector3 const&) */

void __thiscall
Bt2HeightfieldTerrainShape::ConvexTriangleCallback::addNewContactPoint
          (ConvexTriangleCallback *this,int param_1,btVector3 *param_2,btVector3 *param_3,
          float param_4,btVector3 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float local_98;
  float fStack_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float fStack_70;
  undefined4 local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  iVar4 = 0;
  if (param_1 != 2) {
    iVar4 = param_1 + 1;
  }
  uVar5 = param_1 - 1;
  lVar9 = *(long *)(this + 0x28);
  puVar1 = (undefined8 *)(lVar9 + (long)iVar4 * 0x10);
  puVar2 = (undefined8 *)(lVar9 + (long)param_1 * 0x10);
  uVar11 = *puVar1;
  if (param_1 < 1) {
    uVar5 = 2;
  }
  local_68 = (float)uVar11 - (float)*puVar2;
  fStack_64 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)*puVar2 >> 0x20);
  local_5c = 0;
  puVar3 = (undefined8 *)(lVar9 + (ulong)uVar5 * 0x10);
  local_60 = *(float *)(puVar1 + 1) - *(float *)(puVar2 + 1);
  uVar11 = *puVar3;
  fVar12 = (float)uVar11 - (float)*puVar2;
  fVar13 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)*puVar2 >> 0x20);
  fVar14 = *(float *)(puVar3 + 1) - *(float *)(puVar2 + 1);
  local_6c = 0;
  local_78 = -local_60 * fVar13 + fVar14 * fStack_64;
  local_74 = fVar14 * -local_68 + fVar12 * local_60;
  fStack_70 = fVar12 * -fStack_64 + fVar13 * local_68;
  uVar7 = getTriangleOppositeConvexNormal
                    (*(Bt2HeightfieldTerrainShape **)(this + 0x38),(btVector3 *)&local_78,
                     (btVector3 *)&local_68,(btVector3 *)puVar2,
                     *(int *)(this + (long)param_1 * 8 + 0x10),
                     *(int *)(this + (long)param_1 * 8 + 0x14),(btVector3 *)&local_88);
  if ((uVar7 & 1) == 0) {
    puVar10 = *(undefined4 **)(*(long *)(this + 0x30) + 0x18);
    plVar8 = *(long **)(this + 8);
    uVar20 = NEON_fmadd(puVar10[4],local_78,local_74 * (float)puVar10[5]);
    uVar18 = NEON_fmadd(*puVar10,local_78,(float)puVar10[1] * local_74);
    uVar19 = NEON_fmadd(puVar10[8],local_78,local_74 * (float)puVar10[9]);
    fStack_94 = (float)NEON_fmadd(puVar10[6],fStack_70,uVar20);
    local_98 = (float)NEON_fmadd(puVar10[2],fStack_70,uVar18);
    local_90 = (float)NEON_fmadd(puVar10[10],fStack_70,uVar19);
    uVar19 = NEON_fmadd(local_98,local_98,fStack_94 * fStack_94);
    fVar12 = (float)NEON_fmadd(local_90,local_90,uVar19);
    fVar12 = 1.0 / SQRT(fVar12);
    fStack_94 = fStack_94 * fVar12;
    local_98 = local_98 * fVar12;
    local_90 = local_90 * fVar12;
    uVar19 = NEON_fmadd(local_98,*(float *)param_2,fStack_94 * *(float *)(param_2 + 4));
    fVar12 = (float)NEON_fmadd(local_90,*(float *)(param_2 + 8),uVar19);
    fVar12 = fVar12 * param_4;
    local_58 = (*(float *)param_2 * param_4 + *(float *)param_3) - local_98 * fVar12;
    fStack_54 = (*(float *)(param_2 + 4) * param_4 + *(float *)(param_3 + 4)) - fStack_94 * fVar12;
    local_50 = (*(float *)(param_2 + 8) * param_4 + *(float *)(param_3 + 8)) - local_90 * fVar12;
  }
  else {
    fVar16 = *(float *)(param_5 + 8);
    fVar17 = *(float *)param_5;
    fVar15 = *(float *)(param_5 + 4);
    fVar12 = (float)NEON_fmadd(fStack_70,fVar17,fVar16 * -local_78);
    uVar19 = NEON_fmadd(local_74,fVar16,fVar15 * -fStack_70);
    uVar20 = NEON_fmadd(local_78,fVar15,fVar17 * -local_74);
    uVar19 = NEON_fmadd(uVar19,local_68,fVar12 * fStack_64);
    fVar21 = (float)NEON_fmadd(uVar20,local_60,uVar19);
    fVar12 = local_78;
    fVar13 = local_74;
    fVar14 = fStack_70;
    if (0.0 <= fVar21) {
      fVar12 = (float)NEON_fmadd(local_80,fVar17,fVar16 * -local_88);
      uVar20 = NEON_fmadd(local_84,fVar16,fVar15 * -local_80);
      uVar19 = NEON_fmadd(local_88,fVar15,fVar17 * -local_84);
      uVar20 = NEON_fmadd(uVar20,local_68,fStack_64 * fVar12);
      fVar15 = (float)NEON_fmadd(uVar19,local_60,uVar20);
      fVar12 = local_88;
      fVar13 = local_84;
      fVar14 = local_80;
      if (fVar15 <= 0.0) {
        uVar11 = 0;
        goto LAB_00ba866c;
      }
    }
    plVar8 = *(long **)(this + 8);
    puVar10 = *(undefined4 **)(*(long *)(this + 0x30) + 0x18);
    uVar20 = NEON_fmadd(puVar10[4],fVar12,fVar13 * (float)puVar10[5]);
    uVar18 = NEON_fmadd(*puVar10,fVar12,fVar13 * (float)puVar10[1]);
    uVar19 = NEON_fmadd(puVar10[8],fVar12,fVar13 * (float)puVar10[9]);
    fStack_94 = (float)NEON_fmadd(puVar10[6],fVar14,uVar20);
    local_98 = (float)NEON_fmadd(puVar10[2],fVar14,uVar18);
    local_90 = (float)NEON_fmadd(puVar10[10],fVar14,uVar19);
    uVar19 = NEON_fmadd(local_98,local_98,fStack_94 * fStack_94);
    fVar12 = (float)NEON_fmadd(local_90,local_90,uVar19);
    fVar12 = 1.0 / SQRT(fVar12);
    fStack_94 = fStack_94 * fVar12;
    local_98 = local_98 * fVar12;
    local_90 = local_90 * fVar12;
    uVar19 = NEON_fmadd(local_98,*(float *)param_2,fStack_94 * *(float *)(param_2 + 4));
    fVar12 = (float)NEON_fmadd(local_90,*(float *)(param_2 + 8),uVar19);
    fVar12 = fVar12 * param_4;
    local_58 = (*(float *)param_2 * param_4 + *(float *)param_3) - local_98 * fVar12;
    fStack_54 = (*(float *)(param_2 + 4) * param_4 + *(float *)(param_3 + 4)) - fStack_94 * fVar12;
    local_50 = (*(float *)(param_2 + 8) * param_4 + *(float *)(param_3 + 8)) - local_90 * fVar12;
  }
  local_8c = 0;
  local_4c = 0;
  (**(code **)(*plVar8 + 0x20))(plVar8,&local_98,&local_58);
  uVar11 = 1;
LAB_00ba866c:
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


