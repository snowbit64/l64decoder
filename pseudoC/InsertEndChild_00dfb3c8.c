// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InsertEndChild
// Entry Point: 00dfb3c8
// Size: 320 bytes
// Signature: undefined __thiscall InsertEndChild(XMLNode * this, XMLNode * param_1)


/* tinyxml2::XMLNode::InsertEndChild(tinyxml2::XMLNode*) */

XMLNode * __thiscall tinyxml2::XMLNode::InsertEndChild(XMLNode *this,XMLNode *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  XMLNode **ppXVar4;
  ulong uVar5;
  XMLNode *pXVar6;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != *(long *)(this + 8)) {
    return (XMLNode *)0x0;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar1 = *(uint *)(lVar2 + 0x104);
    uVar5 = (ulong)uVar1;
    ppXVar4 = *(XMLNode ***)(lVar2 + 0xa8);
    if (0 < (int)uVar1) {
      do {
        if (*ppXVar4 == param_1) {
          pXVar6 = (*(XMLNode ***)(lVar2 + 0xa8))[(int)(uVar1 - 1)];
          *(uint *)(lVar2 + 0x104) = uVar1 - 1;
          *ppXVar4 = pXVar6;
          break;
        }
        uVar5 = uVar5 - 1;
        ppXVar4 = ppXVar4 + 1;
      } while (uVar5 != 0);
    }
    (**(code **)(**(long **)(param_1 + 0x60) + 0x28))();
    lVar2 = *(long *)(this + 0x40);
  }
  else {
    if (*(XMLNode **)(lVar3 + 0x38) == param_1) {
      *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(param_1 + 0x50);
      pXVar6 = *(XMLNode **)(lVar3 + 0x40);
      lVar2 = *(long *)(param_1 + 0x48);
    }
    else {
      pXVar6 = *(XMLNode **)(lVar3 + 0x40);
      lVar2 = *(long *)(param_1 + 0x48);
    }
    if (pXVar6 == param_1) {
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
    lVar2 = *(long *)(this + 0x40);
  }
  if (lVar2 == 0) {
    ppXVar4 = (XMLNode **)(this + 0x38);
    *(XMLNode **)(this + 0x40) = param_1;
  }
  else {
    ppXVar4 = (XMLNode **)(this + 0x40);
    *(XMLNode **)(lVar2 + 0x50) = param_1;
  }
  *ppXVar4 = param_1;
  *(long *)(param_1 + 0x48) = lVar2;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(XMLNode **)(param_1 + 0x10) = this;
  return param_1;
}


