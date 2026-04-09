// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readValue
// Entry Point: 0078957c
// Size: 340 bytes
// Signature: undefined __thiscall readValue(DensityMapModifier * this, uint param_1, uint param_2)


/* DensityMapModifier::readValue(unsigned int, unsigned int) */

uint __thiscall DensityMapModifier::readValue(DensityMapModifier *this,uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  code **ppcVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  
  puVar9 = *(uint **)(this + 0x10);
  if (puVar9 == (uint *)0x0) {
    lVar8 = **(long **)(this + 0x18);
    uVar3 = (param_1 + *(int *)(this + 0x24) * param_2) * *(uint *)(this + 0x2c);
    lVar7 = *(long *)(lVar8 + (ulong)(uVar3 >> 0x13) * 8);
    uVar11 = (ulong)(uVar3 >> 3) & 0xffff;
    if ((uint)uVar11 < 0xfffd) {
      uVar6 = *(uint *)(lVar7 + uVar11);
    }
    else {
      uVar6 = (uVar3 >> 3) + 1;
      uVar2 = (uVar3 >> 3) + 2;
      uVar6 = (uint)CONCAT12(*(undefined *)
                              (*(long *)(lVar8 + (ulong)(uVar2 >> 0x10) * 8) +
                              ((ulong)uVar2 & 0xffff)),
                             CONCAT11(*(undefined *)
                                       (*(long *)(lVar8 + (ulong)(uVar6 >> 0x10) * 8) +
                                       ((ulong)uVar6 & 0xffff)),*(undefined *)(lVar7 + uVar11)));
    }
    uVar3 = uVar6 >> (ulong)(uVar3 & 7) &
            (-1 << (ulong)(*(uint *)(this + 0x2c) & 0x1f) ^ 0xffffffffU) & 0xffff;
  }
  else {
    uVar6 = param_1 & 0x1f | (param_2 & 0x1f) << 5;
    uVar2 = (((param_2 >> 5) << (ulong)(*puVar9 & 0x1f)) + (param_1 >> 5)) * puVar9[0xd];
    ppcVar5 = *(code ***)(*(long *)(puVar9 + 10) + (ulong)uVar2 * 8);
    uVar3 = (**ppcVar5)(ppcVar5,uVar6,0,puVar9[0xf]);
    if (1 < puVar9[0xd]) {
      puVar10 = puVar9 + 0x11;
      uVar11 = 1;
      do {
        ppcVar5 = *(code ***)(*(long *)(puVar9 + 10) + (ulong)(uVar2 + (int)uVar11) * 8);
        iVar4 = (**ppcVar5)(ppcVar5,uVar6,0,*puVar10);
        puVar1 = puVar10 + -1;
        uVar11 = uVar11 + 1;
        puVar10 = puVar10 + 2;
        uVar3 = iVar4 << (ulong)(*puVar1 & 0x1f) | uVar3;
      } while (uVar11 < puVar9[0xd]);
    }
  }
  return uVar3;
}


