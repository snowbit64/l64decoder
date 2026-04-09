// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00994840
// Size: 172 bytes
// Signature: undefined __thiscall init(Bt2PhysicsRBObject * this, Bt2ScenegraphPhysicsContext * param_1, btRigidBody * param_2)


/* Bt2PhysicsRBObject::init(Bt2ScenegraphPhysicsContext*, btRigidBody*) */

void __thiscall
Bt2PhysicsRBObject::init
          (Bt2PhysicsRBObject *this,Bt2ScenegraphPhysicsContext *param_1,btRigidBody *param_2)

{
  long lVar1;
  pair pVar2;
  ulong uVar3;
  btRigidBody *local_48;
  Bt2PhysicsRBObject *pBStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(Bt2ScenegraphPhysicsContext **)(this + 0x10) = param_1;
  *(btRigidBody **)(this + 0x30) = param_2;
  ScenegraphNode::addWorldTransformationDirtyListener
            (*(ScenegraphNode **)(this + 0x28),(WorldTransformationDirtyListener *)(this + 0x18));
  local_48 = param_2;
  pBStack_40 = this;
  pVar2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::__map_value_compare<btRigidBody_const*,std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::less<btRigidBody_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>>>
          ::__emplace_unique_impl<std::__ndk1::pair<btRigidBody*,Bt2PhysicsRBObject*>>
                    ((__tree<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::__map_value_compare<btRigidBody_const*,std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>,std::__ndk1::less<btRigidBody_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<btRigidBody_const*,Bt2PhysicsRBObject*>>>
                      *)&s_objectMap,(pair *)&local_48);
  uVar3 = (ulong)pVar2;
  if (*(btCollisionShape **)(this + 0x40) != (btCollisionShape *)0x0) {
    uVar3 = Bt2ScenegraphPhysicsContext::releaseColShape
                      (*(Bt2ScenegraphPhysicsContext **)(this + 0x38),
                       *(btCollisionShape **)(this + 0x40));
    *(undefined8 *)(this + 0x40) = 0;
  }
  if (*(btCollisionShape **)(this + 0x48) != (btCollisionShape *)0x0) {
    uVar3 = Bt2ScenegraphPhysicsContext::releaseColShape
                      (*(Bt2ScenegraphPhysicsContext **)(this + 0x38),
                       *(btCollisionShape **)(this + 0x48));
    *(undefined8 *)(this + 0x48) = 0;
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


