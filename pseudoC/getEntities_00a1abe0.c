// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEntities
// Entry Point: 00a1abe0
// Size: 240 bytes
// Signature: undefined __thiscall getEntities(DecalCullingStructure * this, TopDownCullingBody * param_1, CullingEntity * * param_2, uint param_3)


/* DecalCullingStructure::getEntities(TopDownCullingBody const&,
   DecalCullingStructure::CullingEntity**, unsigned int) const */

ulong __thiscall
DecalCullingStructure::getEntities
          (DecalCullingStructure *this,TopDownCullingBody *param_1,CullingEntity **param_2,
          uint param_3)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar3 = *(uint *)(this + 0x10);
  if (uVar3 == 0) {
    return 0;
  }
  fVar10 = *(float *)(param_1 + 8);
  fVar11 = *(float *)(param_1 + 0xc);
  fVar12 = *(float *)(param_1 + 0x10);
  fVar13 = *(float *)(param_1 + 0x14);
  uVar4 = 0;
  uVar5 = 0;
  do {
    while( true ) {
      lVar7 = *(long *)this;
      uVar6 = (ulong)uVar5;
      lVar8 = lVar7 + uVar6 * 0x20;
      if ((((*(float *)(lVar8 + 0xc) <= fVar12) && (*(float *)(lVar8 + 0x10) <= fVar13)) &&
          (lVar9 = lVar7 + uVar6 * 0x20, fVar10 <= *(float *)(lVar9 + 0x14))) &&
         (fVar11 <= *(float *)(lVar9 + 0x18))) break;
      uVar5 = *(uint *)(lVar8 + 0x1c);
      if (uVar3 <= uVar5) {
        return uVar4;
      }
    }
    plVar2 = (long *)(lVar7 + uVar6 * 0x20);
    uVar6 = (ulong)*(ushort *)(plVar2 + 1);
    if (uVar6 != 0) {
      lVar8 = 0;
      do {
        lVar9 = *plVar2;
        lVar7 = lVar9 + lVar8;
        bVar1 = *(float *)(lVar7 + 8) <= fVar12;
        if (((bVar1 && *(float *)(lVar7 + 0xc) == fVar13 ||
             bVar1 && *(float *)(lVar7 + 0xc) < fVar13) && fVar10 <= *(float *)(lVar7 + 0x10)) &&
           (fVar11 <= *(float *)(lVar7 + 0x14))) {
          if ((uint)uVar4 < param_3) {
            param_2[uVar4] = *(CullingEntity **)(lVar9 + lVar8);
          }
          uVar4 = (ulong)((uint)uVar4 + 1);
        }
        lVar8 = lVar8 + 0x18;
      } while (uVar6 * 0x18 - lVar8 != 0);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < uVar3);
  return uVar4;
}


