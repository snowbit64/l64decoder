// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetText
// Entry Point: 00dfed04
// Size: 108 bytes
// Signature: undefined __thiscall SetText(XMLElement * this, long param_1)


/* tinyxml2::XMLElement::SetText(long) */

void __thiscall tinyxml2::XMLElement::SetText(XMLElement *this,long param_1)

{
  long lVar1;
  char acStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00dfa4ec(acStack_f0,200,200,&DAT_004dc518,param_1);
  SetText(this,acStack_f0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


