// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetText
// Entry Point: 00dfec2c
// Size: 108 bytes
// Signature: undefined __thiscall SetText(XMLElement * this, int param_1)


/* tinyxml2::XMLElement::SetText(int) */

void __thiscall tinyxml2::XMLElement::SetText(XMLElement *this,int param_1)

{
  long lVar1;
  char acStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00dfa4ec(acStack_f0,200,200,&DAT_004c7f7a,param_1);
  SetText(this,acStack_f0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


