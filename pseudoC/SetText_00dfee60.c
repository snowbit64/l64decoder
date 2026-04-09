// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetText
// Entry Point: 00dfee60
// Size: 108 bytes
// Signature: undefined __thiscall SetText(XMLElement * this, float param_1)


/* tinyxml2::XMLElement::SetText(float) */

void __thiscall tinyxml2::XMLElement::SetText(XMLElement *this,float param_1)

{
  long lVar1;
  char acStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00dfa4ec((double)param_1,acStack_f0,200,200,&DAT_004faf43);
  SetText(this,acStack_f0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


