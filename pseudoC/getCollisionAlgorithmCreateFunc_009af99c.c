// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCollisionAlgorithmCreateFunc
// Entry Point: 009af99c
// Size: 220 bytes
// Signature: undefined __thiscall getCollisionAlgorithmCreateFunc(CollisionConfiguration * this, int param_1, int param_2)


/* Bt2PhysicsContextManager::CollisionConfiguration::getCollisionAlgorithmCreateFunc(int, int) */

undefined8 __thiscall
Bt2PhysicsContextManager::CollisionConfiguration::getCollisionAlgorithmCreateFunc
          (CollisionConfiguration *this,int param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if ((param_1 == 0x13) && (param_2 == 0x13)) {
    return *(undefined8 *)(this + 0x40);
  }
  if (param_1 == 0x13) {
    if (param_2 < 0x14) {
      return *(undefined8 *)(this + 0xf0);
    }
    bVar1 = true;
  }
  else {
    bVar1 = param_1 < 0x14;
    if ((param_1 < 0x14) && (param_2 == 0x13)) {
      return *(undefined8 *)(this + 0xf8);
    }
    if (param_1 == 0x1d) {
      if (param_2 < 0x14) {
        return *(undefined8 *)(this + 0xe8);
      }
      bVar2 = 1;
      goto joined_r0x009afa30;
    }
  }
  bVar2 = 0;
joined_r0x009afa30:
  if ((param_2 == 0x1d) && (bVar1)) {
    return *(undefined8 *)(this + 0xe0);
  }
  if ((param_1 == 0x20) && (param_2 == 0x1d)) {
    return *(undefined8 *)(this + 0x100);
  }
  if (!(bool)(param_2 != 0x20 | bVar2 ^ 1)) {
    return *(undefined8 *)(this + 0x108);
  }
  uVar3 = btSoftBodyRigidBodyCollisionConfiguration::getCollisionAlgorithmCreateFunc
                    ((btSoftBodyRigidBodyCollisionConfiguration *)this,param_1,param_2);
  return uVar3;
}


