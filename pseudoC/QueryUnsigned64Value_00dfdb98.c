// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: QueryUnsigned64Value
// Entry Point: 00dfdb98
// Size: 124 bytes
// Signature: undefined __thiscall QueryUnsigned64Value(XMLAttribute * this, ulong * param_1)


/* tinyxml2::XMLAttribute::QueryUnsigned64Value(unsigned long*) const */

void __thiscall tinyxml2::XMLAttribute::QueryUnsigned64Value(XMLAttribute *this,ulong *param_1)

{
  long lVar1;
  int iVar2;
  char *__s;
  undefined8 uVar3;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __s = (char *)StrPair::GetStr();
  local_30 = 0;
  iVar2 = sscanf(__s,"%llu",&local_30);
  if (iVar2 == 1) {
    uVar3 = 0;
    *param_1 = local_30;
  }
  else {
    uVar3 = 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


