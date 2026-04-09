// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: contract
// Entry Point: 00b6a45c
// Size: 1060 bytes
// Signature: undefined __thiscall contract(Brep * this, uint param_1)


/* Brep::contract(unsigned int) */

undefined4 __thiscall Brep::contract(Brep *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  Brep BVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  ushort *puVar9;
  int *piVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  lVar8 = *(long *)(this + 0x2f68);
  lVar13 = (ulong)(param_1 >> 2) * 0x20;
  BVar5 = this[0x2fb6];
  *(ushort *)(lVar8 + lVar13) = *(ushort *)(lVar8 + lVar13) | 0x4000;
  if (BVar5 != (Brep)0x0) {
    lVar13 = lVar8 + (ulong)(param_1 >> 2) * 0x20;
    lVar14 = *(long *)(this + 0x2f98);
    lVar15 = lVar14 + (ulong)*(ushort *)(lVar13 + 10) * 0x18;
    *(short *)(lVar15 + 0x14) = *(short *)(lVar15 + 0x14) + -1;
    lVar15 = lVar14 + (ulong)*(ushort *)(lVar13 + 0x12) * 0x18;
    *(short *)(lVar15 + 0x14) = *(short *)(lVar15 + 0x14) + -1;
    lVar14 = lVar14 + (ulong)*(ushort *)(lVar13 + 0x1a) * 0x18;
    *(short *)(lVar14 + 0x14) = *(short *)(lVar14 + 0x14) + -1;
  }
  uVar2 = *(uint *)(lVar8 + (ulong)param_1 * 8 + 4);
  if (uVar2 != 0xffffffff) {
    lVar13 = (ulong)(uVar2 >> 2) * 0x20;
    *(ushort *)(lVar8 + lVar13) = *(ushort *)(lVar8 + lVar13) | 0x4000;
    if (BVar5 != (Brep)0x0) {
      lVar13 = lVar8 + (ulong)(uVar2 >> 2) * 0x20;
      lVar14 = *(long *)(this + 0x2f98);
      lVar15 = lVar14 + (ulong)*(ushort *)(lVar13 + 10) * 0x18;
      *(short *)(lVar15 + 0x14) = *(short *)(lVar15 + 0x14) + -1;
      lVar15 = lVar14 + (ulong)*(ushort *)(lVar13 + 0x12) * 0x18;
      *(short *)(lVar15 + 0x14) = *(short *)(lVar15 + 0x14) + -1;
      lVar14 = lVar14 + (ulong)*(ushort *)(lVar13 + 0x1a) * 0x18;
      *(short *)(lVar14 + 0x14) = *(short *)(lVar14 + 0x14) + -1;
    }
  }
  uVar3 = param_1 + 2;
  if ((param_1 - 1 & 3) != 0) {
    uVar3 = param_1 - 1;
  }
  uVar16 = (ulong)uVar3;
  uVar12 = (ulong)*(ushort *)(lVar8 + (ulong)param_1 * 8);
  uVar6 = *(ushort *)(lVar8 + uVar16 * 8);
  if (BVar5 == (Brep)0x0) {
    uVar18 = 0xffff;
  }
  else {
    uVar18 = (ulong)*(ushort *)(lVar8 + uVar16 * 8 + 2);
  }
  uVar3 = *(uint *)(*(long *)(this + 0x2f50) + uVar12 * 0xc + 4);
  uVar4 = uVar3;
  do {
    uVar7 = uVar4 + 2;
    if ((uVar4 - 1 & 3) != 0) {
      uVar7 = uVar4 - 1;
    }
    uVar17 = (ulong)uVar7;
    if ((*(ushort *)(lVar8 + (ulong)(uVar4 >> 2) * 0x20) >> 0xe & 1) == 0) {
      BVar5 = this[0x2fb6];
      *(ushort *)(lVar8 + uVar17 * 8) = uVar6;
      if (BVar5 != (Brep)0x0) {
        lVar8 = lVar8 + uVar17 * 8;
        lVar13 = *(long *)(this + 0x2f98) + (ulong)*(ushort *)(lVar8 + 2) * 0x18;
        *(short *)(lVar13 + 0x14) = *(short *)(lVar13 + 0x14) + -1;
        *(short *)(lVar8 + 2) = (short)uVar18;
        lVar8 = *(long *)(this + 0x2f98) + uVar18 * 0x18;
        *(short *)(lVar8 + 0x14) = *(short *)(lVar8 + 0x14) + 1;
      }
      if (this[0x2fb4] != (Brep)0x0) {
        computeBBox(this,uVar4 >> 2);
      }
    }
    lVar8 = *(long *)(this + 0x2f68);
    uVar4 = *(uint *)(lVar8 + uVar17 * 8 + 4);
  } while (uVar4 != uVar3 && uVar4 != 0xffffffff);
  uVar3 = param_1 - 2;
  if ((param_1 + 1 & 3) != 0) {
    uVar3 = param_1 + 1;
  }
  uVar18 = (ulong)uVar3;
  uVar3 = *(uint *)(lVar8 + uVar18 * 8 + 4);
  uVar4 = *(uint *)(lVar8 + uVar16 * 8 + 4);
  if (uVar2 == 0xffffffff) {
LAB_00b6a754:
    if (uVar3 != 0xffffffff) {
      *(uint *)(lVar8 + (ulong)uVar3 * 8 + 4) = uVar4;
    }
    if (uVar4 != 0xffffffff) {
      *(uint *)(lVar8 + (ulong)uVar4 * 8 + 4) = uVar3;
    }
    fixFirstEdge(this,*(ushort *)(lVar8 + uVar18 * 8));
    if (uVar2 == 0xffffffff) goto LAB_00b6a7f4;
    uVar3 = uVar2 - 2;
    lVar8 = *(long *)(this + 0x2f68);
    if ((uVar2 + 1 & 3) != 0) {
      uVar3 = uVar2 + 1;
    }
    uVar18 = (ulong)uVar3;
    uVar3 = uVar2 + 2;
    if ((uVar2 - 1 & 3) != 0) {
      uVar3 = uVar2 - 1;
    }
    uVar4 = *(uint *)(lVar8 + uVar18 * 8 + 4);
    uVar3 = *(uint *)(lVar8 + (ulong)uVar3 * 8 + 4);
    if (uVar4 != 0xffffffff) {
      *(uint *)(lVar8 + (ulong)uVar4 * 8 + 4) = uVar3;
    }
    if (uVar3 != 0xffffffff) {
      *(uint *)(lVar8 + (ulong)uVar3 * 8 + 4) = uVar4;
    }
LAB_00b6a7e4:
    puVar9 = (ushort *)(lVar8 + uVar18 * 8);
  }
  else {
    uVar7 = uVar2 - 2;
    if ((uVar2 + 1 & 3) != 0) {
      uVar7 = uVar2 + 1;
    }
    uVar1 = uVar2 + 2;
    if ((uVar2 - 1 & 3) != 0) {
      uVar1 = uVar2 - 1;
    }
    if (uVar4 != uVar7) {
      if (uVar3 != uVar1) goto LAB_00b6a754;
      uVar3 = *(uint *)(lVar8 + (ulong)uVar7 * 8 + 4);
      if (uVar4 != 0xffffffff) {
        *(uint *)(lVar8 + (ulong)uVar4 * 8 + 4) = uVar3;
      }
      if (uVar3 != 0xffffffff) {
        *(uint *)(lVar8 + (ulong)uVar3 * 8 + 4) = uVar4;
      }
      goto LAB_00b6a7e4;
    }
    uVar4 = *(uint *)(lVar8 + (ulong)uVar1 * 8 + 4);
    if (uVar3 != 0xffffffff) {
      *(uint *)(lVar8 + (ulong)uVar3 * 8 + 4) = uVar4;
    }
    if (uVar4 != 0xffffffff) {
      *(uint *)(lVar8 + (ulong)uVar4 * 8 + 4) = uVar3;
    }
    puVar9 = (ushort *)(lVar8 + uVar18 * 8);
    *(undefined4 *)(*(long *)(this + 0x2f50) + (ulong)uVar6 * 0xc + 4) =
         *(undefined4 *)(*(long *)(this + 0x2f50) + uVar12 * 0xc + 4);
  }
  fixFirstEdge(this,*puVar9);
LAB_00b6a7f4:
  fixFirstEdge(this,uVar6);
  lVar8 = *(long *)(this + 0x2f50);
  piVar10 = (int *)(lVar8 + (ulong)uVar6 * 0xc + 4);
  if (*piVar10 == -1) {
    *piVar10 = *(int *)(lVar8 + uVar12 * 0xc + 4);
    fixFirstEdge(this,uVar6);
    lVar8 = *(long *)(this + 0x2f50);
  }
  uVar11 = 1;
  if (uVar2 != 0xffffffff) {
    uVar11 = 2;
  }
  *(undefined4 *)(lVar8 + uVar12 * 0xc + 4) = 0xffffffff;
  return uVar11;
}


