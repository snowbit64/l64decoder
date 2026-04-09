// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCollisionAlgorithmCreateFunc
// Entry Point: 00f9227c
// Size: 452 bytes
// Signature: undefined __thiscall getCollisionAlgorithmCreateFunc(btSoftBodyRigidBodyCollisionConfiguration * this, int param_1, int param_2)


/* btSoftBodyRigidBodyCollisionConfiguration::getCollisionAlgorithmCreateFunc(int, int) */

undefined8 __thiscall
btSoftBodyRigidBodyCollisionConfiguration::getCollisionAlgorithmCreateFunc
          (btSoftBodyRigidBodyCollisionConfiguration *this,int param_1,int param_2)

{
  if ((param_1 == 0x20) && (param_2 == 0x20)) {
    return *(undefined8 *)(this + 0xb8);
  }
  if (param_1 == 0x20) {
    if (param_2 < 0x14) {
      return *(undefined8 *)(this + 0xc0);
    }
    if (param_2 - 0x15U < 9) {
      return *(undefined8 *)(this + 0xd0);
    }
  }
  else {
    if ((param_1 < 0x14) && (param_2 == 0x20)) {
      return *(undefined8 *)(this + 200);
    }
    if ((param_1 - 0x15U < 9) && (param_2 == 0x20)) {
      return *(undefined8 *)(this + 0xd8);
    }
    if ((param_1 == 8) && (param_2 == 8)) {
      return *(undefined8 *)(this + 0x78);
    }
    if ((param_1 == 8) && (param_2 == 1)) {
      return *(undefined8 *)(this + 0x98);
    }
    if ((param_1 == 1) && (param_2 == 8)) {
      return *(undefined8 *)(this + 0xa0);
    }
    if ((param_2 | param_1) == 0) {
      return *(undefined8 *)(this + 0x90);
    }
    if ((param_1 < 0x14) && (param_2 == 0x1c)) {
      return *(undefined8 *)(this + 0xb0);
    }
    if ((param_1 == 0x1c) && (param_2 < 0x14)) {
      return *(undefined8 *)(this + 0xa8);
    }
    if (param_1 < 0x14) {
      if (param_2 < 0x14) {
        return *(undefined8 *)(this + 0x40);
      }
      if (param_2 - 0x15U < 9) {
        return *(undefined8 *)(this + 0x48);
      }
    }
    else {
      if ((param_2 < 0x14) && (param_1 - 0x15U < 9)) {
        return *(undefined8 *)(this + 0x50);
      }
      if (param_1 == 0x1f) {
        if (param_2 == 0x1f) {
          return *(undefined8 *)(this + 0x60);
        }
        return *(undefined8 *)(this + 0x58);
      }
    }
  }
  if (param_2 == 0x1f) {
    return *(undefined8 *)(this + 0x68);
  }
  return *(undefined8 *)(this + 0x70);
}


