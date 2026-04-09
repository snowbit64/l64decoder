// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pop_back
// Entry Point: 00c3dde0
// Size: 20 bytes
// Signature: undefined pop_back(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_InstructionSequence::pop_back() */

undefined8 IR_InstructionSequence::pop_back(void)

{
  long in_x0;
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(long *)(in_x0 + 0x28) + -8);
  uVar1 = *puVar2;
  *(undefined8 **)(in_x0 + 0x28) = puVar2;
  return uVar1;
}


