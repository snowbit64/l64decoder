// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InsertChildPreamble
// Entry Point: 00dfb6bc
// Size: 220 bytes
// Signature: undefined __thiscall InsertChildPreamble(XMLNode * this, XMLNode * param_1)


/* tinyxml2::XMLNode::InsertChildPreamble(tinyxml2::XMLNode*) const */

void __thiscall tinyxml2::XMLNode::InsertChildPreamble(XMLNode *this,XMLNode *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  XMLNode *pXVar5;
  XMLNode **ppXVar6;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if (*(XMLNode **)(lVar2 + 0x38) == param_1) {
      *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_1 + 0x50);
      pXVar5 = *(XMLNode **)(lVar2 + 0x40);
      lVar3 = *(long *)(param_1 + 0x48);
    }
    else {
      pXVar5 = *(XMLNode **)(lVar2 + 0x40);
      lVar3 = *(long *)(param_1 + 0x48);
    }
    if (pXVar5 == param_1) {
      *(long *)(lVar2 + 0x40) = lVar3;
    }
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      *(long *)(*(long *)(param_1 + 0x50) + 0x48) = lVar3;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    return;
  }
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = *(uint *)(lVar2 + 0x104);
  uVar4 = (ulong)uVar1;
  ppXVar6 = *(XMLNode ***)(lVar2 + 0xa8);
  if (0 < (int)uVar1) {
    do {
      if (*ppXVar6 == param_1) {
        pXVar5 = (*(XMLNode ***)(lVar2 + 0xa8))[(int)(uVar1 - 1)];
        *(uint *)(lVar2 + 0x104) = uVar1 - 1;
        *ppXVar6 = pXVar5;
                    /* WARNING: Could not recover jumptable at 0x00dfb794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x60) + 0x28))();
        return;
      }
      uVar4 = uVar4 - 1;
      ppXVar6 = ppXVar6 + 1;
    } while (uVar4 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00dfb74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x60) + 0x28))();
  return;
}


