// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FloatAttribute
// Entry Point: 00dfe958
// Size: 176 bytes
// Signature: undefined __thiscall FloatAttribute(XMLElement * this, char * param_1, float param_2)


/* tinyxml2::XMLElement::FloatAttribute(char const*, float) const */

float __thiscall tinyxml2::XMLElement::FloatAttribute(XMLElement *this,char *param_1,float param_2)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(this + 0x70);
  local_3c = param_2;
  do {
    if (lVar4 == 0) {
LAB_00dfe9d8:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(this);
    }
    pcVar3 = (char *)StrPair::GetStr();
    if (pcVar3 == param_1) {
LAB_00dfe9bc:
      pcVar3 = (char *)StrPair::GetStr();
      uVar2 = sscanf(pcVar3,"%f",&local_3c);
      this = (XMLElement *)(ulong)uVar2;
      param_2 = local_3c;
      goto LAB_00dfe9d8;
    }
    uVar2 = strncmp(pcVar3,param_1,0x7fffffff);
    this = (XMLElement *)(ulong)uVar2;
    if (uVar2 == 0) goto LAB_00dfe9bc;
    lVar4 = *(long *)(lVar4 + 0x40);
  } while( true );
}


