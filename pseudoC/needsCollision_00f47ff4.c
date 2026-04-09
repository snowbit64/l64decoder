// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: needsCollision
// Entry Point: 00f47ff4
// Size: 148 bytes
// Signature: undefined __thiscall needsCollision(btCollisionDispatcher * this, btCollisionObject * param_1, btCollisionObject * param_2)


/* btCollisionDispatcher::needsCollision(btCollisionObject const*, btCollisionObject const*) */

undefined8 __thiscall
btCollisionDispatcher::needsCollision
          (btCollisionDispatcher *this,btCollisionObject *param_1,btCollisionObject *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0xec) == 5 || *(int *)(param_1 + 0xec) == 2) {
    if (*(int *)(param_2 + 0xec) == 2) {
      return 0;
    }
    if (*(int *)(param_2 + 0xec) == 5) {
      return 0;
    }
  }
  if (((*(int *)(param_1 + 0x120) == 0) ||
      (uVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1,param_2), (uVar1 & 1) != 0)) &&
     ((*(int *)(param_2 + 0x120) == 0 ||
      (uVar1 = (**(code **)(*(long *)param_2 + 0x18))(param_2,param_1), (uVar1 & 1) != 0)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


