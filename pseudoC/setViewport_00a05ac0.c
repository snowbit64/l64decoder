// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setViewport
// Entry Point: 00a05ac0
// Size: 12 bytes
// Signature: undefined __thiscall setViewport(CullingArgs * this, uint param_1, uint param_2)


/* CullingArgs::setViewport(unsigned int, unsigned int) */

void __thiscall CullingArgs::setViewport(CullingArgs *this,uint param_1,uint param_2)

{
  *(uint *)(this + 0x3b4) = param_1;
  *(uint *)(this + 0x3b8) = param_2;
  return;
}


