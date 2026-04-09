// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeToBuffer
// Entry Point: 008f0908
// Size: 648 bytes
// Signature: undefined __thiscall writeToBuffer(QuadTreeNode * this, char * param_1, uint param_2, uint param_3)


/* GeoQuadTree::QuadTreeNode::writeToBuffer(char*, unsigned int, unsigned int) const */

void __thiscall
GeoQuadTree::QuadTreeNode::writeToBuffer(QuadTreeNode *this,char *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  if (this[0x38] != (QuadTreeNode)0x0) {
    uVar6 = (ulong)param_3;
    do {
      uVar9 = (uint)uVar6;
      param_3 = uVar9 >> 1;
      uVar10 = (ulong)param_3;
      if (uVar9 == 0) {
        uVar6 = 0;
      }
      else {
        if (uVar9 < 8) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
          if (((param_2 == 1) && (CARRY4(param_3,(uint)(uVar6 - 1)) == false)) &&
             (uVar6 - 1 >> 0x20 == 0)) {
            if (uVar9 < 0x20) {
              uVar4 = 0;
            }
            else {
              uVar3 = uVar6 & 0xffffffe0;
              uVar4 = uVar3;
              uVar9 = param_3;
              do {
                puVar1 = (undefined8 *)(param_1 + uVar9);
                uVar4 = uVar4 - 0x20;
                uVar9 = uVar9 + param_2 * 0x20;
                puVar1[1] = 0x7c7c7c7c7c7c7c7c;
                *puVar1 = 0x7c7c7c7c7c7c7c7c;
                puVar1[3] = 0x7c7c7c7c7c7c7c7c;
                puVar1[2] = 0x7c7c7c7c7c7c7c7c;
              } while (uVar4 != 0);
              if (uVar3 == uVar6) goto LAB_008f0960;
              uVar4 = uVar3;
              if ((uVar6 & 0x18) == 0) goto LAB_008f0a84;
            }
            uVar3 = uVar6 & 0xfffffff8;
            uVar9 = param_3 + (int)uVar4;
            lVar5 = uVar4 - uVar3;
            do {
              *(undefined8 *)(param_1 + uVar9) = 0x7c7c7c7c7c7c7c7c;
              lVar5 = lVar5 + 8;
              uVar9 = uVar9 + param_2 * 8;
            } while (lVar5 != 0);
            if (uVar3 == uVar6) goto LAB_008f0960;
          }
        }
LAB_008f0a84:
        uVar9 = param_3 + param_2 * (int)uVar3;
        lVar5 = uVar6 - uVar3;
        do {
          param_1[uVar9] = '|';
          uVar9 = uVar9 + param_2;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
LAB_008f0960:
      uVar9 = param_3 * param_2;
      memset(param_1 + uVar9,0x2d,uVar6);
      param_1[uVar9 + param_3] = '+';
      writeToBuffer(*(QuadTreeNode **)(this + 0x40),param_1,param_2,param_3);
      writeToBuffer(*(QuadTreeNode **)(this + 0x48),param_1 + uVar10 + 1,param_2,param_3);
      writeToBuffer(*(QuadTreeNode **)(this + 0x50),param_1 + (param_2 + uVar9),param_2,param_3);
      this = *(QuadTreeNode **)(this + 0x58);
      param_1 = param_1 + (param_2 + uVar9) + uVar10 + 1;
      uVar6 = uVar10;
    } while (this[0x38] != (QuadTreeNode)0x0);
  }
  if (param_3 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    iVar2 = *(int *)(this + 0x30);
    uVar9 = 0;
    uVar6 = (ulong)param_3;
    do {
      memset(param_1 + uVar9,iVar2 + 0x30,(ulong)param_3);
      uVar9 = uVar9 + param_2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    uVar9 = param_3 - 1;
    if (uVar9 < 2) {
      return;
    }
  }
  uVar6 = 1;
  uVar7 = param_2;
  do {
    uVar8 = *(uint *)(this + 0x68);
    if ((uVar8 & 0xff) != 0) {
      param_1[uVar7] = (char)uVar8 + '@';
      uVar8 = *(uint *)(this + 0x68);
    }
    if ((uVar8 & 0xff00) != 0) {
      param_1[uVar9 + uVar7] = (char)(uVar8 >> 8) + '@';
      uVar8 = *(uint *)(this + 0x68);
    }
    if ((uVar8 & 0xff0000) != 0) {
      param_1[uVar6] = (char)(uVar8 >> 0x10) + '@';
      uVar8 = *(uint *)(this + 0x68);
    }
    if (uVar8 >> 0x18 != 0) {
      param_1[uVar9 * param_2 + (int)uVar6] = (char)(uVar8 >> 0x18) + '@';
    }
    uVar6 = uVar6 + 1;
    uVar7 = uVar7 + param_2;
  } while (uVar9 != uVar6);
  return;
}


