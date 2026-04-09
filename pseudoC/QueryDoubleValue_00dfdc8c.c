// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: QueryDoubleValue
// Entry Point: 00dfdc8c
// Size: 64 bytes
// Signature: undefined __thiscall QueryDoubleValue(XMLAttribute * this, double * param_1)


/* tinyxml2::XMLAttribute::QueryDoubleValue(double*) const */

long __thiscall tinyxml2::XMLAttribute::QueryDoubleValue(XMLAttribute *this,double *param_1)

{
  int iVar1;
  char *__s;
  
  __s = (char *)StrPair::GetStr();
  iVar1 = sscanf(__s,"%lf",param_1);
  return (ulong)(iVar1 != 1) << 1;
}


