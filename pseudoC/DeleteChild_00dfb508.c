// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeleteChild
// Entry Point: 00dfb508
// Size: 268 bytes
// Signature: undefined __thiscall DeleteChild(XMLNode * this, XMLNode * param_1)


/* tinyxml2::XMLNode::DeleteChild(tinyxml2::XMLNode*) */

void __thiscall tinyxml2::XMLNode::DeleteChild(XMLNode *this,XMLNode *param_1)

{
  uint uVar1;
  long lVar2;
  XMLNode *pXVar3;
  ulong uVar4;
  XMLNode **ppXVar5;
  long *plVar6;
  
  if (*(XMLNode **)(this + 0x38) == param_1) {
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x50);
    pXVar3 = *(XMLNode **)(this + 0x40);
    lVar2 = *(long *)(param_1 + 0x48);
  }
  else {
    pXVar3 = *(XMLNode **)(this + 0x40);
    lVar2 = *(long *)(param_1 + 0x48);
  }
  if (pXVar3 == param_1) {
    *(long *)(this + 0x40) = lVar2;
  }
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(param_1 + 0x50);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(*(long *)(param_1 + 0x50) + 0x48) = lVar2;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  lVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 8);
    uVar1 = *(uint *)(lVar2 + 0x104);
    uVar4 = (ulong)uVar1;
    ppXVar5 = *(XMLNode ***)(lVar2 + 0xa8);
    if (0 < (int)uVar1) {
      do {
        if (*ppXVar5 == param_1) {
          pXVar3 = (*(XMLNode ***)(lVar2 + 0xa8))[(int)(uVar1 - 1)];
          *(uint *)(lVar2 + 0x104) = uVar1 - 1;
          *ppXVar5 = pXVar3;
          break;
        }
        uVar4 = uVar4 - 1;
        ppXVar5 = ppXVar5 + 1;
      } while (uVar4 != 0);
    }
  }
  plVar6 = *(long **)(param_1 + 0x60);
  (**(code **)(*(long *)param_1 + 0x78))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00dfb598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))(plVar6,param_1);
  return;
}


