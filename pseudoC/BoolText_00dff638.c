// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BoolText
// Entry Point: 00dff638
// Size: 168 bytes
// Signature: undefined __thiscall BoolText(XMLElement * this, bool param_1)


/* tinyxml2::XMLElement::BoolText(bool) const */

void __thiscall tinyxml2::XMLElement::BoolText(XMLElement *this,bool param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c[0] = param_1;
  if ((*(long **)(this + 0x38) != (long *)0x0) &&
     (lVar2 = (**(code **)(**(long **)(this + 0x38) + 0x38))(), lVar2 != 0)) {
    lVar2 = (**(code **)(**(long **)(this + 0x38) + 0x48))(*(long **)(this + 0x38));
    if (lVar2 == 0) {
      pcVar3 = (char *)StrPair::GetStr();
    }
    else {
      pcVar3 = (char *)0x0;
    }
    XMLUtil::ToBool(pcVar3,local_3c);
    param_1 = local_3c[0];
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1 != false);
}


