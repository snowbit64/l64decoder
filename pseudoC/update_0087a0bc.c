// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0087a0bc
// Size: 1416 bytes
// Signature: undefined __thiscall update(ObstacleWallDetector * this, Vector3 * param_1, Vector3 * param_2, ObstacleAvoidance * param_3)


/* ObstacleWallDetector::update(Vector3 const&, Vector3 const&, ObstacleAvoidance*) */

void __thiscall
ObstacleWallDetector::update
          (ObstacleWallDetector *this,Vector3 *param_1,Vector3 *param_2,ObstacleAvoidance *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  Bt2ScenegraphPhysicsContext *this_00;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 local_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  ObstacleWallDetector *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined4 uStack_b4;
  float local_b0;
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  ScenegraphPhysicsContextManager::getInstance();
  this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  fVar20 = *(float *)param_2;
  fVar15 = *(float *)(param_2 + 4);
  fVar12 = *(float *)(param_2 + 8);
  fVar22 = 1.0;
  uVar10 = NEON_fmadd(fVar20,fVar20,fVar15 * fVar15);
  fVar13 = (float)NEON_fmadd(fVar12,fVar12,uVar10);
  fVar11 = 1.0;
  if (1e-06 < fVar13) {
    fVar22 = 1.0 / SQRT(fVar13);
  }
  fVar12 = fVar12 * fVar22;
  fVar14 = fVar20 * fVar22;
  fVar15 = fVar15 * fVar22;
  fVar18 = (float)NEON_fmadd(fVar14,0,fVar12 * -0.0);
  fVar19 = (float)NEON_fnmsub(fVar15,0,fVar14);
  fVar13 = fVar12 + fVar15 * -0.0;
  uVar10 = NEON_fmadd(fVar13,fVar13,fVar18 * fVar18);
  fVar23 = (float)NEON_fmadd(fVar19,fVar19,uVar10);
  if (1e-06 < fVar23) {
    fVar11 = 1.0 / SQRT(fVar23);
  }
  fVar18 = fVar18 * fVar11;
  uVar7 = *(undefined8 *)param_1;
  fVar19 = fVar19 * fVar11;
  fVar13 = fVar13 * fVar11;
  *(undefined4 *)(this + 0x3a8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x3a0) = uVar7;
  lVar9 = (long)*(int *)(this + (long)*(int *)(this + 0x38c) * 4 + 0x360);
  uVar10 = *(undefined4 *)(param_1 + 8);
  uVar7 = *(undefined8 *)param_1;
  puVar1 = (undefined4 *)(this + lVar9 * 0x40);
  fVar23 = (float)NEON_fmadd(fVar15,fVar19,fVar18 * -fVar12);
  fVar11 = (float)NEON_fmadd(fVar12,fVar13,fVar19 * -(fVar20 * fVar22));
  uVar24 = *puVar1;
  fVar20 = (float)puVar1[1];
  uVar25 = puVar1[2];
  uVar21 = NEON_fmadd(uVar24,fVar13,fVar23 * fVar20);
  uVar17 = NEON_fmadd(uVar24,fVar18,fVar11 * fVar20);
  local_b8 = (float)NEON_fmadd(uVar25,fVar14,uVar21);
  fVar11 = (float)NEON_fmadd(fVar14,fVar18,fVar13 * -fVar15);
  uStack_b4 = NEON_fmadd(uVar25,fVar15,uVar17);
  uVar17 = NEON_fmadd(uVar24,fVar19,fVar11 * fVar20);
  *(ulong *)(puVar1 + 3) = CONCAT44(uStack_b4,local_b8);
  puVar1[8] = uVar10;
  local_b0 = (float)NEON_fmadd(uVar25,fVar12,uVar17);
  puVar8 = (undefined8 *)(puVar1 + 6);
  *puVar8 = uVar7;
  fVar11 = *(float *)(this + 0x39c);
  puVar1[5] = local_b0;
  puVar1[7] = fVar11 + (float)puVar1[7];
  fVar12 = atan2f(local_b8,local_b0);
  puVar4 = (undefined8 *)&local_b8;
  fVar11 = fVar12 + 6.283185;
  if (0.0 <= fVar12) {
    fVar11 = fVar12;
  }
  puVar1[0xd] = fVar11;
  *(undefined4 *)(this + lVar9 * 0x10 + 0x24c) = 0xbf800000;
  Bt2ScenegraphPhysicsContext::raycastShapes
            (this_00,(Vector3 *)puVar8,(Vector3 *)puVar4,
             (IRaycastReport *)(this + lVar9 * 0x10 + 0x240),*(float *)(this + 0x390),true,
             *(uint *)(this + 900),true,true,2);
  lVar5 = 0;
  iVar2 = 0;
  if (*(int *)(this + 0x38c) < 8) {
    iVar2 = *(int *)(this + 0x38c) + 1;
  }
  lVar6 = 0x24c;
  *(int *)(this + 0x38c) = iVar2;
  do {
    fVar11 = (float)*(undefined8 *)(this + lVar6);
    if (fVar11 != -1.0) {
      *(undefined4 *)(this + lVar5 + 0x30) = 0x7f7fffff;
      if (fVar11 == 3.402823e+38) {
        *(float *)(this + lVar5 + 0x30) = fVar11;
      }
      else if (0.0 <= fVar11) {
        *(undefined4 *)(this + lVar6) = 0xbf800000;
        if (this[lVar5 + 0x3c] == (ObstacleWallDetector)0x0) {
          fVar12 = fVar11 - *(float *)(this + 0x394);
          if (fVar11 - *(float *)(this + 0x394) <= 0.01) {
            fVar12 = 0.01;
          }
          *(float *)(this + lVar5 + 0x30) = fVar12;
          *(ulong *)(this + lVar5 + 0x24) =
               CONCAT44((float)((ulong)*(undefined8 *)(this + lVar5 + 0xc) >> 0x20) * fVar12 +
                        (float)((ulong)*(undefined8 *)(this + lVar5 + 0x18) >> 0x20),
                        (float)*(undefined8 *)(this + lVar5 + 0xc) * fVar12 +
                        (float)*(undefined8 *)(this + lVar5 + 0x18));
          *(float *)(this + lVar5 + 0x2c) =
               fVar12 * *(float *)(this + lVar5 + 0x14) + *(float *)(this + lVar5 + 0x20);
        }
      }
    }
    lVar6 = lVar6 + 0x10;
    lVar5 = lVar5 + 0x40;
  } while (lVar6 != 0x2dc);
  if (this[0x3ac] != (ObstacleWallDetector)0x0) {
    uVar7 = *(undefined8 *)(puVar1 + 3);
    fVar11 = *(float *)(this + 0x390);
    uVar16 = NEON_fmov(0x40200000,4);
    puVar4 = &local_e8;
    local_e0 = 0.0;
    local_d0 = (ObstacleWallDetector *)
               CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar11 * (float)((ulong)uVar16 >> 0x20) +
                        (float)((ulong)*puVar8 >> 0x20),
                        (float)uVar7 * fVar11 * (float)uVar16 + (float)*puVar8);
    local_e8 = 0xbf80000000000000;
    local_c8 = (ObstacleWallDetector *)
               CONCAT44(local_c8._4_4_,
                        fVar11 * *(float *)(this + lVar9 * 0x40 + 0x14) * 2.5 +
                        *(float *)(this + lVar9 * 0x40 + 0x20));
    Bt2ScenegraphPhysicsContext::raycastShapes
              (this_00,(Vector3 *)&local_d0,(Vector3 *)puVar4,
               (IRaycastReport *)(this + lVar9 * 0x10 + 0x2d0),5.0,true,*(uint *)(this + 0x388),
               false,false,2);
    lVar5 = 0;
    lVar9 = 0x2dc;
    do {
      if ((float)*(undefined8 *)(this + lVar9) != -1.0) {
        if ((float)*(undefined8 *)(this + lVar9) == 3.402823e+38) {
          this[lVar5 + 0x3c] = (ObstacleWallDetector)0x0;
        }
        else {
          this[lVar5 + 0x3c] = (ObstacleWallDetector)0x1;
          fVar11 = *(float *)(this + 0x390);
          *(float *)(this + lVar5 + 0x30) = fVar11;
          *(ulong *)(this + lVar5 + 0x24) =
               CONCAT44((float)((ulong)*(undefined8 *)(this + lVar5 + 0xc) >> 0x20) * fVar11 +
                        (float)((ulong)*(undefined8 *)(this + lVar5 + 0x18) >> 0x20),
                        (float)*(undefined8 *)(this + lVar5 + 0xc) * fVar11 +
                        (float)*(undefined8 *)(this + lVar5 + 0x18));
          *(float *)(this + lVar5 + 0x2c) =
               fVar11 * *(float *)(this + lVar5 + 0x14) + *(float *)(this + lVar5 + 0x20);
        }
      }
      lVar9 = lVar9 + 0x10;
      lVar5 = lVar5 + 0x40;
    } while (lVar9 != 0x36c);
  }
  if (param_3 != (ObstacleAvoidance *)0x0) {
    fVar11 = *(float *)param_2;
    fVar12 = *(float *)(param_2 + 8);
    if (*(float *)(param_2 + 4) != 0.0) {
      fVar15 = (float)NEON_fmadd(fVar11,fVar11,fVar12 * fVar12);
      fVar13 = 1.0;
      if (1e-06 < fVar15) {
        fVar13 = 1.0 / SQRT(fVar15);
      }
      fVar11 = fVar11 * fVar13;
      fVar12 = fVar12 * fVar13;
    }
    lVar9 = 0;
    fVar13 = *(float *)param_1;
    fVar15 = *(float *)(param_1 + 8);
    local_d0 = (ObstacleWallDetector *)0x0;
    local_c8 = (ObstacleWallDetector *)0x0;
    local_c0 = 0;
    *(undefined4 *)(this + 0x398) = 0x7f7fffff;
    do {
      fVar20 = *(float *)(this + lVar9 + 0x30);
      if (fVar20 != 3.402823e+38) {
        if (fVar20 < *(float *)(this + 0x398)) {
          *(float *)(this + 0x398) = fVar20;
        }
        fStack_dc = *(float *)(this + lVar9 + 0x2c) - fVar15;
        local_e0 = *(float *)(this + lVar9 + 0x24) - fVar13;
        fVar20 = (float)NEON_fmadd(local_e0,local_e0,fStack_dc * fStack_dc);
        fVar20 = SQRT(fVar20);
        if (0.0001 <= fVar20) {
          local_e0 = local_e0 * (1.0 / fVar20);
          fStack_dc = fStack_dc * (1.0 / fVar20);
        }
        fVar22 = fVar20 - *(float *)(this + 0x394);
        if (fVar20 - *(float *)(this + 0x394) <= 0.01) {
          fVar22 = 0.01;
        }
        local_d8 = (float)NEON_fmadd(local_e0,fVar11,fVar12 * fStack_dc);
        fVar20 = (float)NEON_fmadd(fVar11,fStack_dc,local_e0 * -fVar12);
        if (0.0 <= fVar20) {
          local_d8 = local_d8 + -2.0;
        }
        local_e8 = CONCAT44(fVar15 + fStack_dc * fVar22,fVar13 + local_e0 * fVar22);
                    /* try { // try from 0087a560 to 0087a56b has its CatchHandler @ 0087a648 */
        FUN_0087a664(&local_d0,&local_e8);
      }
      lVar9 = lVar9 + 0x40;
    } while (lVar9 != 0x240);
    if (local_d0 != local_c8) {
                    /* try { // try from 0087a5e4 to 0087a5ef has its CatchHandler @ 0087a644 */
      generateObstacle(local_d0,(vector *)&local_d0,(Vector2 *)puVar4,param_3);
    }
    if (local_d0 != (ObstacleWallDetector *)0x0) {
      local_c8 = local_d0;
      operator_delete(local_d0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


