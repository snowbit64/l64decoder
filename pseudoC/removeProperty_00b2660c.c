// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeProperty
// Entry Point: 00b2660c
// Size: 184 bytes
// Signature: undefined __thiscall removeProperty(DomXMLFile * this, char * param_1)


/* DomXMLFile::removeProperty(char const*) */

void __thiscall DomXMLFile::removeProperty(DomXMLFile *this,char *param_1)

{
  uint uVar1;
  long lVar2;
  XMLElement *this_00;
  XMLElement *this_01;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = (XMLElement *)getElement(this,param_1,false,&local_40,(bool *)0x0);
  this_01 = this_00;
  if (this_00 != (XMLElement *)0x0) {
    if (local_40 == (char *)0x0) {
      this_01 = *(XMLElement **)(this_00 + 0x10);
      if (this_01 == (XMLElement *)0x0) goto LAB_00b2669c;
      uVar1 = *(uint *)(this + 0x38);
      *(undefined4 *)(this + 0x38) = 0;
      if (8 < uVar1) {
        *(undefined8 *)(this + 200) = *(undefined8 *)(this + 0xc0);
      }
      tinyxml2::XMLNode::DeleteChild((XMLNode *)this_01,(XMLNode *)this_00);
    }
    else {
      this_01 = (XMLElement *)tinyxml2::XMLElement::Attribute(this_00,local_40,(char *)0x0);
      if (this_01 == (XMLElement *)0x0) goto LAB_00b2669c;
      tinyxml2::XMLElement::DeleteAttribute(this_00,local_40);
    }
    this_01 = (XMLElement *)0x1;
  }
LAB_00b2669c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}


