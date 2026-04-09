// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: needsResponse
// Entry Point: 00f48088
// Size: 52 bytes
// Signature: undefined __thiscall needsResponse(btCollisionDispatcher * this, btCollisionObject * param_1, btCollisionObject * param_2)


/* btCollisionDispatcher::needsResponse(btCollisionObject const*, btCollisionObject const*) */

bool __thiscall
btCollisionDispatcher::needsResponse
          (btCollisionDispatcher *this,btCollisionObject *param_1,btCollisionObject *param_2)

{
  if (((*(uint *)(param_1 + 0xe0) >> 2 & 1) == 0) && ((*(uint *)(param_2 + 0xe0) >> 2 & 1) == 0)) {
    if ((*(uint *)(param_1 + 0xe0) & 3) != 0) {
      return (*(uint *)(param_2 + 0xe0) & 3) == 0;
    }
    return true;
  }
  return false;
}


