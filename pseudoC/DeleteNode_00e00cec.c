// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeleteNode
// Entry Point: 00e00cec
// Size: 368 bytes
// Signature: undefined __thiscall DeleteNode(XMLDocument * this, XMLNode * param_1)


/* tinyxml2::XMLDocument::DeleteNode(tinyxml2::XMLNode*) */

void __thiscall tinyxml2::XMLDocument::DeleteNode(XMLDocument *this,XMLNode *param_1)

{
  long lVar1;
  XMLNode **ppXVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  XMLNode *pXVar6;
  XMLNode **ppXVar7;
  long *plVar8;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x28))();
    lVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 8);
      ppXVar2 = *(XMLNode ***)(lVar1 + 0xa8);
      uVar3 = *(uint *)(lVar1 + 0x104);
      uVar5 = (ulong)uVar3;
      ppXVar7 = ppXVar2;
      if (0 < (int)uVar3) {
        do {
          if (*ppXVar7 == param_1) goto LAB_00e00e1c;
          uVar5 = uVar5 - 1;
          ppXVar7 = ppXVar7 + 1;
        } while (uVar5 != 0);
      }
    }
  }
  else {
    if (*(XMLNode **)(lVar1 + 0x38) == param_1) {
      *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(param_1 + 0x50);
      pXVar6 = *(XMLNode **)(lVar1 + 0x40);
      lVar4 = *(long *)(param_1 + 0x48);
    }
    else {
      pXVar6 = *(XMLNode **)(lVar1 + 0x40);
      lVar4 = *(long *)(param_1 + 0x48);
    }
    if (pXVar6 == param_1) {
      *(long *)(lVar1 + 0x40) = lVar4;
    }
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      *(long *)(*(long *)(param_1 + 0x50) + 0x48) = lVar4;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    lVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 8);
      ppXVar2 = *(XMLNode ***)(lVar1 + 0xa8);
      uVar3 = *(uint *)(lVar1 + 0x104);
      uVar5 = (ulong)uVar3;
      ppXVar7 = ppXVar2;
      if (0 < (int)uVar3) {
        do {
          if (*ppXVar7 == param_1) goto LAB_00e00e1c;
          uVar5 = uVar5 - 1;
          ppXVar7 = ppXVar7 + 1;
        } while (uVar5 != 0);
      }
    }
  }
LAB_00e00e2c:
  plVar8 = *(long **)(param_1 + 0x60);
  (**(code **)(*(long *)param_1 + 0x78))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00e00e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x20))(plVar8,param_1);
  return;
LAB_00e00e1c:
  pXVar6 = ppXVar2[(int)(uVar3 - 1)];
  *(uint *)(lVar1 + 0x104) = uVar3 - 1;
  *ppXVar7 = pXVar6;
  goto LAB_00e00e2c;
}


