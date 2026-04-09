// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: UnsignedAttribute
// Entry Point: 00dfe5fc
// Size: 168 bytes
// Signature: undefined __thiscall UnsignedAttribute(XMLElement * this, char * param_1, uint param_2)


/* tinyxml2::XMLElement::UnsignedAttribute(char const*, unsigned int) const */

uint __thiscall tinyxml2::XMLElement::UnsignedAttribute(XMLElement *this,char *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(this + 0x70);
  local_3c = param_2;
  do {
    if (lVar4 == 0) {
LAB_00dfe678:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(this);
    }
    pcVar3 = (char *)StrPair::GetStr();
    if (pcVar3 == param_1) {
LAB_00dfe65c:
      pcVar3 = (char *)StrPair::GetStr();
      uVar2 = sscanf(pcVar3,"%u",&local_3c);
      this = (XMLElement *)(ulong)uVar2;
      param_2 = local_3c;
      goto LAB_00dfe678;
    }
    uVar2 = strncmp(pcVar3,param_1,0x7fffffff);
    this = (XMLElement *)(ulong)uVar2;
    if (uVar2 == 0) goto LAB_00dfe65c;
    lVar4 = *(long *)(lVar4 + 0x40);
  } while( true );
}


