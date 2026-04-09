// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inSimplex
// Entry Point: 00f7449c
// Size: 172 bytes
// Signature: undefined __thiscall inSimplex(btVoronoiSimplexSolver * this, btVector3 * param_1)


/* btVoronoiSimplexSolver::inSimplex(btVector3 const&) */

bool __thiscall btVoronoiSimplexSolver::inSimplex(btVoronoiSimplexSolver *this,btVector3 *param_1)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = *(uint *)this;
  if ((int)uVar1 < 1) {
    bVar2 = false;
  }
  else {
    uVar3 = 0;
    pfVar4 = (float *)(this + 0xc);
    bVar2 = true;
    do {
      fVar5 = *(float *)param_1 - pfVar4[-2];
      fVar7 = *(float *)(param_1 + 4) - pfVar4[-1];
      fVar8 = *(float *)(param_1 + 8) - *pfVar4;
      uVar6 = NEON_fmadd(fVar7,fVar7,fVar5 * fVar5);
      fVar5 = (float)NEON_fmadd(fVar8,fVar8,uVar6);
      if (fVar5 <= *(float *)(this + 0x134)) break;
      uVar3 = uVar3 + 1;
      pfVar4 = pfVar4 + 4;
      bVar2 = uVar3 < uVar1;
    } while (uVar1 != uVar3);
  }
  if (((*(float *)(param_1 + 0xc) == *(float *)(this + 0x130)) &&
      (*(float *)(param_1 + 8) == *(float *)(this + 300))) &&
     (*(float *)(param_1 + 4) == *(float *)(this + 0x128))) {
    bVar2 = (bool)(*(float *)param_1 == *(float *)(this + 0x124) | bVar2);
  }
  return bVar2;
}


