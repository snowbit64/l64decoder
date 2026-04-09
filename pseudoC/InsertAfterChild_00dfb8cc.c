// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InsertAfterChild
// Entry Point: 00dfb8cc
// Size: 612 bytes
// Signature: undefined __thiscall InsertAfterChild(XMLNode * this, XMLNode * param_1, XMLNode * param_2)


/* tinyxml2::XMLNode::InsertAfterChild(tinyxml2::XMLNode*, tinyxml2::XMLNode*) */

XMLNode * __thiscall
tinyxml2::XMLNode::InsertAfterChild(XMLNode *this,XMLNode *param_1,XMLNode *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  XMLNode **ppXVar5;
  XMLNode *pXVar6;
  ulong uVar7;
  
  lVar2 = *(long *)(param_2 + 8);
  if (lVar2 == *(long *)(this + 8)) {
    if (*(XMLNode **)(param_1 + 0x10) != this) {
      return (XMLNode *)0x0;
    }
    if (param_1 != param_2) {
      lVar4 = *(long *)(param_2 + 0x10);
      if (*(long *)(param_1 + 0x50) == 0) {
        if (lVar4 == 0) {
          uVar1 = *(uint *)(lVar2 + 0x104);
          uVar7 = (ulong)uVar1;
          ppXVar5 = *(XMLNode ***)(lVar2 + 0xa8);
          if (0 < (int)uVar1) {
            do {
              if (*ppXVar5 == param_2) {
                pXVar6 = (*(XMLNode ***)(lVar2 + 0xa8))[(int)(uVar1 - 1)];
                *(uint *)(lVar2 + 0x104) = uVar1 - 1;
                *ppXVar5 = pXVar6;
                break;
              }
              uVar7 = uVar7 - 1;
              ppXVar5 = ppXVar5 + 1;
            } while (uVar7 != 0);
          }
          (**(code **)(**(long **)(param_2 + 0x60) + 0x28))();
        }
        else {
          if (*(XMLNode **)(lVar4 + 0x38) == param_2) {
            *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(param_2 + 0x50);
            pXVar6 = *(XMLNode **)(lVar4 + 0x40);
            lVar2 = *(long *)(param_2 + 0x48);
          }
          else {
            pXVar6 = *(XMLNode **)(lVar4 + 0x40);
            lVar2 = *(long *)(param_2 + 0x48);
          }
          if (pXVar6 == param_2) {
            *(long *)(lVar4 + 0x40) = lVar2;
          }
          if (lVar2 != 0) {
            *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(param_2 + 0x50);
          }
          if (*(long *)(param_2 + 0x50) != 0) {
            *(long *)(*(long *)(param_2 + 0x50) + 0x48) = lVar2;
          }
          *(undefined8 *)(param_2 + 0x48) = 0;
          *(undefined8 *)(param_2 + 0x50) = 0;
        }
        ppXVar5 = (XMLNode **)(this + 0x40);
        pXVar6 = *ppXVar5;
        if (pXVar6 == (XMLNode *)0x0) {
          ppXVar5 = (XMLNode **)(this + 0x38);
          *(XMLNode **)(this + 0x40) = param_2;
        }
        else {
          *(XMLNode **)(pXVar6 + 0x50) = param_2;
        }
        *ppXVar5 = param_2;
        *(XMLNode **)(param_2 + 0x48) = pXVar6;
        *(undefined8 *)(param_2 + 0x50) = 0;
        *(XMLNode **)(param_2 + 0x10) = this;
        return param_2;
      }
      if (lVar4 == 0) {
        uVar1 = *(uint *)(lVar2 + 0x104);
        uVar7 = (ulong)uVar1;
        ppXVar5 = *(XMLNode ***)(lVar2 + 0xa8);
        if (0 < (int)uVar1) {
          do {
            if (*ppXVar5 == param_2) {
              pXVar6 = (*(XMLNode ***)(lVar2 + 0xa8))[(int)(uVar1 - 1)];
              *(uint *)(lVar2 + 0x104) = uVar1 - 1;
              *ppXVar5 = pXVar6;
              break;
            }
            uVar7 = uVar7 - 1;
            ppXVar5 = ppXVar5 + 1;
          } while (uVar7 != 0);
        }
        (**(code **)(**(long **)(param_2 + 0x60) + 0x28))();
      }
      else {
        if (*(XMLNode **)(lVar4 + 0x38) == param_2) {
          *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(param_2 + 0x50);
          pXVar6 = *(XMLNode **)(lVar4 + 0x40);
          lVar2 = *(long *)(param_2 + 0x48);
        }
        else {
          pXVar6 = *(XMLNode **)(lVar4 + 0x40);
          lVar2 = *(long *)(param_2 + 0x48);
        }
        if (pXVar6 == param_2) {
          *(long *)(lVar4 + 0x40) = lVar2;
        }
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(param_2 + 0x50);
        }
        if (*(long *)(param_2 + 0x50) != 0) {
          *(long *)(*(long *)(param_2 + 0x50) + 0x48) = lVar2;
        }
        *(undefined8 *)(param_2 + 0x50) = 0;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      *(XMLNode **)(param_2 + 0x48) = param_1;
      *(undefined8 *)(param_2 + 0x50) = uVar3;
      lVar2 = *(long *)(param_1 + 0x50);
      *(XMLNode **)(param_1 + 0x50) = param_2;
      *(XMLNode **)(lVar2 + 0x48) = param_2;
      *(XMLNode **)(param_2 + 0x10) = this;
      return param_2;
    }
  }
  else {
    param_2 = (XMLNode *)0x0;
  }
  return param_2;
}


