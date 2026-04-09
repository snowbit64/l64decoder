// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteFace
// Entry Point: 00b6ee7c
// Size: 352 bytes
// Signature: undefined __thiscall deleteFace(Brep * this, uint param_1)


/* Brep::deleteFace(unsigned int) */

void __thiscall Brep::deleteFace(Brep *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  uint *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar4 = *(long *)(this + 0x2f70);
  lVar6 = *(long *)(this + 0x2f68);
  uVar3 = (int)((ulong)(lVar4 - lVar6) >> 5) - 1;
  puVar1 = (undefined8 *)(lVar6 + (ulong)uVar3 * 0x20);
  if ((*(ushort *)puVar1 >> 0xe & 1) == 0) {
    uVar13 = *puVar1;
    uVar12 = puVar1[3];
    uVar11 = puVar1[2];
    puVar2 = (undefined8 *)(lVar6 + (ulong)param_1 * 0x20);
    uVar5 = (ulong)(uVar3 * 4);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar13;
    puVar2[3] = uVar12;
    puVar2[2] = uVar11;
    uVar7 = (ulong)(param_1 << 2);
    uVar8 = uVar7 | 1;
    *(undefined8 *)(*(long *)(this + 0x2f68) + uVar8 * 8) =
         *(undefined8 *)(*(long *)(this + 0x2f68) + (uVar5 | 1) * 8);
    lVar4 = *(long *)(this + 0x2f68);
    piVar9 = (int *)(*(long *)(this + 0x2f50) + (ulong)*(ushort *)(lVar4 + uVar8 * 8) * 0xc + 4);
    if (*piVar9 == (int)(uVar5 | 1) + 1) {
      *piVar9 = (int)uVar8 + 1;
    }
    uVar3 = *(uint *)(lVar4 + uVar8 * 8 + 4);
    if (uVar3 != 0xffffffff) {
      *(int *)(lVar4 + (ulong)uVar3 * 8 + 4) = (int)uVar8;
    }
    uVar8 = uVar7 | 2;
    *(undefined8 *)(lVar4 + uVar8 * 8) = *(undefined8 *)(lVar4 + (uVar5 | 2) * 8);
    lVar4 = *(long *)(this + 0x2f68);
    puVar10 = (uint *)(*(long *)(this + 0x2f50) + (ulong)*(ushort *)(lVar4 + uVar8 * 8) * 0xc + 4);
    if (*puVar10 == ((uint)(uVar5 | 2) | 1)) {
      *puVar10 = (uint)uVar8 | 1;
    }
    uVar3 = *(uint *)(lVar4 + uVar8 * 8 + 4);
    if (uVar3 != 0xffffffff) {
      *(uint *)(lVar4 + (ulong)uVar3 * 8 + 4) = (uint)uVar8;
    }
    uVar7 = uVar7 | 3;
    *(undefined8 *)(lVar4 + uVar7 * 8) = *(undefined8 *)(lVar4 + (uVar5 | 3) * 8);
    lVar4 = *(long *)(this + 0x2f68);
    piVar9 = (int *)(*(long *)(this + 0x2f50) + (ulong)*(ushort *)(lVar4 + uVar7 * 8) * 0xc + 4);
    if (*piVar9 == (int)(uVar5 | 3) + -2) {
      *piVar9 = (int)uVar7 + -2;
    }
    uVar3 = *(uint *)(lVar4 + uVar7 * 8 + 4);
    if (uVar3 != 0xffffffff) {
      *(int *)(lVar4 + (ulong)uVar3 * 8 + 4) = (int)uVar7;
    }
    lVar4 = *(long *)(this + 0x2f70);
  }
  *(long *)(this + 0x2f70) = lVar4 + -0x20;
  return;
}


