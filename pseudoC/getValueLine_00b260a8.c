// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getValueLine
// Entry Point: 00b260a8
// Size: 192 bytes
// Signature: undefined __thiscall getValueLine(DomXMLFile * this, char * param_1)


/* DomXMLFile::getValueLine(char const*) */

void __thiscall DomXMLFile::getValueLine(DomXMLFile *this,char *param_1)

{
  long lVar1;
  undefined4 uVar2;
  XMLElement *this_00;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[8] != (DomXMLFile)0x0) {
    uVar2 = 0;
    if ((param_1 == (char *)0x0) || (*(long *)(this + 0x28) == 0)) goto LAB_00b26138;
    this_00 = (XMLElement *)getElement(this,param_1,false,&local_30,(bool *)0x0);
    if (this_00 != (XMLElement *)0x0) {
      if (local_30 == (char *)0x0) {
        for (plVar5 = *(long **)(this_00 + 0x38); plVar5 != (long *)0x0; plVar5 = (long *)plVar5[10]
            ) {
          lVar3 = (**(code **)(*plVar5 + 0x38))(plVar5);
          if (lVar3 != 0) {
            puVar4 = (undefined4 *)(lVar3 + 0x30);
            goto LAB_00b2615c;
          }
        }
      }
      else {
        lVar3 = tinyxml2::XMLElement::FindAttribute(this_00,local_30);
        if (lVar3 != 0) {
          puVar4 = (undefined4 *)(lVar3 + 0x38);
LAB_00b2615c:
          uVar2 = *puVar4;
          goto LAB_00b26138;
        }
      }
    }
  }
  uVar2 = 0;
LAB_00b26138:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


