// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: aabbInFrustumNonVirtual
// Entry Point: 00a1e4c8
// Size: 144 bytes
// Signature: undefined __thiscall aabbInFrustumNonVirtual(NPlaneFrustum * this, Vector3 * param_1, Vector3 * param_2)


/* NPlaneFrustum::aabbInFrustumNonVirtual(Vector3 const&, Vector3 const&) const */

byte __thiscall
NPlaneFrustum::aabbInFrustumNonVirtual(NPlaneFrustum *this,Vector3 *param_1,Vector3 *param_2)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  
  uVar1 = *(uint *)(this + 0x10);
  if (uVar1 == 0) {
    bVar2 = false;
  }
  else {
    uVar3 = 0;
    pfVar4 = (float *)(*(long *)(this + 8) + 8);
    bVar2 = true;
    do {
      uVar7 = NEON_fmadd(*(undefined4 *)param_1,pfVar4[-2],*(float *)(param_1 + 4) * pfVar4[-1]);
      uVar5 = NEON_fmadd(*(undefined4 *)param_2,ABS(pfVar4[-2]),
                         ABS(pfVar4[-1]) * *(float *)(param_2 + 4));
      fVar8 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),*pfVar4,uVar7);
      fVar6 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),ABS(*pfVar4),uVar5);
      if (fVar8 + pfVar4[1] + fVar6 <= 0.0) break;
      uVar3 = uVar3 + 1;
      pfVar4 = pfVar4 + 4;
      bVar2 = uVar3 < uVar1;
    } while (uVar1 != uVar3);
  }
  return ~bVar2 & 1;
}


