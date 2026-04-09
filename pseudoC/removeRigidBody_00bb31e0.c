// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeRigidBody
// Entry Point: 00bb31e0
// Size: 108 bytes
// Signature: undefined __thiscall removeRigidBody(Bt2World * this, btRigidBody * param_1)


/* Bt2World::removeRigidBody(btRigidBody*) */

void __thiscall Bt2World::removeRigidBody(Bt2World *this,btRigidBody *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(this + 0x1cc);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      (**(code **)**(undefined8 **)(*(long *)(this + 0x1d8) + lVar2))
                (*(undefined8 **)(*(long *)(this + 0x1d8) + lVar2),param_1,this);
      lVar2 = lVar2 + 8;
    } while ((ulong)uVar1 * 8 - lVar2 != 0);
  }
  btDiscreteDynamicsWorld::removeRigidBody((btDiscreteDynamicsWorld *)this,param_1);
  return;
}


