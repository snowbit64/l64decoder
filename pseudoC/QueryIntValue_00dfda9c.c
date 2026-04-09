// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: QueryIntValue
// Entry Point: 00dfda9c
// Size: 64 bytes
// Signature: undefined __thiscall QueryIntValue(XMLAttribute * this, int * param_1)


/* tinyxml2::XMLAttribute::QueryIntValue(int*) const */

long __thiscall tinyxml2::XMLAttribute::QueryIntValue(XMLAttribute *this,int *param_1)

{
  int iVar1;
  char *__s;
  
  __s = (char *)StrPair::GetStr();
  iVar1 = sscanf(__s,"%d",param_1);
  return (ulong)(iVar1 != 1) << 1;
}


