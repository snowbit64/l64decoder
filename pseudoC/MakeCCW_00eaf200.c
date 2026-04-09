// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakeCCW
// Entry Point: 00eaf200
// Size: 148 bytes
// Signature: undefined __thiscall MakeCCW(ICHull * this, CircularListElement * param_1, CircularListElement * param_2, CircularListElement * param_3)


/* VHACD::ICHull::MakeCCW(VHACD::CircularListElement<VHACD::TMMTriangle>*,
   VHACD::CircularListElement<VHACD::TMMEdge>*, VHACD::CircularListElement<VHACD::TMMVertex>*) */

undefined8 __thiscall
VHACD::ICHull::MakeCCW
          (ICHull *this,CircularListElement *param_1,CircularListElement *param_2,
          CircularListElement *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  
  uVar5 = 0;
  lVar1 = 0x10;
  if (*(char *)(*(long *)(param_2 + 8) + 0x38) != '\0') {
    lVar1 = 8;
  }
  lVar2 = *(long *)(param_2 + 0x18);
  lVar4 = *(long *)(param_2 + 0x20);
  plVar6 = (long *)(*(long *)(param_2 + lVar1) + 0x20);
  do {
    lVar7 = *plVar6;
    uVar5 = uVar5 + 1;
    plVar6 = plVar6 + 1;
  } while (lVar7 != lVar2);
  if (*(long *)(*(long *)(param_2 + lVar1) +
                (ulong)(uVar5 - (uVar5 / 3 +
                                ((uint)((ulong)uVar5 * 0xaaaaaaab >> 0x20) & 0xfffffffe))) * 8 +
               0x20) != lVar4) {
    *(long *)(param_1 + 0x20) = lVar4;
    *(long *)(param_1 + 0x28) = lVar2;
    *(CircularListElement **)(param_1 + 0x30) = param_3;
    return 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(long *)(param_1 + 0x20) = lVar2;
  *(long *)(param_1 + 0x28) = lVar4;
  *(CircularListElement **)(param_1 + 0x30) = param_3;
  return 1;
}


