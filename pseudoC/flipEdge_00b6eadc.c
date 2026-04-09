// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: flipEdge
// Entry Point: 00b6eadc
// Size: 384 bytes
// Signature: undefined __thiscall flipEdge(Brep * this, uint param_1)


/* Brep::flipEdge(unsigned int) */

void __thiscall Brep::flipEdge(Brep *this,uint param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  
  lVar12 = *(long *)(this + 0x2f68);
  lVar16 = *(long *)(this + 0x2f50);
  uVar9 = param_1 - 2;
  puVar1 = (ushort *)(lVar12 + (ulong)param_1 * 8);
  uVar6 = *(uint *)(puVar1 + 2);
  if ((param_1 + 1 & 3) != 0) {
    uVar9 = param_1 + 1;
  }
  uVar13 = (ulong)uVar9;
  uVar10 = uVar6 - 2;
  if ((uVar6 + 1 & 3) != 0) {
    uVar10 = uVar6 + 1;
  }
  uVar14 = (ulong)uVar10;
  puVar2 = (ushort *)(lVar12 + (ulong)uVar6 * 8);
  puVar11 = (uint *)(lVar16 + (ulong)*puVar1 * 0xc + 4);
  uVar7 = *puVar11;
  uVar4 = *(uint *)(lVar12 + uVar13 * 8 + 4);
  uVar5 = *(uint *)(lVar12 + uVar14 * 8 + 4);
  uVar8 = *puVar2;
  if (uVar7 == uVar9 || uVar7 == uVar6) {
    *puVar11 = uVar6;
  }
  puVar11 = (uint *)(lVar16 + (ulong)uVar8 * 0xc + 4);
  uVar7 = *puVar11;
  if (uVar7 == uVar10 || uVar7 == param_1) {
    *puVar11 = param_1;
  }
  *(uint *)(puVar1 + 2) = uVar5;
  *puVar1 = *(ushort *)(lVar12 + uVar14 * 8);
  if (uVar5 != 0xffffffff) {
    *(uint *)(lVar12 + (ulong)uVar5 * 8 + 4) = param_1;
  }
  uVar8 = *(ushort *)(lVar12 + uVar13 * 8);
  *(uint *)(lVar12 + (ulong)uVar6 * 8 + 4) = uVar4;
  *puVar2 = uVar8;
  if (uVar4 != 0xffffffff) {
    *(uint *)(lVar12 + (ulong)uVar4 * 8 + 4) = uVar6;
  }
  if (this[0x2fb6] != (Brep)0x0) {
    lVar16 = lVar12 + (ulong)param_1 * 8;
    lVar3 = lVar12 + (ulong)uVar6 * 8;
    lVar15 = *(long *)(this + 0x2f98) + (ulong)*(ushort *)(lVar16 + 2) * 0x18;
    *(short *)(lVar15 + 0x14) = *(short *)(lVar15 + 0x14) + -1;
    uVar8 = *(ushort *)(lVar12 + uVar14 * 8 + 2);
    *(ushort *)(lVar16 + 2) = uVar8;
    lVar12 = *(long *)(this + 0x2f98);
    lVar16 = lVar12 + (ulong)uVar8 * 0x18;
    *(short *)(lVar16 + 0x14) = *(short *)(lVar16 + 0x14) + 1;
    lVar16 = *(long *)(this + 0x2f68);
    lVar12 = lVar12 + (ulong)*(ushort *)(lVar3 + 2) * 0x18;
    *(short *)(lVar12 + 0x14) = *(short *)(lVar12 + 0x14) + -1;
    uVar8 = *(ushort *)(lVar16 + uVar13 * 8 + 2);
    *(ushort *)(lVar3 + 2) = uVar8;
    lVar16 = *(long *)(this + 0x2f98) + (ulong)uVar8 * 0x18;
    lVar12 = *(long *)(this + 0x2f68);
    *(short *)(lVar16 + 0x14) = *(short *)(lVar16 + 0x14) + 1;
  }
  *(uint *)(lVar12 + uVar13 * 8 + 4) = uVar10;
  *(uint *)(lVar12 + uVar14 * 8 + 4) = uVar9;
  return;
}


