// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSamplerType
// Entry Point: 00c54628
// Size: 96 bytes
// Signature: undefined __thiscall getSamplerType(IR_TypeSet * this, IR_SamplerType param_1)


/* IR_TypeSet::getSamplerType(IR_SamplerType) */

void __thiscall IR_TypeSet::getSamplerType(IR_TypeSet *this,IR_SamplerType param_1)

{
  undefined4 *puVar1;
  
  if (*(long *)(this + (ulong)param_1 * 0x10 + 0xd20) == 0) {
    puVar1 = (undefined4 *)operator_new(0x20);
    puVar1[4] = param_1;
    *(undefined4 **)(this + (ulong)param_1 * 0x10 + 0xd20) = puVar1;
    *puVar1 = 8;
    this[(ulong)param_1 * 0x10 + 0xd28] = (IR_TypeSet)0x1;
  }
  return;
}


