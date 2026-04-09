// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calcPenDepth
// Entry Point: 00f6c05c
// Size: 260 bytes
// Signature: undefined __cdecl calcPenDepth(btVoronoiSimplexSolver * param_1, btConvexShape * param_2, btConvexShape * param_3, btTransform * param_4, btTransform * param_5, btVector3 * param_6, btVector3 * param_7, btVector3 * param_8, btIDebugDraw * param_9)


/* btGjkEpaPenetrationDepthSolver::calcPenDepth(btVoronoiSimplexSolver&, btConvexShape const*,
   btConvexShape const*, btTransform const&, btTransform const&, btVector3&, btVector3&, btVector3&,
   btIDebugDraw*) */

uint btGjkEpaPenetrationDepthSolver::calcPenDepth
               (btVoronoiSimplexSolver *param_1,btConvexShape *param_2,btConvexShape *param_3,
               btTransform *param_4,btTransform *param_5,btVector3 *param_6,btVector3 *param_7,
               btVector3 *param_8,btIDebugDraw *param_9)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  sResults asStack_a0 [4];
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 0x30) >> 0x20) -
                      (float)((ulong)*(undefined8 *)(param_5 + 0x30) >> 0x20),
                      (float)*(undefined8 *)(param_6 + 0x30) -
                      (float)*(undefined8 *)(param_5 + 0x30));
  local_5c = 0;
  local_60 = *(float *)(param_6 + 0x38) - *(float *)(param_5 + 0x38);
  uVar2 = btGjkEpaSolver2::Penetration
                    (param_3,param_5,(btConvexShape *)param_4,(btTransform *)param_6,
                     (btVector3 *)&local_68,asStack_a0,true);
  if (((uVar2 & 1) == 0) &&
     (uVar3 = btGjkEpaSolver2::Distance
                        (param_3,param_5,(btConvexShape *)param_4,(btTransform *)param_6,
                         (btVector3 *)&local_68,asStack_a0), (uVar3 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    *(undefined8 *)(param_8 + 8) = uStack_94;
    *(undefined8 *)param_8 = local_9c;
    *(undefined8 *)(param_9 + 8) = uStack_84;
    *(undefined8 *)param_9 = local_8c;
    *(undefined8 *)(param_7 + 8) = uStack_74;
    *(undefined8 *)param_7 = local_7c;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


