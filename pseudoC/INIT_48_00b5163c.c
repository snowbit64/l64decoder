// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_48
// Entry Point: 00b5163c
// Size: 516 bytes
// Signature: undefined _INIT_48(void)


void _INIT_48(void)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float __x;
  float fVar5;
  float fVar6;
  
  uVar2 = 0;
  do {
    fVar5 = (float)(uVar2 & 0xffffffff) / 255.0;
    fVar6 = (float)(ulong)((int)uVar2 + 1) / 255.0;
    fVar3 = powf((fVar5 + 0.055) / 1.055,2.4);
    fVar4 = powf((fVar6 + 0.055) / 1.055,2.4);
    uVar1 = uVar2 + 2;
    if (fVar5 <= 0.04045) {
      fVar3 = fVar5 / 12.92;
    }
    if (fVar6 <= 0.04045) {
      fVar4 = fVar6 / 12.92;
    }
    (&ColorUtil::s_srgbToLinearTable)[uVar2] = (short)(int)(fVar3 * 65535.0);
    (&DAT_0211c5f2)[uVar2] = (short)(int)(fVar4 * 65535.0);
    uVar2 = uVar1;
  } while (uVar1 != 0x100);
  uVar2 = 0;
  do {
    fVar5 = (float)(uVar2 & 0xffffffff) / 2047.0;
    __x = (float)(ulong)((int)uVar2 + 1) / 2047.0;
    fVar4 = powf(fVar5,0.4166667);
    fVar6 = powf(__x,0.4166667);
    uVar1 = uVar2 + 2;
    fVar3 = (float)NEON_fmadd(fVar4,0x3f870a3d,0xbd6147ae);
    fVar4 = (float)NEON_fmadd(fVar6,0x3f870a3d,0xbd6147ae);
    if (fVar5 <= 0.0031308) {
      fVar3 = fVar5 * 12.92;
    }
    if (__x <= 0.0031308) {
      fVar4 = __x * 12.92;
    }
    (&ColorUtil::s_linearToSrgbTable)[uVar2] = (char)(int)(fVar3 * 255.0);
    (&DAT_0211c7f1)[uVar2] = (char)(int)(fVar4 * 255.0);
    uVar2 = uVar1;
  } while (uVar1 != 0x800);
  return;
}


