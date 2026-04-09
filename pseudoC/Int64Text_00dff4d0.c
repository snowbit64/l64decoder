// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Int64Text
// Entry Point: 00dff4d0
// Size: 180 bytes
// Signature: undefined __thiscall Int64Text(XMLElement * this, long param_1)


/* tinyxml2::XMLElement::Int64Text(long) const */

long __thiscall tinyxml2::XMLElement::Int64Text(XMLElement *this,long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *__s;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1;
  if ((*(long **)(this + 0x38) != (long *)0x0) &&
     (lVar3 = (**(code **)(**(long **)(this + 0x38) + 0x38))(), lVar3 != 0)) {
    lVar4 = (**(code **)(**(long **)(this + 0x38) + 0x48))(*(long **)(this + 0x38));
    if (lVar4 == 0) {
      __s = (char *)StrPair::GetStr();
    }
    else {
      __s = (char *)0x0;
    }
    local_40 = 0;
    iVar2 = sscanf(__s,"%lld",&local_40);
    lVar4 = local_40;
    if (iVar2 != 1) {
      lVar4 = param_1;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}


