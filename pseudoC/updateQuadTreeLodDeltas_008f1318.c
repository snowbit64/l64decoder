// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateQuadTreeLodDeltas
// Entry Point: 008f1318
// Size: 512 bytes
// Signature: undefined __thiscall updateQuadTreeLodDeltas(GeoQuadTree * this, QuadTreeNode * param_1, QuadTreeNode * param_2, QuadTreeNode * param_3, QuadTreeNode * param_4, QuadTreeNode * param_5)


/* GeoQuadTree::updateQuadTreeLodDeltas(GeoQuadTree::QuadTreeNode*, GeoQuadTree::QuadTreeNode
   const*, GeoQuadTree::QuadTreeNode const*, GeoQuadTree::QuadTreeNode const*,
   GeoQuadTree::QuadTreeNode const*) */

void __thiscall
GeoQuadTree::updateQuadTreeLodDeltas
          (GeoQuadTree *this,QuadTreeNode *param_1,QuadTreeNode *param_2,QuadTreeNode *param_3,
          QuadTreeNode *param_4,QuadTreeNode *param_5)

{
  QuadTreeNode QVar1;
  int iVar2;
  QuadTreeNode *pQVar3;
  QuadTreeNode *pQVar4;
  QuadTreeNode *pQVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  QVar1 = param_1[0x38];
  do {
    if (QVar1 == (QuadTreeNode)0x0) {
      if (param_2 == (QuadTreeNode *)0x0) {
        uVar6 = 0;
      }
      else {
        iVar2 = *(uint *)(param_2 + 0x30) - *(uint *)(param_1 + 0x30);
        uVar6 = iVar2 + *(int *)(param_1 + 0x34);
        if (*(uint *)(param_2 + 0x30) < *(uint *)(param_1 + 0x30) || iVar2 == 0) {
          uVar6 = 0;
        }
      }
      if (param_3 == (QuadTreeNode *)0x0) {
        uVar7 = 0;
      }
      else {
        iVar2 = *(uint *)(param_3 + 0x30) - *(uint *)(param_1 + 0x30);
        uVar7 = (iVar2 + *(int *)(param_1 + 0x34)) * 0x100;
        if (*(uint *)(param_3 + 0x30) < *(uint *)(param_1 + 0x30) || iVar2 == 0) {
          uVar7 = 0;
        }
      }
      if (param_4 == (QuadTreeNode *)0x0) {
        uVar8 = 0;
      }
      else {
        iVar2 = *(uint *)(param_4 + 0x30) - *(uint *)(param_1 + 0x30);
        uVar8 = (iVar2 + *(int *)(param_1 + 0x34)) * 0x10000;
        if (*(uint *)(param_4 + 0x30) < *(uint *)(param_1 + 0x30) || iVar2 == 0) {
          uVar8 = 0;
        }
      }
      if (param_5 == (QuadTreeNode *)0x0) {
        uVar9 = 0;
      }
      else {
        iVar2 = *(uint *)(param_5 + 0x30) - *(uint *)(param_1 + 0x30);
        uVar9 = (iVar2 + *(int *)(param_1 + 0x34)) * 0x1000000;
        if (*(uint *)(param_5 + 0x30) < *(uint *)(param_1 + 0x30) || iVar2 == 0) {
          uVar9 = 0;
        }
      }
      uVar9 = uVar7 | uVar6 | uVar8 | uVar9;
      *(uint *)(param_1 + 0x68) = uVar9;
      *(uint *)(*(long *)(param_1 + 0x60) + 0x98) = uVar9;
      return;
    }
    if (param_2 == (QuadTreeNode *)0x0) {
      pQVar3 = (QuadTreeNode *)0x0;
      if (param_4 == (QuadTreeNode *)0x0) goto LAB_008f1390;
LAB_008f1374:
      pQVar5 = param_4;
      if (param_4[0x38] != (QuadTreeNode)0x0) {
        pQVar5 = *(QuadTreeNode **)(param_4 + 0x50);
      }
    }
    else {
      pQVar3 = param_2;
      if (param_2[0x38] != (QuadTreeNode)0x0) {
        pQVar3 = *(QuadTreeNode **)(param_2 + 0x48);
      }
      if (param_4 != (QuadTreeNode *)0x0) goto LAB_008f1374;
LAB_008f1390:
      pQVar5 = (QuadTreeNode *)0x0;
    }
    updateQuadTreeLodDeltas
              (this,*(QuadTreeNode **)(param_1 + 0x40),pQVar3,*(QuadTreeNode **)(param_1 + 0x48),
               pQVar5,*(QuadTreeNode **)(param_1 + 0x50));
    if (param_3 == (QuadTreeNode *)0x0) {
      pQVar4 = (QuadTreeNode *)0x0;
      pQVar3 = *(QuadTreeNode **)(param_1 + 0x40);
      pQVar5 = *(QuadTreeNode **)(param_1 + 0x48);
    }
    else {
      pQVar4 = param_3;
      if (param_3[0x38] != (QuadTreeNode)0x0) {
        pQVar4 = *(QuadTreeNode **)(param_3 + 0x40);
      }
      pQVar3 = *(QuadTreeNode **)(param_1 + 0x40);
      pQVar5 = *(QuadTreeNode **)(param_1 + 0x48);
    }
    if ((param_4 != (QuadTreeNode *)0x0) && (param_4[0x38] != (QuadTreeNode)0x0)) {
      param_4 = *(QuadTreeNode **)(param_4 + 0x58);
    }
    updateQuadTreeLodDeltas(this,pQVar5,pQVar3,pQVar4,param_4,*(QuadTreeNode **)(param_1 + 0x58));
    if ((param_2 != (QuadTreeNode *)0x0) && (param_2[0x38] != (QuadTreeNode)0x0)) {
      param_2 = *(QuadTreeNode **)(param_2 + 0x58);
    }
    if (param_5 == (QuadTreeNode *)0x0) {
      pQVar3 = (QuadTreeNode *)0x0;
    }
    else {
      pQVar3 = param_5;
      if (param_5[0x38] != (QuadTreeNode)0x0) {
        pQVar3 = *(QuadTreeNode **)(param_5 + 0x40);
      }
    }
    updateQuadTreeLodDeltas
              (this,*(QuadTreeNode **)(param_1 + 0x50),param_2,*(QuadTreeNode **)(param_1 + 0x58),
               *(QuadTreeNode **)(param_1 + 0x40),pQVar3);
    param_2 = *(QuadTreeNode **)(param_1 + 0x50);
    if ((param_3 != (QuadTreeNode *)0x0) && (param_3[0x38] != (QuadTreeNode)0x0)) {
      param_3 = *(QuadTreeNode **)(param_3 + 0x50);
    }
    param_4 = *(QuadTreeNode **)(param_1 + 0x48);
    if ((param_5 != (QuadTreeNode *)0x0) && (param_5[0x38] != (QuadTreeNode)0x0)) {
      param_5 = *(QuadTreeNode **)(param_5 + 0x48);
    }
    QVar1 = (*(QuadTreeNode **)(param_1 + 0x58))[0x38];
    param_1 = *(QuadTreeNode **)(param_1 + 0x58);
  } while( true );
}


