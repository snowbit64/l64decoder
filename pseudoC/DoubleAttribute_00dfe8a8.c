// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DoubleAttribute
// Entry Point: 00dfe8a8
// Size: 176 bytes
// Signature: undefined __thiscall DoubleAttribute(XMLElement * this, char * param_1, double param_2)


/* tinyxml2::XMLElement::DoubleAttribute(char const*, double) const */

undefined  [16] __thiscall
tinyxml2::XMLElement::DoubleAttribute(XMLElement *this,char *param_1,double param_2)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  long lVar4;
  undefined auVar5 [16];
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(this + 0x70);
  local_40 = param_2;
  do {
    if (lVar4 == 0) {
LAB_00dfe928:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = param_2;
        return auVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(this);
    }
    pcVar3 = (char *)StrPair::GetStr();
    if (pcVar3 == param_1) {
LAB_00dfe90c:
      pcVar3 = (char *)StrPair::GetStr();
      uVar2 = sscanf(pcVar3,"%lf",&local_40);
      this = (XMLElement *)(ulong)uVar2;
      param_2 = local_40;
      goto LAB_00dfe928;
    }
    uVar2 = strncmp(pcVar3,param_1,0x7fffffff);
    this = (XMLElement *)(ulong)uVar2;
    if (uVar2 == 0) goto LAB_00dfe90c;
    lVar4 = *(long *)(lVar4 + 0x40);
  } while( true );
}


