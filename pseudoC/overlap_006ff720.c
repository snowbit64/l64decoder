// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlap
// Entry Point: 006ff720
// Size: 252 bytes
// Signature: undefined __thiscall overlap(AnimalHusbandry * this, Vector3 * param_1, float param_2, uint param_3)


/* non-virtual thunk to AnimalHusbandry::overlap(Vector3 const&, float, unsigned int) */

bool __thiscall
AnimalHusbandry::overlap(AnimalHusbandry *this,Vector3 *param_1,float param_2,uint param_3)

{
  float *pfVar1;
  bool bVar2;
  float *pfVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar9 = param_2 * param_2;
  uVar4 = (ulong)*(uint *)(this + 0x2c);
  fVar7 = *(float *)param_1;
  fVar8 = *(float *)(param_1 + 8);
  if (*(uint *)(this + 0x2c) != 0) {
    plVar5 = (long *)(this + 0x1f538);
    do {
      lVar6 = *plVar5;
      if (*(uint *)(lVar6 + 0x1a0) != param_3) {
        fVar10 = *(float *)(lVar6 + 0x10) - fVar8;
        fVar12 = *(float *)(lVar6 + 8) - fVar7;
        fVar11 = (float)NEON_fmadd(*(undefined4 *)
                                    (this + (ulong)*(uint *)(lVar6 + 0x19c) * 0x3ea0 + 0x40),
                                   *(undefined4 *)
                                    (this + (ulong)*(uint *)(lVar6 + 0x19c) * 0x3ea0 + 0x40),fVar9);
        fVar10 = (float)NEON_fmadd(fVar12,fVar12,fVar10 * fVar10);
        if ((fVar10 < fVar11) ||
           (fVar10 = *(float *)(lVar6 + 0x28) - fVar8, fVar12 = *(float *)(lVar6 + 0x20) - fVar7,
           fVar10 = (float)NEON_fmadd(fVar12,fVar12,fVar10 * fVar10), fVar10 < fVar11)) {
          return true;
        }
      }
      uVar4 = uVar4 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar4 != 0);
  }
  uVar4 = (ulong)*(uint *)(this + 0x1f780);
  if (*(uint *)(this + 0x1f780) != 0) {
    pfVar3 = (float *)(this + 0x1f78c);
    do {
      uVar4 = uVar4 - 1;
      fVar10 = *pfVar3;
      pfVar1 = pfVar3 + -2;
      pfVar3 = pfVar3 + 9;
      fVar10 = (float)NEON_fmadd(*pfVar1 - fVar7,*pfVar1 - fVar7,(fVar10 - fVar8) * (fVar10 - fVar8)
                                );
      bVar2 = fVar10 < fVar9 + fVar9;
    } while (!bVar2 && uVar4 != 0);
    return bVar2;
  }
  return false;
}


