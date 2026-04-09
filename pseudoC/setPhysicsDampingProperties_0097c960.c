// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPhysicsDampingProperties
// Entry Point: 0097c960
// Size: 196 bytes
// Signature: undefined __thiscall setPhysicsDampingProperties(MeshSplitManager * this, MeshSplitShape * param_1)


/* MeshSplitManager::setPhysicsDampingProperties(MeshSplitShape*) */

void __thiscall
MeshSplitManager::setPhysicsDampingProperties(MeshSplitManager *this,MeshSplitShape *param_1)

{
  Bt2PhysicsRBObject *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 0.0;
  if ((((int)((ulong)(*(long *)(param_1 + 0x30) - (long)*(long **)(param_1 + 0x28)) >> 3) != 0) &&
      (lVar1 = **(long **)(param_1 + 0x28), (*(byte *)(lVar1 + 0x11) >> 3 & 1) != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x170), (*(byte *)(lVar1 + 0x31) >> 1 & 1) != 0)) {
    fVar2 = (float)((ulong)(*(long *)(lVar1 + 0x98) - *(long *)(lVar1 + 0x90)) >> 2 & 0xffffffff) *
            0.25 * 0.1;
  }
  fVar3 = (float)NEON_fminnm(fVar2,0x3dcccccd);
  fVar2 = (float)NEON_fminnm(fVar2,0x3d4ccccd);
  this_00 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  Bt2PhysicsRBObject::setAngularDamping(this_00,fVar2 + 0.1);
  Bt2PhysicsRBObject::setRollingFriction(this_00,fVar3 + 0.17);
  return;
}


