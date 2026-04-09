// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetText
// Entry Point: 00dfeecc
// Size: 104 bytes
// Signature: undefined __cdecl SetText(double param_1)


/* tinyxml2::XMLElement::SetText(double) */

void tinyxml2::XMLElement::SetText(double param_1)

{
  long lVar1;
  XMLElement *in_x0;
  char acStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00dfa4ec(acStack_f0,200,200,"%.17g");
  SetText(in_x0,acStack_f0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


