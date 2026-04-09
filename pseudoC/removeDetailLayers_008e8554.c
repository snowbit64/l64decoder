// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeDetailLayers
// Entry Point: 008e8554
// Size: 424 bytes
// Signature: undefined __thiscall removeDetailLayers(BaseTerrain * this, vector * param_1)


/* BaseTerrain::removeDetailLayers(std::__ndk1::vector<unsigned int, std::__ndk1::allocator<unsigned
   int> > const&) */

void __thiscall BaseTerrain::removeDetailLayers(BaseTerrain *this,vector *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  long lVar11;
  
  piVar10 = *(int **)(this + 8);
  piVar8 = *(int **)(this + 0x10);
  if (piVar10 != piVar8) {
    do {
      while( true ) {
        piVar4 = *(int **)param_1;
        piVar9 = *(int **)(param_1 + 8);
        if (piVar4 == piVar9) break;
        do {
          if (*piVar4 == *piVar10) goto LAB_008e85c0;
          piVar4 = piVar4 + 1;
        } while (piVar4 != piVar9);
LAB_008e8588:
        piVar10 = piVar10 + 0x2c;
        if (piVar10 == piVar8) goto LAB_008e8634;
      }
LAB_008e85c0:
      if (piVar4 == piVar9) goto LAB_008e8588;
      piVar4 = piVar10;
      piVar9 = piVar10;
      if (piVar10 + 0x2c == piVar8) {
LAB_008e860c:
        do {
          piVar8 = piVar8 + -0x2c;
          FUN_008eccf8(this + 0x18,piVar8);
        } while (piVar8 != piVar4);
      }
      else {
        do {
          piVar4 = piVar9 + 0x2c;
          DetailLayer::operator=((DetailLayer *)piVar9,(DetailLayer *)piVar4);
          piVar1 = piVar9 + 0x58;
          piVar9 = piVar4;
        } while (piVar1 != piVar8);
        piVar8 = *(int **)(this + 0x10);
        if (piVar4 != piVar8) goto LAB_008e860c;
      }
      piVar8 = piVar4;
      *(int **)(this + 0x10) = piVar8;
    } while (piVar10 != piVar8);
LAB_008e8634:
    lVar11 = *(long *)(this + 8);
    lVar2 = (long)piVar8 - lVar11;
    if (lVar2 != 0) {
      uVar5 = 0;
      uVar6 = (lVar2 >> 4) * 0x2e8ba2e8ba2e8ba3;
      do {
        *(int *)(lVar11 + uVar5 * 0xb0) = (int)uVar5;
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (uVar5 <= uVar6 && uVar6 - uVar5 != 0);
      iVar3 = (int)((ulong)(*(long *)(this + 0x10) - *(long *)(this + 8)) >> 4) * -0x45d1745d;
      goto LAB_008e86a0;
    }
  }
  iVar3 = 0;
LAB_008e86a0:
  lVar2 = *(long *)(this + 0x20);
  lVar11 = *(long *)(this + 0x28) - lVar2;
  if (lVar11 != 0) {
    uVar5 = 0;
    uVar6 = (lVar11 >> 3) * -0x79435e50d79435e5;
    do {
      lVar11 = uVar5 * 0x98;
      iVar7 = (int)uVar5;
      uVar5 = (ulong)(iVar7 + 1);
      *(int *)(lVar2 + lVar11) = iVar3 + iVar7;
    } while (uVar5 <= uVar6 && uVar6 - uVar5 != 0);
  }
  return;
}


