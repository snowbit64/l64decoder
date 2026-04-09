// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: worldTransformationDirty
// Entry Point: 009bcfc0
// Size: 32 bytes
// Signature: undefined __cdecl worldTransformationDirty(ScenegraphNode * param_1, uint param_2)


/* Bt2PhysicsCharacterController::worldTransformationDirty(ScenegraphNode*, unsigned int) */

void Bt2PhysicsCharacterController::worldTransformationDirty(ScenegraphNode *param_1,uint param_2)

{
  if (param_1[0x5d] != (ScenegraphNode)0x0) {
    return;
  }
  param_1[0x5c] = (ScenegraphNode)0x1;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  return;
}


