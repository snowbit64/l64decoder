// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>
// Entry Point: 00c00afc
// Size: 728 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>(HEntry * param_1, HEntry * param_2, __less * param_3)


/* bool std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<MarkovHuffmanTree::HEntry,
   MarkovHuffmanTree::HEntry>&, MarkovHuffmanTree::HEntry*>(MarkovHuffmanTree::HEntry*,
   MarkovHuffmanTree::HEntry*, std::__ndk1::__less<MarkovHuffmanTree::HEntry,
   MarkovHuffmanTree::HEntry>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>
               (HEntry *param_1,HEntry *param_2,__less *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined auVar13 [16];
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(uint *)(param_2 + -8) < *(uint *)param_1) {
      uVar5 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_2 + -8) = uVar5;
      return true;
    }
    break;
  case 3:
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 < *(uint *)param_1) {
      uVar5 = *(undefined8 *)param_1;
      if (*(uint *)(param_2 + -8) < uVar1) {
        *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -8);
        *(undefined8 *)(param_2 + -8) = uVar5;
        return true;
      }
      *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = uVar5;
      if (*(uint *)(param_2 + -8) < (uint)uVar5) {
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -8);
        *(undefined8 *)(param_2 + -8) = uVar5;
        return true;
      }
    }
    else if (*(uint *)(param_2 + -8) < uVar1) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_2 + -8) = uVar5;
      if (*(uint *)(param_1 + 8) < *(uint *)param_1) {
        auVar13 = NEON_ext(*(undefined (*) [16])param_1,*(undefined (*) [16])param_1,8,1);
        *(long *)(param_1 + 8) = auVar13._8_8_;
        *(long *)param_1 = auVar13._0_8_;
        return true;
      }
    }
    break;
  case 4:
    __sort4<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>
              (param_1,param_1 + 8,param_1 + 0x10,param_2 + -8,param_3);
    break;
  case 5:
    puVar8 = (undefined8 *)(param_1 + 0x10);
    puVar12 = (undefined8 *)(param_1 + 0x18);
    __sort4<std::__ndk1::__less<MarkovHuffmanTree::HEntry,MarkovHuffmanTree::HEntry>&,MarkovHuffmanTree::HEntry*>
              (param_1,param_1 + 8,(HEntry *)puVar8,(HEntry *)puVar12,param_3);
    if (*(uint *)(param_2 + -8) < *(uint *)(param_1 + 0x18)) {
      uVar5 = *puVar12;
      *puVar12 = *(undefined8 *)(param_2 + -8);
      *(undefined8 *)(param_2 + -8) = uVar5;
      if (*(uint *)puVar12 < *(uint *)puVar8) {
        uVar5 = *puVar12;
        uVar7 = *puVar8;
        *puVar8 = uVar5;
        *puVar12 = uVar7;
        if ((uint)uVar5 < *(uint *)(param_1 + 8)) {
          uVar7 = *(undefined8 *)(param_1 + 8);
          *(undefined8 *)(param_1 + 8) = uVar5;
          *(undefined8 *)(param_1 + 0x10) = uVar7;
          if ((uint)uVar5 < *(uint *)param_1) {
            uVar7 = *(undefined8 *)param_1;
            *(undefined8 *)param_1 = uVar5;
            *(undefined8 *)(param_1 + 8) = uVar7;
            return true;
          }
        }
      }
    }
    break;
  default:
    uVar1 = *(uint *)(param_1 + 8);
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar4 = (ulong)uVar2;
    if (uVar1 < *(uint *)param_1) {
      uVar6 = *(ulong *)param_1;
      if (uVar2 < uVar1) {
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 0x10);
      }
      else {
        *(undefined8 *)param_1 = *(undefined8 *)(param_1 + 8);
        *(ulong *)(param_1 + 8) = uVar6;
        if ((uint)uVar6 <= uVar2) goto LAB_00c00d24;
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
      }
      uVar4 = uVar6 & 0xffffffff;
      *(ulong *)(param_1 + 0x10) = uVar6;
    }
    else if (uVar2 < uVar1) {
      uVar4 = *(ulong *)(param_1 + 8);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = uVar5;
      *(ulong *)(param_1 + 0x10) = uVar4;
      if ((uint)uVar5 < *(uint *)param_1) {
        uVar7 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = uVar5;
        *(undefined8 *)(param_1 + 8) = uVar7;
      }
    }
LAB_00c00d24:
    if (param_1 + 0x18 != param_2) {
      lVar9 = 0;
      iVar10 = 0;
      puVar8 = (undefined8 *)(param_1 + 0x18);
      do {
        if (*(uint *)puVar8 < (uint)uVar4) {
          uVar5 = *puVar8;
          lVar3 = lVar9;
          do {
            lVar11 = lVar3;
            *(undefined8 *)(param_1 + lVar11 + 0x18) = *(undefined8 *)(param_1 + lVar11 + 0x10);
            puVar12 = (undefined8 *)param_1;
            if (lVar11 == -0x10) goto LAB_00c00d80;
            lVar3 = lVar11 + -8;
          } while ((uint)uVar5 < *(uint *)(param_1 + lVar11 + 8));
          puVar12 = (undefined8 *)(param_1 + lVar11 + 0x10);
LAB_00c00d80:
          iVar10 = iVar10 + 1;
          *puVar12 = uVar5;
          if (iVar10 == 8) {
            return puVar8 + 1 == (undefined8 *)param_2;
          }
        }
        if (puVar8 + 1 == (undefined8 *)param_2) {
          return true;
        }
        uVar4 = (ulong)*(uint *)puVar8;
        lVar9 = lVar9 + 8;
        puVar8 = puVar8 + 1;
      } while( true );
    }
  }
  return true;
}


