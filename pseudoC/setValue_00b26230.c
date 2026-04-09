// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setValue
// Entry Point: 00b26230
// Size: 240 bytes
// Signature: undefined __thiscall setValue(DomXMLFile * this, char * param_1, char * param_2)


/* DomXMLFile::setValue(char const*, char const*) */

void __thiscall DomXMLFile::setValue(DomXMLFile *this,char *param_1,char *param_2)

{
  long lVar1;
  XMLElement *this_00;
  XMLAttribute *this_01;
  XMLNode *pXVar2;
  long *plVar3;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((((this[8] != (DomXMLFile)0x0) && (param_1 != (char *)0x0)) && (*(long *)(this + 0x28) != 0))
     && (this_00 = (XMLElement *)getElement(this,param_1,true,&local_50,(bool *)0x0),
        this_00 != (XMLElement *)0x0)) {
    if (local_50 == (char *)0x0) {
      for (plVar3 = *(long **)(this_00 + 0x38); plVar3 != (long *)0x0; plVar3 = (long *)plVar3[10])
      {
        pXVar2 = (XMLNode *)(**(code **)(*plVar3 + 8))(plVar3);
        if (pXVar2 != (XMLNode *)0x0) {
          tinyxml2::XMLNode::SetValue(pXVar2,param_2,false);
          goto LAB_00b262f4;
        }
      }
      pXVar2 = (XMLNode *)tinyxml2::XMLDocument::NewText(*(XMLDocument **)(this + 0x28),param_2);
      tinyxml2::XMLNode::InsertEndChild((XMLNode *)this_00,pXVar2);
    }
    else {
      this_01 = (XMLAttribute *)tinyxml2::XMLElement::FindOrCreateAttribute(this_00,local_50);
      tinyxml2::XMLAttribute::SetAttribute(this_01,param_2);
    }
  }
LAB_00b262f4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


