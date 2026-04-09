// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeOverlayLayers
// Entry Point: 008e8f74
// Size: 356 bytes
// Signature: undefined __thiscall removeOverlayLayers(BaseTerrain * this, vector * param_1)


/* BaseTerrain::removeOverlayLayers(std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> > const&) */

void __thiscall BaseTerrain::removeOverlayLayers(BaseTerrain *this,vector *param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  
  piVar11 = *(int **)(this + 0x20);
  piVar9 = *(int **)(this + 0x28);
  if (piVar11 != piVar9) {
    do {
      while( true ) {
        piVar5 = *(int **)param_1;
        piVar10 = *(int **)(param_1 + 8);
        if (piVar5 == piVar10) break;
        do {
          if (*piVar5 == *piVar11) goto LAB_008e8fe0;
          piVar5 = piVar5 + 1;
        } while (piVar5 != piVar10);
LAB_008e8fa8:
        piVar11 = piVar11 + 0x26;
        if (piVar11 == piVar9) goto LAB_008e9054;
      }
LAB_008e8fe0:
      if (piVar5 == piVar10) goto LAB_008e8fa8;
      piVar5 = piVar11;
      piVar10 = piVar11;
      if (piVar11 + 0x26 == piVar9) {
LAB_008e902c:
        do {
          piVar9 = piVar9 + -0x26;
          FUN_008ecd9c(this + 0x30,piVar9);
        } while (piVar9 != piVar5);
      }
      else {
        do {
          piVar5 = piVar10 + 0x26;
          OverlayLayer::operator=((OverlayLayer *)piVar10,(OverlayLayer *)piVar5);
          piVar1 = piVar10 + 0x4c;
          piVar10 = piVar5;
        } while (piVar1 != piVar9);
        piVar9 = *(int **)(this + 0x28);
        if (piVar5 != piVar9) goto LAB_008e902c;
      }
      piVar9 = piVar5;
      *(int **)(this + 0x28) = piVar9;
    } while (piVar11 != piVar9);
LAB_008e9054:
    lVar12 = *(long *)(this + 0x20);
    lVar7 = (long)piVar9 - lVar12;
    if (lVar7 != 0) {
      lVar2 = *(long *)(this + 8);
      lVar3 = *(long *)(this + 0x10);
      uVar6 = 0;
      uVar8 = (lVar7 >> 3) * -0x79435e50d79435e5;
      do {
        lVar7 = uVar6 * 0x98;
        iVar4 = (int)uVar6;
        uVar6 = (ulong)(iVar4 + 1);
        *(int *)(lVar12 + lVar7) = iVar4 + (int)((ulong)(lVar3 - lVar2) >> 4) * -0x45d1745d;
      } while (uVar6 <= uVar8 && uVar8 - uVar6 != 0);
    }
  }
  return;
}


