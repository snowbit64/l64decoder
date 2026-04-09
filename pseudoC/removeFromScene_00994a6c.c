// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeFromScene
// Entry Point: 00994a6c
// Size: 296 bytes
// Signature: undefined removeFromScene(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Bt2PhysicsRBObject::removeFromScene() */

void Bt2PhysicsRBObject::removeFromScene(void)

{
  Bt2PhysicsRBObject *in_x0;
  Bt2ScenegraphPhysicsContext *pBVar1;
  btCollisionShape *pbVar2;
  long lVar3;
  btCollisionShape **ppbVar4;
  undefined8 uVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  
  ScenegraphNode::removeWorldTransformationDirtyListener
            (*(ScenegraphNode **)(in_x0 + 0x28),(WorldTransformationDirtyListener *)(in_x0 + 0x18));
  pBVar1 = *(Bt2ScenegraphPhysicsContext **)(in_x0 + 0x10);
  if ((pBVar1 != (Bt2ScenegraphPhysicsContext *)0x0) && ((*(uint *)(in_x0 + 8) & 3) != 0)) {
    lVar3 = *(long *)(in_x0 + 0x30);
    if ((lVar3 != 0) &&
       ((((*(uint *)(in_x0 + 8) & 0x600) != 0 &&
         (puVar6 = *(uint **)(lVar3 + 0x108), puVar6 != (uint *)0x0)) && ((*puVar6 >> 1 & 1) != 0)))
       ) {
      lVar3 = *(long *)(lVar3 + 200);
      if ((*puVar6 >> 7 & 1) == 0) {
        ppbVar4 = (btCollisionShape **)(*(long *)(lVar3 + 0x30) + 0x40);
LAB_00994b1c:
        pbVar2 = *ppbVar4;
        *(Bt2ScenegraphPhysicsContext **)(in_x0 + 0x38) = pBVar1;
        *(btCollisionShape **)(in_x0 + 0x48) = pbVar2;
        Bt2ScenegraphPhysicsContext::acquireColShape(pBVar1,pbVar2);
      }
      else if (0 < (int)*(uint *)(lVar3 + 0x24)) {
        plVar8 = *(long **)(puVar6 + 6);
        lVar7 = -0x40;
        do {
          if (*plVar8 == *(long *)(in_x0 + 0x28)) {
            ppbVar4 = (btCollisionShape **)(*(long *)(lVar3 + 0x30) - lVar7);
            goto LAB_00994b1c;
          }
          lVar7 = lVar7 + -0x58;
          plVar8 = plVar8 + 2;
        } while ((ulong)*(uint *)(lVar3 + 0x24) * 0x58 + lVar7 != -0x40);
      }
    }
    if (((byte)in_x0[9] >> 2 & 1) == 0) {
      if (*(long *)(in_x0 + 0x30) == 0) {
        pBVar1 = *(Bt2ScenegraphPhysicsContext **)(in_x0 + 0x10);
      }
      else {
        uVar5 = *(undefined8 *)(*(long *)(in_x0 + 0x30) + 200);
        pBVar1 = *(Bt2ScenegraphPhysicsContext **)(in_x0 + 0x10);
        *(Bt2ScenegraphPhysicsContext **)(in_x0 + 0x38) = pBVar1;
        *(undefined8 *)(in_x0 + 0x40) = uVar5;
      }
      Bt2ScenegraphPhysicsContext::enqueueRemoveActor(pBVar1,in_x0,false);
    }
    else {
      Bt2ScenegraphPhysicsContext::removeActorFromQueues
                (*(Bt2ScenegraphPhysicsContext **)(in_x0 + 0x10),in_x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::__map_value_compare<btRigidBody_const*,std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::less<btRigidBody_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>>>
  ::__erase_unique<btRigidBody_const*>
            ((__tree<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::__map_value_compare<btRigidBody_const*,std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::less<btRigidBody_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>>>
              *)&s_objectMap,(btRigidBody **)(in_x0 + 0x30));
  *(undefined8 *)(in_x0 + 0x30) = 0;
  *(undefined4 *)(in_x0 + 0x20) = 0;
  Bt2ContextPhysicsObject::removeFromScene();
  return;
}


