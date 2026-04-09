// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hasProperty
// Entry Point: 00b26570
// Size: 156 bytes
// Signature: undefined __thiscall hasProperty(DomXMLFile * this, char * param_1, bool * param_2)


/* DomXMLFile::hasProperty(char const*, bool*) */

void __thiscall DomXMLFile::hasProperty(DomXMLFile *this,char *param_1,bool *param_2)

{
  long lVar1;
  XMLElement *this_00;
  long lVar2;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[8] == (DomXMLFile)0x0) {
    this_00 = (XMLElement *)0x0;
    if (param_2 != (bool *)0x0) {
      *param_2 = false;
    }
  }
  else {
    this_00 = (XMLElement *)getElement(this,param_1,false,&local_30,(bool *)0x0);
    if (param_2 != (bool *)0x0) {
      *param_2 = this_00 != (XMLElement *)0x0;
    }
    if (this_00 != (XMLElement *)0x0) {
      if (local_30 == (char *)0x0) {
        this_00 = (XMLElement *)0x1;
      }
      else {
        lVar2 = tinyxml2::XMLElement::FindAttribute(this_00,local_30);
        this_00 = (XMLElement *)(ulong)(lVar2 != 0);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


