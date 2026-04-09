// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChunkLinearVelocity
// Entry Point: 00925a48
// Size: 44 bytes
// Signature: undefined __thiscall getChunkLinearVelocity(DestructionShape * this, uint param_1, Vector3 * param_2)


/* DestructionShape::getChunkLinearVelocity(unsigned int, Vector3&) */

void __thiscall
DestructionShape::getChunkLinearVelocity(DestructionShape *this,uint param_1,Vector3 *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(this + 0x228) + (ulong)param_1 * 0x30 + 0x20);
  if ((uVar1 != 0) &&
     (*(Bt2ScenegraphPhysicsContext **)(this + 0x290) != (Bt2ScenegraphPhysicsContext *)0x0)) {
    Bt2ScenegraphPhysicsContext::getLightActorLinearVelocity
              (*(Bt2ScenegraphPhysicsContext **)(this + 0x290),uVar1,(float *)param_2);
    return;
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined8 *)param_2 = 0;
  return;
}


