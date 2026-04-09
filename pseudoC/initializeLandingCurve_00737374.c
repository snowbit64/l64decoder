// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initializeLandingCurve
// Entry Point: 00737374
// Size: 552 bytes
// Signature: undefined __cdecl initializeLandingCurve(LandingCurve * param_1, NodeId param_2)


/* VehicleNavigationAgent::initializeLandingCurve(VehicleNavigationAgent::LandingCurve&, NodeId)
   const */

void VehicleNavigationAgent::initializeLandingCurve(LandingCurve *param_1,NodeId param_2)

{
  Vector2 *pVVar1;
  long lVar2;
  uint uVar3;
  void *__dest;
  NodeId in_w2;
  ulong uVar4;
  undefined2 uVar5;
  float fVar6;
  float fVar7;
  undefined2 uVar8;
  bool local_a4 [4];
  Vector2 aVStack_a0 [40];
  undefined4 local_78 [2];
  Vector2 local_70 [8];
  long local_68;
  
  __dest = (void *)(ulong)param_2;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78[0] = VehicleNavigationGridAdapter::getNodePose
                          (*(VehicleNavigationGridAdapter **)(param_1 + 0x12a0),in_w2);
  pVVar1 = (Vector2 *)(param_1 + 0x1360);
  local_a4[0] = false;
  if (*(short *)(param_1 + 0x137a) == 8) {
    uVar3 = solveConnectingQuadraticBezierAnyEndHeading
                      (aVStack_a0,local_a4,(Vector2 *)local_78,local_70,pVVar1,(bool)param_1[0x1382]
                       ,*(float *)(param_1 + 0x1390));
joined_r0x0073746c:
    uVar4 = (ulong)uVar3;
    if (uVar3 == 0) {
      fVar6 = INFINITY;
      fVar7 = fVar6;
      goto LAB_007374f0;
    }
  }
  else {
    uVar3 = solveConnectingQuadraticBezier
                      (aVStack_a0,local_a4,(Vector2 *)local_78,local_70,pVVar1,
                       (Vector2 *)(param_1 + 0x1368),(bool)param_1[0x1382],
                       *(float *)(param_1 + 0x1390));
    uVar4 = (ulong)uVar3;
    if (uVar3 == 0) {
      uVar3 = solveConnectingQuadraticBezierSpline
                        (aVStack_a0,local_a4,(Vector2 *)local_78,local_70,pVVar1,
                         (Vector2 *)(param_1 + 0x1368),(bool)param_1[0x1382],
                         *(float *)(param_1 + 0x1390));
      goto joined_r0x0073746c;
    }
  }
  fVar6 = 0.0;
  if ((int)uVar4 == 5) {
    fVar6 = (float)computeCurveCost((Vector2 *)param_1,(int)aVStack_a0 + 0x10);
  }
  fVar7 = (float)computeCurveCost((Vector2 *)param_1,(uint)aVStack_a0);
  fVar7 = fVar6 + fVar7;
  if (ABS(fVar7) == INFINITY) {
    uVar4 = 0;
  }
  else if (local_a4[0] != false) {
    fVar6 = fVar6 * 4.0;
    fVar7 = fVar7 * 4.0;
  }
LAB_007374f0:
  memcpy(__dest,aVStack_a0,uVar4 * 8);
  memset((void *)((long)__dest + uVar4 * 8),0,(ulong)(5 - (int)uVar4) << 3);
  *(short *)((long)__dest + 0x2c) = (short)uVar4;
  uVar8 = SUB42(fVar7 + 1048576.0,0);
  uVar5 = SUB42(fVar6 + 1048576.0,0);
  *(bool *)((long)__dest + 0x2e) = local_a4[0];
  if (8191.75 < fVar7) {
    uVar8 = 0xffff;
  }
  if (8191.75 < fVar6) {
    uVar5 = 0xffff;
  }
  *(undefined2 *)((long)__dest + 0x28) = uVar8;
  *(undefined2 *)((long)__dest + 0x2a) = uVar5;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


