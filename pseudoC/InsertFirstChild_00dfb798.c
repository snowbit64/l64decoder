// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InsertFirstChild
// Entry Point: 00dfb798
// Size: 308 bytes
// Signature: undefined __thiscall InsertFirstChild(XMLNode * this, XMLNode * param_1)


/* tinyxml2::XMLNode::InsertFirstChild(tinyxml2::XMLNode*) */

XMLNode * __thiscall tinyxml2::XMLNode::InsertFirstChild(XMLNode *this,XMLNode *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  XMLNode *pXVar5;
  XMLNode **ppXVar6;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != *(long *)(this + 8)) {
    return (XMLNode *)0x0;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar1 = *(uint *)(lVar2 + 0x104);
    uVar4 = (ulong)uVar1;
    ppXVar6 = *(XMLNode ***)(lVar2 + 0xa8);
    if (0 < (int)uVar1) {
      do {
        if (*ppXVar6 == param_1) {
          pXVar5 = (*(XMLNode ***)(lVar2 + 0xa8))[(int)(uVar1 - 1)];
          *(uint *)(lVar2 + 0x104) = uVar1 - 1;
          *ppXVar6 = pXVar5;
          break;
        }
        uVar4 = uVar4 - 1;
        ppXVar6 = ppXVar6 + 1;
      } while (uVar4 != 0);
    }
    (**(code **)(**(long **)(param_1 + 0x60) + 0x28))();
  }
  else {
    if (*(XMLNode **)(lVar3 + 0x38) == param_1) {
      *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(param_1 + 0x50);
      pXVar5 = *(XMLNode **)(lVar3 + 0x40);
      lVar2 = *(long *)(param_1 + 0x48);
    }
    else {
      pXVar5 = *(XMLNode **)(lVar3 + 0x40);
      lVar2 = *(long *)(param_1 + 0x48);
    }
    if (pXVar5 == param_1) {
      *(long *)(lVar3 + 0x40) = lVar2;
    }
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      *(long *)(*(long *)(param_1 + 0x50) + 0x48) = lVar2;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  lVar2 = *(long *)(this + 0x38);
  ppXVar6 = (XMLNode **)(this + 0x40);
  if (lVar2 != 0) {
    ppXVar6 = (XMLNode **)(lVar2 + 0x48);
  }
  *ppXVar6 = param_1;
  *(XMLNode **)(this + 0x38) = param_1;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(long *)(param_1 + 0x50) = lVar2;
  *(XMLNode **)(param_1 + 0x10) = this;
  return param_1;
}


