// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeleteNode
// Entry Point: 00dfb614
// Size: 168 bytes
// Signature: undefined __cdecl DeleteNode(XMLNode * param_1)


/* tinyxml2::XMLNode::DeleteNode(tinyxml2::XMLNode*) */

void tinyxml2::XMLNode::DeleteNode(XMLNode *param_1)

{
  uint uVar1;
  long lVar2;
  XMLNode *pXVar3;
  ulong uVar4;
  XMLNode **ppXVar5;
  long *plVar6;
  
  if (param_1 == (XMLNode *)0x0) {
    return;
  }
  lVar2 = (**(code **)(*(long *)param_1 + 0x18))();
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
                    /* WARNING: Could not recover jumptable at 0x00dfb664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))(plVar6,param_1);
  return;
}


