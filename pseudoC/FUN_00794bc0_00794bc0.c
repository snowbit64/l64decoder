// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794bc0
// Entry Point: 00794bc0
// Size: 108 bytes
// Signature: undefined FUN_00794bc0(void)


void FUN_00794bc0(uint *param_1)

{
  EntityRegistryManager *this;
  long lVar1;
  Bt2PhysicsRBObject *this_00;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_1);
  if ((((lVar1 != 0) && ((*(byte *)(lVar1 + 0x10) >> 5 & 1) != 0)) &&
      (this_00 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject(),
      this_00 != (Bt2PhysicsRBObject *)0x0)) &&
     (((*(uint *)(this_00 + 8) ^ 0xffffffff) & 0x1108) == 0)) {
    *(uint *)(this_00 + 8) =
         *(uint *)(this_00 + 8) & 0xffffbfff | (uint)*(byte *)(param_1 + 4) << 0xe;
    Bt2PhysicsRBObject::raiseDirtyFlags(this_00,0x4000);
    return;
  }
  return;
}


