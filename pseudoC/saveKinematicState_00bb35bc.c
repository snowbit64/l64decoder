// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveKinematicState
// Entry Point: 00bb35bc
// Size: 124 bytes
// Signature: undefined __thiscall saveKinematicState(Bt2World * this, float param_1)


/* Bt2World::saveKinematicState(float) */

void __thiscall Bt2World::saveKinematicState(Bt2World *this,float param_1)

{
  uint uVar1;
  btRigidBody *this_00;
  long lVar2;
  
  uVar1 = *(uint *)(this + 0x144);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      this_00 = *(btRigidBody **)(*(long *)(this + 0x150) + lVar2);
      if ((*(int *)(this_00 + 0xec) != 2) && (((byte)this_00[0xe0] >> 1 & 1) != 0)) {
        btRigidBody::saveKinematicState(this_00,param_1);
      }
      lVar2 = lVar2 + 8;
    } while ((ulong)uVar1 * 8 - lVar2 != 0);
  }
  return;
}


