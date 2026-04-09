// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueSetPairCollision
// Entry Point: 009a7a28
// Size: 288 bytes
// Signature: undefined __thiscall enqueueSetPairCollision(Bt2ScenegraphPhysicsContext * this, uint param_1, uint param_2, bool param_3)


/* Bt2ScenegraphPhysicsContext::enqueueSetPairCollision(unsigned int, unsigned int, bool) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueSetPairCollision
          (Bt2ScenegraphPhysicsContext *this,uint param_1,uint param_2,bool param_3)

{
  long lVar1;
  EntityRegistryManager *pEVar2;
  TransformGroup *pTVar3;
  SetPairCollision *pSVar4;
  long lVar5;
  TransformGroup *pTVar6;
  TransformGroup *local_98;
  undefined4 local_90;
  SetPairCollision *local_88;
  undefined local_80;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pEVar2 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar3 = (TransformGroup *)EntityRegistryManager::getEntityById(pEVar2,param_1);
  pEVar2 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pSVar4 = (SetPairCollision *)EntityRegistryManager::getEntityById(pEVar2,param_2);
  if ((((pTVar3 != (TransformGroup *)0x0) && (pSVar4 != (SetPairCollision *)0x0)) &&
      (((uint)*(undefined8 *)(pTVar3 + 0x10) >> 5 & 1) != 0)) &&
     (((byte)pSVar4[0x10] >> 5 & 1) != 0)) {
    lVar5 = RawTransformGroup::getPhysicsObject();
    pTVar6 = (TransformGroup *)RawTransformGroup::getPhysicsObject();
    if ((((*(uint *)(lVar5 + 8) >> 3 & 1) != 0) && ((*(uint *)(pTVar6 + 8) >> 3 & 1) != 0)) &&
       (((*(uint *)(lVar5 + 8) & 3) != 0 && ((*(uint *)(pTVar6 + 8) & 3) != 0)))) {
      local_90 = 0x11;
      local_98 = pTVar3;
      local_88 = pSVar4;
      local_80 = param_3;
      if (((this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) && ((*(byte *)(lVar5 + 8) & 1) != 0))
         && (((byte)pTVar6[8] & 1) != 0)) {
        setPairCollision(pTVar6,pTVar3,pSVar4);
      }
      else {
        SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u>::push_back
                  ((SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u> *)
                   (this + 0x170),(TransformCommand *)&local_98);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


