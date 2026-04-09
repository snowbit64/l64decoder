// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: QueryBoolText
// Entry Point: 00dff1dc
// Size: 132 bytes
// Signature: undefined __thiscall QueryBoolText(XMLElement * this, bool * param_1)


/* tinyxml2::XMLElement::QueryBoolText(bool*) const */

undefined4 __thiscall tinyxml2::XMLElement::QueryBoolText(XMLElement *this,bool *param_1)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  if ((*(long **)(this + 0x38) != (long *)0x0) &&
     (lVar1 = (**(code **)(**(long **)(this + 0x38) + 0x38))(), lVar1 != 0)) {
    lVar1 = (**(code **)(**(long **)(this + 0x38) + 0x48))(*(long **)(this + 0x38));
    if (lVar1 == 0) {
      pcVar2 = (char *)StrPair::GetStr();
    }
    else {
      pcVar2 = (char *)0x0;
    }
    uVar3 = XMLUtil::ToBool(pcVar2,param_1);
    uVar4 = 0;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0x10;
    }
    return uVar4;
  }
  return 0x11;
}


