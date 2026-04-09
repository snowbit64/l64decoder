// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: QueryUnsignedText
// Entry Point: 00dfefc0
// Size: 140 bytes
// Signature: undefined __thiscall QueryUnsignedText(XMLElement * this, uint * param_1)


/* tinyxml2::XMLElement::QueryUnsignedText(unsigned int*) const */

long __thiscall tinyxml2::XMLElement::QueryUnsignedText(XMLElement *this,uint *param_1)

{
  int iVar1;
  long lVar2;
  char *__s;
  
  if ((*(long **)(this + 0x38) != (long *)0x0) &&
     (lVar2 = (**(code **)(**(long **)(this + 0x38) + 0x38))(), lVar2 != 0)) {
    lVar2 = (**(code **)(**(long **)(this + 0x38) + 0x48))(*(long **)(this + 0x38));
    if (lVar2 == 0) {
      __s = (char *)StrPair::GetStr();
    }
    else {
      __s = (char *)0x0;
    }
    iVar1 = sscanf(__s,"%u",param_1);
    return (ulong)(iVar1 != 1) << 4;
  }
  return 0x11;
}


