// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getChunkMass
// Entry Point: 00925a1c
// Size: 44 bytes
// Signature: undefined __thiscall getChunkMass(DestructionShape * this, uint param_1)


/* DestructionShape::getChunkMass(unsigned int) */

undefined  [16] __thiscall DestructionShape::getChunkMass(DestructionShape *this,uint param_1)

{
  uint uVar1;
  undefined auVar2 [16];
  
  if ((*(Bt2ScenegraphPhysicsContext **)(this + 0x290) != (Bt2ScenegraphPhysicsContext *)0x0) &&
     (uVar1 = *(uint *)(*(long *)(this + 0x228) + (ulong)param_1 * 0x30 + 0x20), uVar1 != 0)) {
    auVar2 = Bt2ScenegraphPhysicsContext::getLightActorMass
                       (*(Bt2ScenegraphPhysicsContext **)(this + 0x290),uVar1);
    return auVar2;
  }
  return ZEXT816(0);
}


