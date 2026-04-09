// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeCombinedLayers
// Entry Point: 008e934c
// Size: 380 bytes
// Signature: undefined __thiscall removeCombinedLayers(BaseTerrain * this, vector * param_1)


/* BaseTerrain::removeCombinedLayers(std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> > const&) */

void __thiscall BaseTerrain::removeCombinedLayers(BaseTerrain *this,vector *param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  
  piVar5 = *(int **)(this + 0x38);
  piVar7 = *(int **)(this + 0x40);
  if (piVar5 != piVar7) {
    do {
      while( true ) {
        piVar3 = *(int **)param_1;
        piVar8 = *(int **)(param_1 + 8);
        if (piVar3 == piVar8) break;
        do {
          if (*piVar3 == *piVar5) goto LAB_008e93b8;
          piVar3 = piVar3 + 1;
        } while (piVar3 != piVar8);
LAB_008e942c:
        piVar5 = piVar5 + 0x10;
        if (piVar5 == piVar7) goto LAB_008e9478;
      }
LAB_008e93b8:
      if (piVar3 == piVar8) goto LAB_008e942c;
      piVar3 = piVar5;
      piVar8 = piVar5;
      if (piVar5 + 0x10 == piVar7) {
LAB_008e9460:
        do {
          piVar8 = piVar7 + -0x10;
          if ((*(byte *)(piVar7 + -0xe) & 1) != 0) {
            operator_delete(*(void **)(piVar7 + -10));
          }
          piVar7 = piVar8;
        } while (piVar8 != piVar3);
      }
      else {
        do {
          *piVar8 = piVar8[0x10];
          if ((*(byte *)(piVar8 + 2) & 1) != 0) {
            operator_delete(*(void **)(piVar8 + 6));
          }
          piVar3 = piVar8 + 0x10;
          piVar1 = piVar8 + 0x20;
          uVar9 = *(undefined8 *)(piVar8 + 0x12);
          *(undefined2 *)(piVar8 + 0x12) = 0;
          *(undefined8 *)(piVar8 + 10) = *(undefined8 *)(piVar8 + 0x1a);
          *(undefined8 *)(piVar8 + 8) = *(undefined8 *)(piVar8 + 0x18);
          *(undefined8 *)(piVar8 + 0xd) = *(undefined8 *)(piVar8 + 0x1d);
          *(undefined8 *)(piVar8 + 0xb) = *(undefined8 *)(piVar8 + 0x1b);
          *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(piVar8 + 0x14);
          *(undefined8 *)(piVar8 + 2) = uVar9;
          *(undefined8 *)(piVar8 + 6) = *(undefined8 *)(piVar8 + 0x16);
          piVar8 = piVar3;
        } while (piVar1 != piVar7);
        piVar7 = *(int **)(this + 0x40);
        if (piVar3 != *(int **)(this + 0x40)) goto LAB_008e9460;
      }
      piVar7 = piVar3;
      *(int **)(this + 0x40) = piVar7;
    } while (piVar5 != piVar7);
LAB_008e9478:
    lVar6 = *(long *)(this + 0x38);
    lVar2 = (long)piVar7 - lVar6;
    if (lVar2 != 0) {
      uVar4 = 0;
      do {
        *(int *)(lVar6 + uVar4 * 0x40) = (int)uVar4;
        uVar4 = (ulong)((int)uVar4 + 1);
      } while (uVar4 < (ulong)(lVar2 >> 6));
    }
  }
  return;
}


