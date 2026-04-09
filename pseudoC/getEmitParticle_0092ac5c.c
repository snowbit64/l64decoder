// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEmitParticle
// Entry Point: 0092ac5c
// Size: 280 bytes
// Signature: undefined __thiscall getEmitParticle(DestructionEmitterShape * this, Vector3 * param_1, Vector3 * param_2)


/* DestructionEmitterShape::getEmitParticle(Vector3&, Vector3&) */

bool __thiscall
DestructionEmitterShape::getEmitParticle
          (DestructionEmitterShape *this,Vector3 *param_1,Vector3 *param_2)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  
  iVar1 = (int)((ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18)) >> 2) * -0x3b13b13b;
  if (iVar1 != 0) {
    fVar4 = (float)MathUtil::getRandom();
    lVar3 = *(long *)(this + 0x18);
    fVar5 = (float)MathUtil::getRandom();
    fVar5 = SQRT(fVar5);
    fVar6 = (float)MathUtil::getRandom();
    pfVar2 = (float *)(lVar3 + (ulong)(uint)(int)(fVar4 * (float)(ulong)(iVar1 - 1)) * 0x34);
    fVar12 = 1.0 - fVar5;
    fVar4 = fVar5 * fVar6;
    fVar7 = *pfVar2;
    fVar5 = fVar5 * (1.0 - fVar6);
    *(float *)param_1 = fVar7;
    fVar7 = fVar7 * fVar12;
    fVar6 = pfVar2[1];
    *(float *)(param_1 + 4) = fVar6;
    fVar6 = fVar12 * fVar6;
    fVar13 = pfVar2[2];
    *(float *)param_1 = fVar7;
    *(float *)(param_1 + 4) = fVar6;
    *(float *)(param_1 + 8) = fVar12 * fVar13;
    uVar8 = NEON_fmadd(pfVar2[3],fVar5,fVar7);
    uVar11 = NEON_fmadd(pfVar2[4],fVar5,fVar6);
    uVar10 = NEON_fmadd(pfVar2[5],fVar5,fVar12 * fVar13);
    *(undefined4 *)param_1 = uVar8;
    *(undefined4 *)(param_1 + 4) = uVar11;
    *(undefined4 *)(param_1 + 8) = uVar10;
    uVar9 = NEON_fmadd(pfVar2[6],fVar4,uVar8);
    uVar11 = NEON_fmadd(pfVar2[7],fVar4,uVar11);
    uVar8 = NEON_fmadd(pfVar2[8],fVar4,uVar10);
    *(undefined4 *)param_1 = uVar9;
    *(undefined4 *)(param_1 + 4) = uVar11;
    *(undefined4 *)(param_1 + 8) = uVar8;
    *(float *)param_2 = pfVar2[9];
    *(float *)(param_2 + 4) = pfVar2[10];
    *(float *)(param_2 + 8) = pfVar2[0xb];
  }
  return iVar1 != 0;
}


