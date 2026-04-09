// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LoopSynthesisGenerator
// Entry Point: 008b4650
// Size: 128 bytes
// Signature: undefined __thiscall LoopSynthesisGenerator(LoopSynthesisGenerator * this)


/* LoopSynthesisGenerator::LoopSynthesisGenerator() */

void __thiscall LoopSynthesisGenerator::LoopSynthesisGenerator(LoopSynthesisGenerator *this)

{
  void *pvVar1;
  
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0x40) = 0xac44;
  this[100] = (LoopSynthesisGenerator)0x0;
  *(undefined8 *)(this + 0x5c) = 0x33ae0000113a;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x38) = 1;
  this[0x3c] = (LoopSynthesisGenerator)0x1;
  this[0x5a] = (LoopSynthesisGenerator)0x1;
  *(undefined8 *)(this + 0x70) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x68) = 0;
  pvVar1 = operator_new__(0x1000);
  *(void **)(this + 0x48) = pvVar1;
  pvVar1 = operator_new__(0x1000);
  *(void **)(this + 0x50) = pvVar1;
  return;
}


