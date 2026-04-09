// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FloatText
// Entry Point: 00dff78c
// Size: 172 bytes
// Signature: undefined __thiscall FloatText(XMLElement * this, float param_1)


/* tinyxml2::XMLElement::FloatText(float) const */

float __thiscall tinyxml2::XMLElement::FloatText(XMLElement *this,float param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  char *__s;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(this + 0x38);
  local_3c = param_1;
  if ((plVar3 != (long *)0x0) &&
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(), plVar3 != (long *)0x0)) {
    lVar4 = (**(code **)(**(long **)(this + 0x38) + 0x48))(*(long **)(this + 0x38));
    if (lVar4 == 0) {
      __s = (char *)StrPair::GetStr();
    }
    else {
      __s = (char *)0x0;
    }
    uVar2 = sscanf(__s,"%f",&local_3c);
    plVar3 = (long *)(ulong)uVar2;
    param_1 = local_3c;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar3);
}


