// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeepCopy
// Entry Point: 00e00e5c
// Size: 364 bytes
// Signature: undefined __thiscall DeepCopy(XMLDocument * this, XMLDocument * param_1)


/* tinyxml2::XMLDocument::DeepCopy(tinyxml2::XMLDocument*) const */

void __thiscall tinyxml2::XMLDocument::DeepCopy(XMLDocument *this,XMLDocument *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  XMLNode *this_00;
  
  if (param_1 != this) {
    Clear();
    this_00 = *(XMLNode **)(this + 0x38);
    if (this_00 != (XMLNode *)0x0) {
      do {
        lVar2 = XMLNode::DeepClone(this_00,param_1);
        lVar3 = *(long *)(lVar2 + 8);
        if (lVar3 == *(long *)(param_1 + 8)) {
          lVar4 = *(long *)(lVar2 + 0x10);
          if (lVar4 == 0) {
            uVar1 = *(uint *)(lVar3 + 0x104);
            uVar5 = (ulong)uVar1;
            plVar7 = *(long **)(lVar3 + 0xa8);
            if (0 < (int)uVar1) {
              do {
                if (*plVar7 == lVar2) {
                  lVar4 = (*(long **)(lVar3 + 0xa8))[(int)(uVar1 - 1)];
                  *(uint *)(lVar3 + 0x104) = uVar1 - 1;
                  *plVar7 = lVar4;
                  break;
                }
                uVar5 = uVar5 - 1;
                plVar7 = plVar7 + 1;
              } while (uVar5 != 0);
            }
            (**(code **)(**(long **)(lVar2 + 0x60) + 0x28))();
          }
          else {
            if (*(long *)(lVar4 + 0x38) == lVar2) {
              *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar2 + 0x50);
              lVar6 = *(long *)(lVar4 + 0x40);
              lVar3 = *(long *)(lVar2 + 0x48);
            }
            else {
              lVar6 = *(long *)(lVar4 + 0x40);
              lVar3 = *(long *)(lVar2 + 0x48);
            }
            if (lVar6 == lVar2) {
              *(long *)(lVar4 + 0x40) = lVar3;
            }
            if (lVar3 != 0) {
              *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(lVar2 + 0x50);
            }
            if (*(long *)(lVar2 + 0x50) != 0) {
              *(long *)(*(long *)(lVar2 + 0x50) + 0x48) = lVar3;
            }
            *(undefined8 *)(lVar2 + 0x48) = 0;
            *(undefined8 *)(lVar2 + 0x50) = 0;
          }
          lVar3 = *(long *)(param_1 + 0x40);
          plVar7 = (long *)(param_1 + 0x40);
          if (lVar3 != 0) {
            plVar7 = (long *)(lVar3 + 0x50);
          }
          lVar4 = 0x38;
          if (lVar3 != 0) {
            lVar4 = 0x40;
          }
          *plVar7 = lVar2;
          *(long *)(param_1 + lVar4) = lVar2;
          *(long *)(lVar2 + 0x48) = lVar3;
          *(undefined8 *)(lVar2 + 0x50) = 0;
          *(XMLDocument **)(lVar2 + 0x10) = param_1;
        }
        this_00 = *(XMLNode **)(this_00 + 0x50);
      } while (this_00 != (XMLNode *)0x0);
    }
  }
  return;
}


