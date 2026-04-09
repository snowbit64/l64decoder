// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: remap
// Entry Point: 009e25ec
// Size: 180 bytes
// Signature: undefined __thiscall remap(ProceduralPlacementRemapMask * this, float param_1)


/* ProceduralPlacementRemapMask::remap(float) */

undefined  [16] __thiscall
ProceduralPlacementRemapMask::remap(ProceduralPlacementRemapMask *this,float param_1)

{
  long lVar1;
  float *pfVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 in_register_00005004;
  undefined8 in_register_00005008;
  undefined auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_1 <= 1.0) {
    if (0.0 <= param_1) {
      lVar1 = *(long *)(this + 200);
      if (8 < (ulong)(*(long *)(this + 0xd0) - lVar1)) {
        uVar3 = 1;
        do {
          fVar6 = *(float *)(lVar1 + uVar3 * 8);
          if (param_1 <= fVar6) {
            pfVar2 = (float *)(lVar1 + (ulong)((int)uVar3 - 1) * 8);
            fVar7 = *pfVar2;
            fVar8 = pfVar2[1];
            uVar4 = NEON_fmadd((param_1 - fVar7) / (fVar6 - fVar7),
                               *(float *)(lVar1 + uVar3 * 8 + 4) - fVar8,fVar8);
            return ZEXT416(uVar4);
          }
          uVar3 = (ulong)((int)uVar3 + 1);
        } while (uVar3 < (ulong)(*(long *)(this + 0xd0) - lVar1 >> 3));
      }
      auVar5._4_4_ = in_register_00005004;
      auVar5._0_4_ = param_1;
      auVar5._8_8_ = in_register_00005008;
      return auVar5;
    }
    pfVar2 = *(float **)(this + 200);
    fVar8 = pfVar2[1];
    fVar6 = pfVar2[2];
    fVar7 = *pfVar2;
    fVar9 = pfVar2[3];
  }
  else {
    lVar1 = *(long *)(this + 0xd0);
    fVar8 = *(float *)(lVar1 + -0xc);
    fVar6 = *(float *)(lVar1 + -8);
    fVar7 = *(float *)(lVar1 + -0x10);
    fVar9 = *(float *)(lVar1 + -4);
  }
  uVar4 = NEON_fmadd((param_1 - fVar7) / (fVar6 - fVar7),fVar9 - fVar8,fVar8);
  return ZEXT416(uVar4);
}


