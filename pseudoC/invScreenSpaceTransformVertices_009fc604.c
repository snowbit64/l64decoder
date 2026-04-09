// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: invScreenSpaceTransformVertices
// Entry Point: 009fc604
// Size: 232 bytes
// Signature: undefined __thiscall invScreenSpaceTransformVertices(DeferredDebugRenderer * this, vector * param_1, uint param_2, Matrix4x4 * param_3)


/* DeferredDebugRenderer::invScreenSpaceTransformVertices(std::__ndk1::vector<float,
   std::__ndk1::allocator<float> >&, unsigned int, Matrix4x4 const&) const */

void __thiscall
DeferredDebugRenderer::invScreenSpaceTransformVertices
          (DeferredDebugRenderer *this,vector *param_1,uint param_2,Matrix4x4 *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  
  lVar2 = *(long *)param_1;
  uVar3 = (uint)((ulong)(*(long *)(param_1 + 8) - lVar2) >> 2);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      uVar6 = (ulong)uVar4;
      lVar5 = (ulong)(uVar4 + 1) * 4;
      uVar1 = uVar4 + 2;
      uVar4 = uVar4 + param_2;
      fVar7 = (float)NEON_fmadd(*(undefined4 *)(lVar2 + lVar5),0x40000000,0xbf800000);
      uVar8 = NEON_fmadd(*(undefined4 *)(lVar2 + uVar6 * 4),0x40000000,0xbf800000);
      uVar9 = NEON_fmadd(uVar8,*(undefined4 *)(param_3 + 0xc),fVar7 * *(float *)(param_3 + 0x1c));
      fVar10 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x2c),0x3c23d70a,uVar9);
      fVar11 = 1.0 / (*(float *)(param_3 + 0x3c) + fVar10);
      uVar9 = NEON_fmadd(uVar8,*(undefined4 *)param_3,fVar7 * *(float *)(param_3 + 0x10));
      uVar14 = NEON_fmadd(uVar8,*(undefined4 *)(param_3 + 4),fVar7 * *(float *)(param_3 + 0x14));
      uVar8 = NEON_fmadd(uVar8,*(undefined4 *)(param_3 + 8),fVar7 * *(float *)(param_3 + 0x18));
      fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x28),0x3c23d70a,uVar8);
      fVar13 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x20),0x3c23d70a,uVar9);
      fVar10 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 0x24),0x3c23d70a,uVar14);
      fVar15 = *(float *)(param_3 + 0x34);
      fVar12 = *(float *)(param_3 + 0x38);
      *(float *)(lVar2 + uVar6 * 4) = (*(float *)(param_3 + 0x30) + fVar13) * fVar11;
      *(float *)(lVar2 + lVar5) = (fVar15 + fVar10) * fVar11;
      *(float *)(lVar2 + (ulong)uVar1 * 4) = (fVar12 + fVar7) * fVar11;
    } while (uVar4 < uVar3);
  }
  return;
}


