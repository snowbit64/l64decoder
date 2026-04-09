// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: QueryDoubleText
// Entry Point: 00dff260
// Size: 140 bytes
// Signature: undefined __thiscall QueryDoubleText(XMLElement * this, double * param_1)


/* tinyxml2::XMLElement::QueryDoubleText(double*) const */

long __thiscall tinyxml2::XMLElement::QueryDoubleText(XMLElement *this,double *param_1)

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
    iVar1 = sscanf(__s,"%lf",param_1);
    return (ulong)(iVar1 != 1) << 4;
  }
  return 0x11;
}


