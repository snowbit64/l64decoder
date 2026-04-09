// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Unsigned64Attribute
// Entry Point: 00dfe754
// Size: 176 bytes
// Signature: undefined __thiscall Unsigned64Attribute(XMLElement * this, char * param_1, ulong param_2)


/* tinyxml2::XMLElement::Unsigned64Attribute(char const*, unsigned long) const */

ulong __thiscall
tinyxml2::XMLElement::Unsigned64Attribute(XMLElement *this,char *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(this + 0x70);
  do {
    uVar4 = param_2;
    if (lVar5 == 0) {
LAB_00dfe7d8:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pcVar3 = (char *)StrPair::GetStr();
    if ((pcVar3 == param_1) || (iVar2 = strncmp(pcVar3,param_1,0x7fffffff), iVar2 == 0)) {
      pcVar3 = (char *)StrPair::GetStr();
      local_40 = 0;
      iVar2 = sscanf(pcVar3,"%llu",&local_40);
      uVar4 = local_40;
      if (iVar2 != 1) {
        uVar4 = param_2;
      }
      goto LAB_00dfe7d8;
    }
    lVar5 = *(long *)(lVar5 + 0x40);
  } while( true );
}


