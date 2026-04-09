// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBindingNumbers
// Entry Point: 00abbd1c
// Size: 40 bytes
// Signature: undefined __thiscall getBindingNumbers(VulkanProgramObject * this, uint param_1, uint * * param_2, uint * param_3)


/* VulkanProgramObject::getBindingNumbers(unsigned int, unsigned int*&, unsigned int&) */

void __thiscall
VulkanProgramObject::getBindingNumbers
          (VulkanProgramObject *this,uint param_1,uint **param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)(*(long *)(this + (ulong)param_1 * 0x40 + 0xf0) -
                        (long)*(uint **)(this + (ulong)param_1 * 0x40 + 0xe8)) >> 2);
  puVar1 = (uint *)0x0;
  if (uVar2 != 0) {
    puVar1 = *(uint **)(this + (ulong)param_1 * 0x40 + 0xe8);
  }
  *param_3 = uVar2;
  *param_2 = puVar1;
  return;
}


