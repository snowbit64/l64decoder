// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rgbToRGBE8
// Entry Point: 00a92258
// Size: 236 bytes
// Signature: undefined __cdecl rgbToRGBE8(float * param_1, uchar * param_2)


/* HDRUtil::rgbToRGBE8(float const*, unsigned char*) */

void HDRUtil::rgbToRGBE8(float *param_1,uchar *param_2)

{
  long lVar1;
  uchar uVar2;
  float fVar3;
  float fVar4;
  byte local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar3 = param_1[1];
  if (param_1[1] <= *param_1) {
    fVar3 = *param_1;
  }
  fVar4 = param_1[2];
  if (param_1[2] <= fVar3) {
    fVar4 = fVar3;
  }
  if (1e-32 <= fVar4) {
    fVar3 = frexpf(fVar4,(int *)&local_3c);
    local_3c = local_3c ^ 0x80;
    fVar4 = (fVar3 * 256.0) / fVar4;
    *param_2 = (uchar)(int)(*param_1 * fVar4);
    param_2[1] = (uchar)(int)(fVar4 * param_1[1]);
    uVar2 = (uchar)(int)(fVar4 * param_1[2]);
  }
  else {
    uVar2 = '\0';
    local_3c = 0;
    *(undefined2 *)param_2 = 0;
  }
  param_2[2] = uVar2;
  param_2[3] = local_3c;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


