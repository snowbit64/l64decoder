// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Unsigned64Text
// Entry Point: 00dff584
// Size: 180 bytes
// Signature: undefined __thiscall Unsigned64Text(XMLElement * this, ulong param_1)


/* tinyxml2::XMLElement::Unsigned64Text(unsigned long) const */

ulong __thiscall tinyxml2::XMLElement::Unsigned64Text(XMLElement *this,ulong param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *__s;
  ulong uVar4;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = param_1;
  if ((*(long **)(this + 0x38) != (long *)0x0) &&
     (lVar3 = (**(code **)(**(long **)(this + 0x38) + 0x38))(), lVar3 != 0)) {
    lVar3 = (**(code **)(**(long **)(this + 0x38) + 0x48))(*(long **)(this + 0x38));
    if (lVar3 == 0) {
      __s = (char *)StrPair::GetStr();
    }
    else {
      __s = (char *)0x0;
    }
    local_40 = 0;
    iVar2 = sscanf(__s,"%llu",&local_40);
    uVar4 = local_40;
    if (iVar2 != 1) {
      uVar4 = param_1;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


