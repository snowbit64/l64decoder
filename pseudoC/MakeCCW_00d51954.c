// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakeCCW
// Entry Point: 00d51954
// Size: 144 bytes
// Signature: undefined __thiscall MakeCCW(ICHull * this, CircularListElement * param_1, CircularListElement * param_2, CircularListElement * param_3)


/* HACD::ICHull::MakeCCW(HACD::CircularListElement<HACD::TMMTriangle>*,
   HACD::CircularListElement<HACD::TMMEdge>*, HACD::CircularListElement<HACD::TMMVertex>*) */

undefined8 __thiscall
HACD::ICHull::MakeCCW
          (ICHull *this,CircularListElement *param_1,CircularListElement *param_2,
          CircularListElement *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar7;
  long *plVar6;
  
  uVar4 = 0;
  lVar7 = 0x10;
  if (*(char *)(*(long *)(param_2 + 8) + 0xd0) != '\0') {
    lVar7 = 8;
  }
  lVar1 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  plVar5 = (long *)(*(long *)(param_2 + lVar7) + 0x20);
  do {
    plVar6 = plVar5 + 1;
    lVar7 = *plVar5;
    uVar4 = uVar4 + 1;
    plVar5 = plVar6;
  } while (lVar7 != lVar1);
  if (plVar6[(uVar4 / 3) * -3] != lVar3) {
    *(long *)(param_1 + 0x20) = lVar3;
    *(long *)(param_1 + 0x28) = lVar1;
    *(CircularListElement **)(param_1 + 0x30) = param_3;
    return 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(long *)(param_1 + 0x20) = lVar1;
  *(long *)(param_1 + 0x28) = lVar3;
  *(CircularListElement **)(param_1 + 0x30) = param_3;
  return 1;
}


