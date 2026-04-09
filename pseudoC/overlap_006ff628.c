// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlap
// Entry Point: 006ff628
// Size: 248 bytes
// Signature: undefined __thiscall overlap(AnimalHusbandry * this, Vector3 * param_1, float param_2, uint param_3)


/* AnimalHusbandry::overlap(Vector3 const&, float, unsigned int) */

bool __thiscall
AnimalHusbandry::overlap(AnimalHusbandry *this,Vector3 *param_1,float param_2,uint param_3)

{
  float *pfVar1;
  bool bVar2;
  ulong uVar3;
  float *pfVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar9 = param_2 * param_2;
  uVar3 = (ulong)*(uint *)(this + 0x5c);
  fVar7 = *(float *)param_1;
  fVar8 = *(float *)(param_1 + 8);
  if (*(uint *)(this + 0x5c) != 0) {
    plVar5 = (long *)(this + 0x1f568);
    do {
      lVar6 = *plVar5;
      if (*(uint *)(lVar6 + 0x1a0) != param_3) {
        fVar10 = *(float *)(lVar6 + 0x10) - fVar8;
        fVar12 = *(float *)(lVar6 + 8) - fVar7;
        fVar11 = (float)NEON_fmadd(*(undefined4 *)
                                    (this + (ulong)*(uint *)(lVar6 + 0x19c) * 0x3ea0 + 0x70),
                                   *(undefined4 *)
                                    (this + (ulong)*(uint *)(lVar6 + 0x19c) * 0x3ea0 + 0x70),fVar9);
        fVar10 = (float)NEON_fmadd(fVar12,fVar12,fVar10 * fVar10);
        if ((fVar10 < fVar11) ||
           (fVar10 = *(float *)(lVar6 + 0x28) - fVar8, fVar12 = *(float *)(lVar6 + 0x20) - fVar7,
           fVar10 = (float)NEON_fmadd(fVar12,fVar12,fVar10 * fVar10), fVar10 < fVar11)) {
          return true;
        }
      }
      plVar5 = plVar5 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar3 = (ulong)*(uint *)(this + 0x1f7b0);
  if (*(uint *)(this + 0x1f7b0) != 0) {
    pfVar4 = (float *)(this + 0x1f7bc);
    do {
      uVar3 = uVar3 - 1;
      fVar10 = *pfVar4;
      pfVar1 = pfVar4 + -2;
      pfVar4 = pfVar4 + 9;
      fVar10 = (float)NEON_fmadd(*pfVar1 - fVar7,*pfVar1 - fVar7,(fVar10 - fVar8) * (fVar10 - fVar8)
                                );
      bVar2 = fVar10 < fVar9 + fVar9;
    } while (!bVar2 && uVar3 != 0);
    return bVar2;
  }
  return false;
}


