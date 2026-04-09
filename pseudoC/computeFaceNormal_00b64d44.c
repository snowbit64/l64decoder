// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeFaceNormal
// Entry Point: 00b64d44
// Size: 168 bytes
// Signature: undefined __thiscall computeFaceNormal(Brep * this, uint param_1, Vector3 * param_2)


/* Brep::computeFaceNormal(unsigned int, Vector3&) const */

void __thiscall Brep::computeFaceNormal(Brep *this,uint param_1,Vector3 *param_2)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar5 = *(long *)(this + 0x2f50);
  lVar6 = *(long *)(this + 0x2ef0);
  lVar1 = *(long *)(this + 0x2f68) + (ulong)param_1 * 0x20;
  pfVar2 = (float *)(lVar6 + (ulong)*(ushort *)(lVar5 + (ulong)*(ushort *)(lVar1 + 0x10) * 0xc) *
                             0x10);
  pfVar3 = (float *)(lVar6 + (ulong)*(ushort *)(lVar5 + (ulong)*(ushort *)(lVar1 + 8) * 0xc) * 0x10)
  ;
  pfVar4 = (float *)(lVar6 + (ulong)*(ushort *)(lVar5 + (ulong)*(ushort *)(lVar1 + 0x18) * 0xc) *
                             0x10);
  fVar11 = pfVar2[2] - pfVar3[2];
  fVar9 = pfVar2[1] - pfVar3[1];
  fVar7 = *pfVar2 - *pfVar3;
  fVar15 = pfVar4[1] - pfVar3[1];
  fVar13 = pfVar4[2] - pfVar3[2];
  fVar14 = *pfVar4 - *pfVar3;
  uVar10 = NEON_fmadd(fVar9,fVar13,fVar15 * -fVar11);
  uVar12 = NEON_fmadd(fVar11,fVar14,fVar13 * -fVar7);
  uVar8 = NEON_fmadd(fVar7,fVar15,fVar14 * -fVar9);
  *(undefined4 *)param_2 = uVar10;
  *(undefined4 *)(param_2 + 4) = uVar12;
  *(undefined4 *)(param_2 + 8) = uVar8;
  return;
}


