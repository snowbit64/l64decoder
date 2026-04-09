// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: QueryFloatValue
// Entry Point: 00dfdc4c
// Size: 64 bytes
// Signature: undefined __thiscall QueryFloatValue(XMLAttribute * this, float * param_1)


/* tinyxml2::XMLAttribute::QueryFloatValue(float*) const */

long __thiscall tinyxml2::XMLAttribute::QueryFloatValue(XMLAttribute *this,float *param_1)

{
  int iVar1;
  char *__s;
  
  __s = (char *)StrPair::GetStr();
  iVar1 = sscanf(__s,"%f",param_1);
  return (ulong)(iVar1 != 1) << 1;
}


