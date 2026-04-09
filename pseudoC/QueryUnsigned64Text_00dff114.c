// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: QueryUnsigned64Text
// Entry Point: 00dff114
// Size: 200 bytes
// Signature: undefined __thiscall QueryUnsigned64Text(XMLElement * this, ulong * param_1)


/* tinyxml2::XMLElement::QueryUnsigned64Text(unsigned long*) const */

void __thiscall tinyxml2::XMLElement::QueryUnsigned64Text(XMLElement *this,ulong *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *__s;
  undefined8 uVar4;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(long **)(this + 0x38) == (long *)0x0) ||
     (lVar3 = (**(code **)(**(long **)(this + 0x38) + 0x38))(), lVar3 == 0)) {
    uVar4 = 0x11;
  }
  else {
    lVar3 = (**(code **)(**(long **)(this + 0x38) + 0x48))(*(long **)(this + 0x38));
    if (lVar3 == 0) {
      __s = (char *)StrPair::GetStr();
    }
    else {
      __s = (char *)0x0;
    }
    local_40 = 0;
    iVar2 = sscanf(__s,"%llu",&local_40);
    if (iVar2 == 1) {
      uVar4 = 0;
      *param_1 = local_40;
    }
    else {
      uVar4 = 0x10;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


