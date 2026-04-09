// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetText
// Entry Point: 00dfea68
// Size: 452 bytes
// Signature: undefined __thiscall SetText(XMLElement * this, char * param_1)


/* tinyxml2::XMLElement::SetText(char const*) */

void __thiscall tinyxml2::XMLElement::SetText(XMLElement *this,char *param_1)

{
  uint uVar1;
  long lVar2;
  size_t sVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  if ((*(long **)(this + 0x38) == (long *)0x0) ||
     (lVar2 = (**(code **)(**(long **)(this + 0x38) + 8))(), lVar2 == 0)) {
    lVar2 = XMLDocument::NewText(*(XMLDocument **)(this + 8),param_1);
    lVar4 = *(long *)(lVar2 + 8);
    if (lVar4 == *(long *)(this + 8)) {
      lVar5 = *(long *)(lVar2 + 0x10);
      if (lVar5 == 0) {
        uVar1 = *(uint *)(lVar4 + 0x104);
        uVar6 = (ulong)uVar1;
        plVar8 = *(long **)(lVar4 + 0xa8);
        if (0 < (int)uVar1) {
          do {
            if (*plVar8 == lVar2) {
              lVar5 = (*(long **)(lVar4 + 0xa8))[(int)(uVar1 - 1)];
              *(uint *)(lVar4 + 0x104) = uVar1 - 1;
              *plVar8 = lVar5;
              break;
            }
            uVar6 = uVar6 - 1;
            plVar8 = plVar8 + 1;
          } while (uVar6 != 0);
        }
        (**(code **)(**(long **)(lVar2 + 0x60) + 0x28))();
      }
      else {
        if (*(long *)(lVar5 + 0x38) == lVar2) {
          *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(lVar2 + 0x50);
          lVar7 = *(long *)(lVar5 + 0x40);
          lVar4 = *(long *)(lVar2 + 0x48);
        }
        else {
          lVar7 = *(long *)(lVar5 + 0x40);
          lVar4 = *(long *)(lVar2 + 0x48);
        }
        if (lVar7 == lVar2) {
          *(long *)(lVar5 + 0x40) = lVar4;
        }
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(lVar2 + 0x50);
        }
        if (*(long *)(lVar2 + 0x50) != 0) {
          *(long *)(*(long *)(lVar2 + 0x50) + 0x48) = lVar4;
        }
        *(undefined8 *)(lVar2 + 0x48) = 0;
        *(undefined8 *)(lVar2 + 0x50) = 0;
      }
      lVar4 = *(long *)(this + 0x38);
      plVar8 = (long *)(this + 0x40);
      if (lVar4 != 0) {
        plVar8 = (long *)(lVar4 + 0x48);
      }
      *plVar8 = lVar2;
      *(long *)(this + 0x38) = lVar2;
      *(undefined8 *)(lVar2 + 0x48) = 0;
      *(long *)(lVar2 + 0x50) = lVar4;
      *(XMLElement **)(lVar2 + 0x10) = this;
      return;
    }
  }
  else {
    lVar2 = *(long *)(this + 0x38);
    if (((*(byte *)(lVar2 + 0x19) >> 1 & 1) != 0) && (*(void **)(lVar2 + 0x20) != (void *)0x0)) {
      operator_delete__(*(void **)(lVar2 + 0x20));
    }
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    sVar3 = strlen(param_1);
    __dest = operator_new__(sVar3 + 1);
    *(void **)(lVar2 + 0x20) = __dest;
    memcpy(__dest,param_1,sVar3 + 1);
    *(size_t *)(lVar2 + 0x28) = (long)__dest + sVar3;
    *(undefined4 *)(lVar2 + 0x18) = 0x200;
  }
  return;
}


