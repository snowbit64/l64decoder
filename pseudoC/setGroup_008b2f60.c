// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGroup
// Entry Point: 008b2f60
// Size: 48 bytes
// Signature: undefined __thiscall setGroup(Sample * this, uint param_1)


/* Sample::setGroup(unsigned int) */

void __thiscall Sample::setGroup(Sample *this,uint param_1)

{
  (**(code **)(*(long *)this + 0xd0))();
  *(uint *)(this + 0x68) = param_1;
  return;
}


