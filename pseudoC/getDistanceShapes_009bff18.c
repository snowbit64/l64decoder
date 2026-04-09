// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDistanceShapes
// Entry Point: 009bff18
// Size: 608 bytes
// Signature: undefined __cdecl getDistanceShapes(Bt2World * param_1, btTransform * param_2, btConvexShape * param_3, btTransform * param_4, btCollisionShape * param_5, Result * param_6)


/* Bt2SceneQueryUtil::getDistanceShapes(Bt2World*, btTransform&, btConvexShape*, btTransform const&,
   btCollisionShape const*, btDiscreteCollisionDetectorInterface::Result*) */

void Bt2SceneQueryUtil::getDistanceShapes
               (Bt2World *param_1,btTransform *param_2,btConvexShape *param_3,btTransform *param_4,
               btCollisionShape *param_5,Result *param_6)

{
  btCollisionShape **ppbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 local_240;
  btGjkPairDetector abStack_238 [104];
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined4 local_194;
  undefined4 local_9c;
  undefined local_84;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_5 + 8) < 0x14) {
    local_84 = 0;
    local_9c = 0x38d1b717;
    btGjkPairDetector::btGjkPairDetector
              (abStack_238,param_3,(btConvexShape *)param_5,(btVoronoiSimplexSolver *)&local_1d0,
               (btConvexPenetrationDepthSolver *)0x0);
    uStack_2b8 = *(undefined8 *)(param_2 + 8);
    local_2c0 = *(undefined8 *)param_2;
    uStack_2a8 = *(undefined8 *)(param_2 + 0x18);
    uStack_2b0 = *(undefined8 *)(param_2 + 0x10);
    local_240 = 0x7f7fffff;
    uStack_298 = *(undefined8 *)(param_2 + 0x28);
    local_2a0 = *(undefined8 *)(param_2 + 0x20);
    uStack_288 = *(undefined8 *)(param_2 + 0x38);
    uStack_290 = *(undefined8 *)(param_2 + 0x30);
    uStack_278 = *(undefined8 *)(param_4 + 8);
    local_280 = *(undefined8 *)param_4;
    uStack_268 = *(undefined8 *)(param_4 + 0x18);
    uStack_270 = *(undefined8 *)(param_4 + 0x10);
    uStack_258 = *(undefined8 *)(param_4 + 0x28);
    local_260 = *(undefined8 *)(param_4 + 0x20);
    uStack_248 = *(undefined8 *)(param_4 + 0x38);
    uStack_250 = *(undefined8 *)(param_4 + 0x30);
    btGjkPairDetector::getClosestPoints
              (abStack_238,(ClosestPointInput *)&local_2c0,param_6,(btIDebugDraw *)0x0,false,false);
  }
  else if ((*(int *)(param_5 + 8) == 0x1f) && (0 < *(int *)(param_5 + 0x24))) {
    lVar3 = 0;
    lVar4 = 0x40;
    do {
      uVar5 = *(undefined4 *)param_4;
      fVar6 = *(float *)(param_4 + 4);
      uVar7 = *(undefined4 *)(param_4 + 0x10);
      fVar8 = *(float *)(param_4 + 0x14);
      ppbVar1 = (btCollisionShape **)(*(long *)(param_5 + 0x30) + lVar4);
      uVar26 = *(undefined4 *)(param_4 + 8);
      uVar13 = *(undefined4 *)(param_4 + 0x20);
      fVar14 = *(float *)(param_4 + 0x24);
      fVar9 = *(float *)(ppbVar1 + -6);
      fVar11 = *(float *)((long)ppbVar1 + -0x2c);
      uVar19 = *(undefined4 *)(ppbVar1 + -8);
      uVar22 = *(undefined4 *)((long)ppbVar1 + -0x3c);
      fVar12 = *(float *)(ppbVar1 + -5);
      uVar25 = *(undefined4 *)(ppbVar1 + -7);
      uVar15 = NEON_fmadd(uVar19,uVar5,fVar9 * fVar6);
      uVar18 = NEON_fmadd(uVar19,uVar7,fVar9 * fVar8);
      uVar10 = NEON_fmadd(uVar19,uVar13,fVar9 * fVar14);
      uVar29 = *(undefined4 *)(ppbVar1 + -2);
      fVar9 = *(float *)((long)ppbVar1 + -0xc);
      uVar16 = NEON_fmadd(uVar22,uVar5,fVar6 * fVar11);
      uVar17 = NEON_fmadd(uVar25,uVar5,fVar6 * fVar12);
      uVar21 = NEON_fmadd(uVar22,uVar7,fVar11 * fVar8);
      uVar24 = NEON_fmadd(uVar25,uVar7,fVar12 * fVar8);
      uVar22 = NEON_fmadd(uVar22,uVar13,fVar11 * fVar14);
      uVar23 = *(undefined4 *)(param_4 + 0x18);
      uVar20 = *(undefined4 *)(param_4 + 0x28);
      uVar27 = *(undefined4 *)(ppbVar1 + -4);
      uVar28 = *(undefined4 *)((long)ppbVar1 + -0x1c);
      uVar25 = NEON_fmadd(uVar25,uVar13,fVar12 * fVar14);
      uVar30 = *(undefined4 *)(ppbVar1 + -3);
      uVar5 = NEON_fmadd(uVar29,uVar5,fVar6 * fVar9);
      uVar19 = NEON_fmadd(uVar29,uVar7,fVar8 * fVar9);
      uVar13 = NEON_fmadd(uVar29,uVar13,fVar14 * fVar9);
      uVar7 = *(undefined4 *)(ppbVar1 + -1);
      local_1d0 = NEON_fmadd(uVar27,uVar26,uVar15);
      uStack_1cc = NEON_fmadd(uVar28,uVar26,uVar16);
      local_1c8 = NEON_fmadd(uVar30,uVar26,uVar17);
      local_1a0 = (float)NEON_fmadd(uVar7,uVar26,uVar5);
      local_19c = (float)NEON_fmadd(uVar7,uVar23,uVar19);
      local_198 = (float)NEON_fmadd(uVar7,uVar20,uVar13);
      local_1c0 = NEON_fmadd(uVar27,uVar23,uVar18);
      local_1bc = NEON_fmadd(uVar28,uVar23,uVar21);
      local_1b8 = NEON_fmadd(uVar30,uVar23,uVar24);
      local_1b0 = NEON_fmadd(uVar27,uVar20,uVar10);
      local_1ac = NEON_fmadd(uVar28,uVar20,uVar22);
      local_1a8 = NEON_fmadd(uVar30,uVar20,uVar25);
      local_198 = local_198 + *(float *)(param_4 + 0x38);
      local_1a0 = *(float *)(param_4 + 0x30) + local_1a0;
      local_19c = local_19c + *(float *)(param_4 + 0x34);
      local_1c4 = 0;
      local_1b4 = 0;
      local_1a4 = 0;
      local_194 = 0;
      getDistanceShapes(param_1,param_2,param_3,(btTransform *)&local_1d0,*ppbVar1,param_6);
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x58;
    } while (lVar3 < *(int *)(param_5 + 0x24));
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


