// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BoolAttribute
// Entry Point: 00dfe804
// Size: 164 bytes
// Signature: undefined __thiscall BoolAttribute(XMLElement * this, char * param_1, bool param_2)


/* tinyxml2::XMLElement::BoolAttribute(char const*, bool) const */

void __thiscall tinyxml2::XMLElement::BoolAttribute(XMLElement *this,char *param_1,bool param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(this + 0x70);
  local_3c[0] = param_2;
  do {
    if (lVar4 == 0) {
LAB_00dfe878:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_2 != false);
    }
    pcVar3 = (char *)StrPair::GetStr();
    if ((pcVar3 == param_1) || (iVar2 = strncmp(pcVar3,param_1,0x7fffffff), iVar2 == 0)) {
      pcVar3 = (char *)StrPair::GetStr();
      XMLUtil::ToBool(pcVar3,local_3c);
      param_2 = local_3c[0];
      goto LAB_00dfe878;
    }
    lVar4 = *(long *)(lVar4 + 0x40);
  } while( true );
}


