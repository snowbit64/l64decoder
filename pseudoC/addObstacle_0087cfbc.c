// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addObstacle
// Entry Point: 0087cfbc
// Size: 460 bytes
// Signature: undefined __thiscall addObstacle(ObstacleAvoidance * this, vector * param_1, vector * param_2)


/* ObstacleAvoidance::addObstacle(std::__ndk1::vector<Vector2, std::__ndk1::allocator<Vector2> >
   const&, std::__ndk1::vector<Vector2, std::__ndk1::allocator<Vector2> > const&) */

void __thiscall
ObstacleAvoidance::addObstacle(ObstacleAvoidance *this,vector *param_1,vector *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined local_88 [4];
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar5 = *(long *)param_1;
  lVar7 = *(long *)(param_1 + 8) - lVar5;
  if (lVar7 != 0) {
    uVar9 = lVar7 >> 3;
    iVar13 = (int)(*(long *)(this + 8) - *(long *)this >> 2) * -0x49249249;
    uVar6 = 0;
    do {
      puVar3 = (undefined8 *)(lVar5 + uVar6 * 8);
      local_74 = 0xffffffffffffffff;
      local_84 = *puVar3;
      if (uVar6 == 0) {
        lVar8 = uVar9 - 1;
        if (lVar8 == 0) {
          lVar11 = *(long *)this;
          uVar14 = 1;
          iVar12 = (int)((ulong)(*(long *)(this + 8) - lVar11) >> 2) * -0x49249249;
          goto LAB_0087d128;
        }
        uVar10 = 1;
        uVar14 = 1;
      }
      else {
        lVar11 = *(long *)this;
        uVar10 = uVar6 + 1;
        iVar12 = (int)(*(long *)(this + 8) - lVar11 >> 2) * -0x49249249;
        lVar8 = uVar6 - 1;
        local_74 = CONCAT44((int)((long)iVar12 + -1),0xffffffff);
        *(int *)(lVar11 + ((long)iVar12 + -1) * 0x1c + 0x14) = iVar12;
        uVar14 = uVar10;
        if (uVar6 == uVar9 - 1) {
LAB_0087d128:
          uVar10 = 0;
          local_74 = CONCAT44(local_74._4_4_,iVar13);
          *(int *)(lVar11 + (long)iVar13 * 0x1c + 0x18) = iVar12;
        }
      }
      local_7c = *(undefined8 *)(*(long *)param_2 + uVar6 * 8);
      if (lVar7 == 0x10) {
        local_88[0] = true;
      }
      else {
        pfVar1 = (float *)(lVar5 + lVar8 * 8);
        pfVar2 = (float *)(lVar5 + uVar10 * 8);
        fVar16 = *pfVar1;
        fVar15 = pfVar1[1];
        fVar15 = (float)NEON_fmadd(fVar16 - *pfVar2,*(float *)(lVar5 + uVar6 * 8 + 4) - fVar15,
                                   (*(float *)puVar3 - fVar16) * -(fVar15 - pfVar2[1]));
        local_88[0] = 0.0 <= fVar15;
      }
      FUN_0087d1b4(this,local_88);
      lVar5 = *(long *)param_1;
      lVar7 = *(long *)(param_1 + 8) - lVar5;
      uVar9 = lVar7 >> 3;
      uVar6 = uVar14;
    } while (uVar14 < uVar9);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


