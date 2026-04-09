// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeMipmapDifferenceToSatisfyIdealResolution
// Entry Point: 0096b258
// Size: 232 bytes
// Signature: undefined __cdecl computeMipmapDifferenceToSatisfyIdealResolution(StreamingDesc * param_1, TextureUsage * param_2, float param_3)


/* TextureStreamingManager::computeMipmapDifferenceToSatisfyIdealResolution(TextureStreamingManager::StreamingDesc
   const&, TextureUsage const&, float) */

int TextureStreamingManager::computeMipmapDifferenceToSatisfyIdealResolution
              (StreamingDesc *param_1,TextureUsage *param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = 0.0;
  fVar9 = *(float *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x38) >>
          (ulong)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x98) & 0x1f);
  uVar8 = NEON_cnt((ulong)uVar2,1);
  uVar7 = NEON_uaddlv(uVar8,1);
  if ((int)CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7) == 1) {
    bVar4 = (uVar2 & 0xffff0000) != 0;
    uVar1 = uVar2 >> 0x10;
    if (!bVar4) {
      uVar1 = uVar2;
    }
    uVar5 = (uint)bVar4;
    uVar2 = uVar5 << 4 | 8;
    uVar3 = uVar1 >> 8;
    if (uVar1 < 0x100) {
      uVar2 = uVar5 << 4;
      uVar3 = uVar1;
    }
    uVar1 = uVar2 | 4;
    uVar5 = uVar3 >> 4;
    if (uVar3 < 0x10) {
      uVar1 = uVar2;
      uVar5 = uVar3;
    }
    uVar2 = uVar1 | 2;
    uVar3 = uVar5 >> 2;
    if (uVar5 < 4) {
      uVar2 = uVar1;
      uVar3 = uVar5;
    }
    fVar10 = (float)(ulong)((uVar3 + uVar2) - 1);
  }
  fVar6 = (float)NEON_fmin(*(float *)(param_2 + 0xc) * *(float *)(param_2 + 0xc),0x4d800000);
  fVar6 = log2f(fVar6);
  return (int)(((fVar6 - fVar9) * 0.5 - fVar10) + param_3);
}


