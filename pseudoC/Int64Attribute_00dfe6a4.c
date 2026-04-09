// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Int64Attribute
// Entry Point: 00dfe6a4
// Size: 176 bytes
// Signature: undefined __thiscall Int64Attribute(XMLElement * this, char * param_1, long param_2)


/* tinyxml2::XMLElement::Int64Attribute(char const*, long) const */

long __thiscall tinyxml2::XMLElement::Int64Attribute(XMLElement *this,char *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(this + 0x70);
  do {
    lVar4 = param_2;
    if (lVar5 == 0) {
LAB_00dfe728:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return lVar4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pcVar3 = (char *)StrPair::GetStr();
    if ((pcVar3 == param_1) || (iVar2 = strncmp(pcVar3,param_1,0x7fffffff), iVar2 == 0)) {
      pcVar3 = (char *)StrPair::GetStr();
      local_40 = 0;
      iVar2 = sscanf(pcVar3,"%lld",&local_40);
      lVar4 = local_40;
      if (iVar2 != 1) {
        lVar4 = param_2;
      }
      goto LAB_00dfe728;
    }
    lVar5 = *(long *)(lVar5 + 0x40);
  } while( true );
}


