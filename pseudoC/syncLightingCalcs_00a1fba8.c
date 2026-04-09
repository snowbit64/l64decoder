// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: syncLightingCalcs
// Entry Point: 00a1fba8
// Size: 60 bytes
// Signature: undefined syncLightingCalcs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* RenderQueue::syncLightingCalcs() */

void RenderQueue::syncLightingCalcs(void)

{
  long lVar1;
  long *in_x0;
  
  if ((*(byte *)(in_x0[5] + 0x3a8) & 1) == 0) {
    return;
  }
  lVar1 = *in_x0;
  LightListRasterizer::endFillGrid
            ((LightListRasterizer *)in_x0[4],*(IRenderDevice **)in_x0[1],
             (Vector3 *)(in_x0[5] + 0x354),*(float *)(lVar1 + 0x528),*(float *)(lVar1 + 0x524),
             *(float *)(lVar1 + 0x520),*(float *)(lVar1 + 0x51c),1.0,*(float *)(lVar1 + 0x530));
  return;
}


