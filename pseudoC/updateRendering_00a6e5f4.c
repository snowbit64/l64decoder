// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRendering
// Entry Point: 00a6e5f4
// Size: 208 bytes
// Signature: undefined __cdecl updateRendering(float param_1, SharedRenderArgs * param_2, RenderStats * param_3)


/* LocalGeometryLoadBalancer::updateRendering(float, SharedRenderArgs const*, RenderStats&) */

float LocalGeometryLoadBalancer::updateRendering
                (float param_1,SharedRenderArgs *param_2,RenderStats *param_3)

{
  float *pfVar1;
  long lVar2;
  LocalGeometryTransformGroup **ppLVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  float extraout_s0;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar12 = *(float *)(param_3 + 0x60);
  fVar13 = *(float *)(param_3 + 0x68);
  do {
    lVar2 = *(long *)param_2;
    if (*(long *)(param_2 + 8) - lVar2 == 0) {
      return param_1;
    }
    uVar7 = (*(long *)(param_2 + 8) - lVar2 >> 3) * -0x5555555555555555;
    if ((int)uVar7 == 0) {
      uVar4 = 0;
    }
    else {
      uVar6 = 0;
      pfVar8 = (float *)(lVar2 + 0xc);
      fVar9 = 1e+30;
      uVar5 = 0;
      do {
        pfVar1 = pfVar8 + -1;
        fVar10 = *pfVar8;
        pfVar8 = pfVar8 + 6;
        fVar11 = (float)NEON_fmadd(*pfVar1 - fVar12,*pfVar1 - fVar12,
                                   (fVar10 - fVar13) * (fVar10 - fVar13));
        fVar10 = fVar11;
        if (fVar9 <= fVar11) {
          fVar10 = fVar9;
        }
        uVar4 = (uint)uVar6;
        if (fVar9 <= fVar11) {
          uVar4 = uVar5;
        }
        uVar6 = uVar6 + 1;
        fVar9 = fVar10;
        uVar5 = uVar4;
      } while ((uVar7 & 0xffffffff) != uVar6);
    }
    ppLVar3 = (LocalGeometryTransformGroup **)(lVar2 + (ulong)uVar4 * 0x18);
    uVar7 = LocalGeometryTransformGroup::loadCell_loadBalancer
                      (*ppLVar3,*(short *)(ppLVar3 + 2),*(short *)((long)ppLVar3 + 0x12),
                       *(IRenderDevice **)param_3);
    param_1 = extraout_s0;
  } while ((uVar7 & 1) == 0);
  return extraout_s0;
}


