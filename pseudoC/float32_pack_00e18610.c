// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _float32_pack
// Entry Point: 00e18610
// Size: 132 bytes
// Signature: undefined _float32_pack(void)


ulong _float32_pack(float param_1)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  
  uVar1 = 0xffffffff80000000;
  fVar3 = -param_1;
  if (0.0 <= param_1) {
    uVar1 = 0;
    fVar3 = param_1;
  }
  dVar4 = log((double)fVar3);
  lVar2 = (long)(dVar4 / 0.6931471805599453 + 0.001);
  dVar4 = ldexp((double)fVar3,0x14 - (int)lVar2);
  return lVar2 * 0x200000 + 0x60000000U | uVar1 | (long)(double)(long)dVar4;
}


