// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateParameters
// Entry Point: 008b8774
// Size: 508 bytes
// Signature: undefined calculateParameters(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BiquadResonantFilter::calculateParameters() */

void BiquadResonantFilter::calculateParameters(void)

{
  undefined8 *in_x0;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_8;
  float fStack_4;
  
  *in_x0 = 0;
  in_x0[1] = 0;
  *(undefined4 *)(in_x0 + 2) = 0;
  sincosf((*(float *)((long)in_x0 + 0x2c) * 6.283185) / 44100.0,&fStack_4,&local_8);
  fVar2 = 0.0;
  fVar6 = 0.0;
  fVar3 = 0.0;
  if (5 < *(uint *)(in_x0 + 5)) {
    fVar1 = 0.0;
    fVar5 = 0.0;
    fVar8 = 0.0;
    goto LAB_008b8940;
  }
  fVar1 = *(float *)((long)in_x0 + 0x34);
  fVar8 = fStack_4 / (fVar1 + fVar1);
  switch(*(uint *)(in_x0 + 5)) {
  case 0:
    fVar8 = 0.0;
    fVar1 = 0.0;
    fVar5 = 0.0;
    *(undefined *)((long)in_x0 + 0x24) = 0;
    goto LAB_008b8940;
  case 1:
    uVar4 = NEON_fmov(0x3f800000,4);
    fVar3 = 1.0 - local_8;
    fVar6 = (float)((ulong)uVar4 >> 0x20);
    fVar1 = fVar3;
    break;
  case 2:
    uVar4 = NEON_fmov(0x3f800000,4);
    fVar3 = -(local_8 + 1.0);
    fVar6 = (float)((ulong)uVar4 >> 0x20);
    fVar1 = local_8 + 1.0;
    break;
  case 3:
    fVar7 = fVar1 * fVar8;
    fVar1 = -(fVar1 * fVar8);
    uVar4 = NEON_fmov(0x3f800000,4);
    fVar6 = (float)((ulong)uVar4 >> 0x20) - fVar8;
    goto LAB_008b893c;
  case 4:
    uVar4 = NEON_fmov(0x3f800000,4);
    fVar2 = local_8 * -2.0;
    fVar6 = (float)((ulong)uVar4 >> 0x20) - fVar8;
    fVar1 = -fVar8;
    fVar5 = fVar8 + 1.0;
    goto LAB_008b8940;
  case 5:
    fVar2 = powf(10.0,*(float *)(in_x0 + 6) * 0.025);
    uVar4 = NEON_fmov(0x3f800000,4);
    fVar7 = (float)NEON_fmadd(fVar8,fVar2,0x3f800000);
    fVar1 = (float)NEON_fmsub(fVar8,fVar2,0x3f800000);
    fVar3 = local_8 * -2.0;
    fVar6 = (float)((ulong)uVar4 >> 0x20) - fVar8 / fVar2;
    fVar8 = fVar8 / fVar2;
LAB_008b893c:
    fVar2 = local_8 * -2.0;
    fVar5 = fVar8 + 1.0;
    fVar8 = fVar7;
    goto LAB_008b8940;
  }
  fVar6 = fVar6 - fVar8;
  fVar1 = fVar1 * 0.5;
  fVar2 = local_8 * -2.0;
  fVar5 = fVar8 + 1.0;
  fVar8 = fVar1;
LAB_008b8940:
  *(float *)(in_x0 + 1) = fVar8 / fVar5;
  *(float *)((long)in_x0 + 0xc) = fVar3 / fVar5;
  *(float *)(in_x0 + 2) = fVar1 / fVar5;
  *in_x0 = CONCAT44(fVar6 / fVar5,fVar2 / fVar5);
  return;
}


