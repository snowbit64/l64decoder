// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOrCookCachedConvexMesh
// Entry Point: 0098f4a0
// Size: 628 bytes
// Signature: undefined __thiscall getOrCookCachedConvexMesh(Bt2PhysicsColShapeCache * this, TransformGroup * param_1, CollisionDataProvider * param_2)


/* Bt2PhysicsColShapeCache::getOrCookCachedConvexMesh(TransformGroup*,
   Bt2PhysicsRBObject::CollisionDataProvider*) */

btCompoundShape * __thiscall
Bt2PhysicsColShapeCache::getOrCookCachedConvexMesh
          (Bt2PhysicsColShapeCache *this,TransformGroup *param_1,CollisionDataProvider *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  btCompoundShape *pbVar6;
  float *pfVar7;
  ulong uVar8;
  uint uVar9;
  btCompoundShape **ppbVar10;
  uint uVar11;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined8 local_1bc;
  undefined4 local_1b4;
  btCompoundShape *local_1b0 [40];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_2 + 0x10))(param_2);
  if (uVar2 < 0x29) {
    if (uVar2 == 0) {
      local_1b0[0] = (btCompoundShape *)0x0;
    }
    else {
      uVar9 = 0;
      uVar11 = 0;
      do {
        uVar3 = (**(code **)(*(long *)param_2 + 0x20))(param_2,uVar11);
        Bt2PhysicsUtil::getTransformScale(param_1,(Vector3 *)&local_1f0);
        pbVar6 = (btCompoundShape *)
                 getCollisionShapeFromCaches
                           (this,(ulong)uVar3 | 0x200000000,(Vector3 *)&local_1f0,true);
        if (pbVar6 == (btCompoundShape *)0x0) {
          uVar4 = (**(code **)(*(long *)param_2 + 0x18))(param_2,uVar11);
          pfVar7 = (float *)operator_new__((ulong)(uVar4 * 3) << 2);
          (**(code **)(*(long *)param_2 + 0x28))(param_2,uVar11,pfVar7);
          pbVar6 = (btCompoundShape *)getOrCookCachedConvexMesh(this,param_1,uVar3,uVar4,pfVar7);
          operator_delete__(pfVar7);
          if (pbVar6 != (btCompoundShape *)0x0) goto LAB_0098f544;
        }
        else {
LAB_0098f544:
          local_1b0[uVar9] = pbVar6;
          uVar9 = uVar9 + 1;
        }
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
      if (uVar9 == 0) {
        local_1b0[0] = (btCompoundShape *)0x0;
      }
      else if (uVar9 != 1) {
        local_1e4 = 0;
        local_1ec = 0;
        local_1f0 = 0x3f800000;
        local_1dc = 0x3f800000;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1c8 = 0x3f800000;
        local_1bc = 0;
        local_1c4 = 0;
        local_1b4 = 0;
        pbVar6 = (btCompoundShape *)btAlignedAllocInternal(0x80,0x10);
                    /* try { // try from 0098f664 to 0098f66f has its CatchHandler @ 0098f72c */
        btCompoundShape::btCompoundShape(pbVar6,false,uVar9);
        uVar8 = (ulong)uVar9;
        ppbVar10 = local_1b0;
        do {
          btCompoundShape::addChildShape
                    (pbVar6,(btTransform *)&local_1f0,(btCollisionShape *)*ppbVar10);
          uVar8 = uVar8 - 1;
          local_1b0[0] = pbVar6;
          ppbVar10 = ppbVar10 + 1;
        } while (uVar8 != 0);
      }
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 0098f6d8 to 0098f6e3 has its CatchHandler @ 0098f714 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Failed to create custom compound %s with %u children. Maximum is %u.\n"
                       ,*(undefined8 *)(param_1 + 8),(ulong)uVar2,0x28);
    local_1b0[0] = (btCompoundShape *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_1b0[0];
}


