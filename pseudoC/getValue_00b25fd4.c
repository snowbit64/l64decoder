// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getValue
// Entry Point: 00b25fd4
// Size: 212 bytes
// Signature: undefined __thiscall getValue(DomXMLFile * this, char * param_1, bool param_2)


/* DomXMLFile::getValue(char const*, bool) */

void __thiscall DomXMLFile::getValue(DomXMLFile *this,char *param_1,bool param_2)

{
  long lVar1;
  undefined *puVar2;
  XMLElement *this_00;
  long lVar3;
  long *plVar4;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[8] != (DomXMLFile)0x0) {
    puVar2 = (undefined *)0x0;
    if ((param_1 == (char *)0x0) || (*(long *)(this + 0x28) == 0)) goto LAB_00b26078;
    this_00 = (XMLElement *)getElement(this,param_1,false,&local_40,(bool *)0x0);
    if (this_00 != (XMLElement *)0x0) {
      if (local_40 != (char *)0x0) {
        puVar2 = (undefined *)tinyxml2::XMLElement::Attribute(this_00,local_40,(char *)0x0);
        goto LAB_00b26078;
      }
      for (plVar4 = *(long **)(this_00 + 0x38); plVar4 != (long *)0x0; plVar4 = (long *)plVar4[10])
      {
        lVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
        if (lVar3 != 0) {
          puVar2 = (undefined *)tinyxml2::XMLNode::Value();
          goto LAB_00b26078;
        }
      }
      if (param_2) {
        puVar2 = &DAT_0050a39f;
        goto LAB_00b26078;
      }
    }
  }
  puVar2 = (undefined *)0x0;
LAB_00b26078:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar2);
  }
  return;
}


