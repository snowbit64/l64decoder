// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _vp_ampmax_decay
// Entry Point: 00e102a0
// Size: 72 bytes
// Signature: undefined _vp_ampmax_decay(void)


float _vp_ampmax_decay(undefined4 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = *(long *)(*(long *)(param_2 + 8) + 0x30);
  uVar1 = *(ulong *)(lVar2 + *(long *)(param_2 + 0x40) * 8);
  if ((long)uVar1 < 0) {
    uVar1 = uVar1 + 1;
  }
  fVar3 = (float)NEON_fmadd((float)(int)(uVar1 >> 1) / (float)*(long *)(*(long *)(param_2 + 8) + 8),
                            *(undefined4 *)(lVar2 + 0x1394),param_1);
  if (fVar3 <= -9999.0) {
    fVar3 = -9999.0;
  }
  return fVar3;
}


