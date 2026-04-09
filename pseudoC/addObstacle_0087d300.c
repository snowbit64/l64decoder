// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addObstacle
// Entry Point: 0087d300
// Size: 528 bytes
// Signature: undefined __thiscall addObstacle(ObstacleAvoidance * this, vector * param_1)


/* ObstacleAvoidance::addObstacle(std::__ndk1::vector<Vector2, std::__ndk1::allocator<Vector2> >
   const&) */

void __thiscall ObstacleAvoidance::addObstacle(ObstacleAvoidance *this,vector *param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined local_98 [4];
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  lVar6 = *(long *)param_1;
  lVar7 = *(long *)(param_1 + 8) - lVar6;
  if (lVar7 != 0) {
    uVar10 = lVar7 >> 3;
    iVar14 = (int)(*(long *)(this + 8) - *(long *)this >> 2) * -0x49249249;
    uVar8 = 0;
    do {
      puVar2 = (undefined8 *)(lVar6 + uVar8 * 8);
      local_84 = 0xffffffffffffffff;
      local_94 = *puVar2;
      if (uVar8 == 0) {
        lVar9 = uVar10 - 1;
        if (lVar9 == 0) {
          lVar12 = *(long *)this;
          uVar15 = 1;
          iVar13 = (int)((ulong)(*(long *)(this + 8) - lVar12) >> 2) * -0x49249249;
          goto LAB_0087d474;
        }
        uVar11 = 1;
        uVar15 = 1;
      }
      else {
        lVar12 = *(long *)this;
        uVar11 = uVar8 + 1;
        iVar13 = (int)(*(long *)(this + 8) - lVar12 >> 2) * -0x49249249;
        lVar9 = uVar8 - 1;
        local_84 = CONCAT44((int)((long)iVar13 + -1),0xffffffff);
        *(int *)(lVar12 + ((long)iVar13 + -1) * 0x1c + 0x14) = iVar13;
        uVar15 = uVar11;
        if (uVar8 == uVar10 - 1) {
LAB_0087d474:
          uVar11 = 0;
          local_84 = CONCAT44(local_84._4_4_,iVar14);
          *(int *)(lVar12 + (long)iVar14 * 0x1c + 0x18) = iVar13;
        }
      }
      puVar3 = (undefined8 *)(lVar6 + uVar11 * 8);
      puVar4 = (undefined8 *)(lVar6 + uVar8 * 8);
      uVar19 = *puVar4;
      fVar16 = (float)*puVar3 - (float)uVar19;
      fVar17 = (float)((ulong)*puVar3 >> 0x20) - (float)((ulong)uVar19 >> 0x20);
      fVar18 = fVar17 * fVar17 + fVar16 * fVar16;
      fVar20 = 1.0;
      if (1e-06 < fVar18) {
        fVar20 = 1.0 / SQRT(fVar18);
      }
      local_8c = CONCAT44(fVar17 * fVar20,fVar16 * fVar20);
      if (lVar7 == 0x10) {
        local_98[0] = true;
      }
      else {
        pfVar1 = (float *)(lVar6 + lVar9 * 8);
        fVar17 = *pfVar1;
        fVar16 = pfVar1[1];
        fVar16 = (float)NEON_fmadd(fVar17 - *(float *)puVar3,*(float *)((long)puVar4 + 4) - fVar16,
                                   (*(float *)puVar2 - fVar17) *
                                   -(fVar16 - *(float *)((long)puVar3 + 4)));
        local_98[0] = 0.0 <= fVar16;
      }
      FUN_0087d1b4(this,local_98);
      lVar6 = *(long *)param_1;
      lVar7 = *(long *)(param_1 + 8) - lVar6;
      uVar10 = lVar7 >> 3;
      uVar8 = uVar15;
    } while (uVar15 < uVar10);
  }
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


