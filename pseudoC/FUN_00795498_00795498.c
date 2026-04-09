// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00795498
// Entry Point: 00795498
// Size: 464 bytes
// Signature: undefined FUN_00795498(void)


void FUN_00795498(void **param_1)

{
  int iVar1;
  uint3 uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  TransformGroup **ppTVar6;
  TransformGroup *pTVar7;
  TransformGroup *pTVar8;
  Bt2ScenegraphPhysicsContext *this;
  ulong uVar9;
  
  uVar2 = *(uint3 *)((long)param_1 + 0xc);
  ppTVar6 = (TransformGroup **)operator_new__(((ulong)uVar2 & 0xfffffe) << 2);
  if (uVar2 < 2) {
    bVar3 = false;
  }
  else {
    uVar9 = 0;
    do {
      pTVar7 = (TransformGroup *)
               ReflectionUtil::getEntity
                         (*(uint *)((long)*param_1 + uVar9 * 4),0x20,"addPhysicsRope","node<i>");
      bVar3 = pTVar7 == (TransformGroup *)0x0;
      ppTVar6[uVar9] = pTVar7;
      if (pTVar7 == (TransformGroup *)0x0) break;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint3 *)((long)param_1 + 0xc) >> 1);
  }
  if ((int)*(uint *)(param_1 + 10) < 1) {
    pTVar7 = (TransformGroup *)0x0;
  }
  else {
    pTVar7 = (TransformGroup *)
             ReflectionUtil::getEntity(*(uint *)(param_1 + 10),0x20,"addPhysicsRope","startNode");
  }
  uVar4 = *(uint *)(param_1 + 0x12);
  if ((int)uVar4 < 1) {
    pTVar8 = (TransformGroup *)0x0;
  }
  else {
    pTVar8 = (TransformGroup *)ReflectionUtil::getEntity(uVar4,0x20,"addPhysicsRope","endNode");
    uVar4 = *(uint *)(param_1 + 0x12);
  }
  iVar1 = *(int *)(param_1 + 10);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x21) = 1;
  if (!bVar3) {
    ScenegraphPhysicsContextManager::getInstance();
    this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
    uVar5 = Bt2ScenegraphPhysicsContext::enqueueAddRope
                      (this,(uint)(*(uint3 *)((long)param_1 + 0xc) >> 1),ppTVar6,
                       *(float *)(param_1 + 2),*(float *)(param_1 + 4),*(float *)(param_1 + 6),
                       *(uint *)(param_1 + 8),pTVar7,iVar1 != 0,*(float *)(param_1 + 0xc),
                       *(float *)(param_1 + 0xe),*(float *)(param_1 + 0x10),pTVar8,uVar4 != 0,
                       *(float *)(param_1 + 0x14),*(float *)(param_1 + 0x16),
                       *(float *)(param_1 + 0x18),*(bool *)(param_1 + 0x1a));
    *(undefined4 *)(param_1 + 0x20) = uVar5;
  }
  operator_delete__(ppTVar6);
  if (*param_1 == (void *)0x0) {
    return;
  }
  operator_delete__(*param_1);
  return;
}


