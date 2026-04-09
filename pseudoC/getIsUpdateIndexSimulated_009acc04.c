// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIsUpdateIndexSimulated
// Entry Point: 009acc04
// Size: 24 bytes
// Signature: undefined __thiscall getIsUpdateIndexSimulated(Bt2ScenegraphPhysicsContext * this, ushort param_1)


/* Bt2ScenegraphPhysicsContext::getIsUpdateIndexSimulated(unsigned short) const */

uint __thiscall
Bt2ScenegraphPhysicsContext::getIsUpdateIndexSimulated
          (Bt2ScenegraphPhysicsContext *this,ushort param_1)

{
  return ((uint)(byte)this[0x5d1] + (uint)param_1) - (uint)*(ushort *)(this + 0x84) >> 0xf & 1;
}


