// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: eliminateWritesToRemovedStructFields
// Entry Point: 00c29fc4
// Size: 76 bytes
// Signature: undefined eliminateWritesToRemovedStructFields(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Function::eliminateWritesToRemovedStructFields() */

void IR_Function::eliminateWritesToRemovedStructFields(void)

{
  long in_x0;
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(in_x0 + 0xb8);
  if (*(long *)(in_x0 + 0xc0) != lVar1) {
    uVar2 = 0;
    do {
      IR_Section::eliminateWritesToRemovedStructFields
                (*(IR_Section **)(lVar1 + uVar2 * 8),*(IR_TypeSet **)(in_x0 + 0x38));
      lVar1 = *(long *)(in_x0 + 0xb8);
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 < (ulong)(*(long *)(in_x0 + 0xc0) - lVar1 >> 3));
  }
  return;
}


