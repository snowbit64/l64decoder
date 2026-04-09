// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: blendSH
// Entry Point: 00a10164
// Size: 284 bytes
// Signature: undefined blendSH(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EnvMapBlender::blendSH() */

void EnvMapBlender::blendSH(void)

{
  long in_x0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(in_x0 + 0x500));
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(in_x0 + 0x510));
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(in_x0 + 0x520));
  fVar1 = (float)*(undefined8 *)(in_x0 + 0x408);
  fVar2 = (float)*(undefined8 *)(in_x0 + 0x40c);
  fVar4 = (float)*(undefined8 *)(in_x0 + 0x410);
  fVar3 = (float)*(undefined8 *)(in_x0 + 0x414);
  *(ulong *)(in_x0 + 0x508) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x4d0) >> 0x20) * fVar3 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x4a0) >> 0x20) * fVar4 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x470) >> 0x20) * fVar2 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x440) >> 0x20) * fVar1 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x508) >> 0x20),
                (float)*(undefined8 *)(in_x0 + 0x4d0) * fVar3 +
                (float)*(undefined8 *)(in_x0 + 0x4a0) * fVar4 +
                (float)*(undefined8 *)(in_x0 + 0x470) * fVar2 +
                (float)*(undefined8 *)(in_x0 + 0x440) * fVar1 +
                (float)*(undefined8 *)(in_x0 + 0x508));
  *(ulong *)(in_x0 + 0x500) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x4c8) >> 0x20) * fVar3 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x498) >> 0x20) * fVar4 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x468) >> 0x20) * fVar2 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x438) >> 0x20) * fVar1 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x500) >> 0x20),
                (float)*(undefined8 *)(in_x0 + 0x4c8) * fVar3 +
                (float)*(undefined8 *)(in_x0 + 0x498) * fVar4 +
                (float)*(undefined8 *)(in_x0 + 0x468) * fVar2 +
                (float)*(undefined8 *)(in_x0 + 0x438) * fVar1 +
                (float)*(undefined8 *)(in_x0 + 0x500));
  *(ulong *)(in_x0 + 0x518) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x4e0) >> 0x20) * fVar3 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x4b0) >> 0x20) * fVar4 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x480) >> 0x20) * fVar2 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x450) >> 0x20) * fVar1 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x518) >> 0x20),
                (float)*(undefined8 *)(in_x0 + 0x4e0) * fVar3 +
                (float)*(undefined8 *)(in_x0 + 0x4b0) * fVar4 +
                (float)*(undefined8 *)(in_x0 + 0x480) * fVar2 +
                (float)*(undefined8 *)(in_x0 + 0x450) * fVar1 +
                (float)*(undefined8 *)(in_x0 + 0x518));
  *(ulong *)(in_x0 + 0x510) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x4d8) >> 0x20) * fVar3 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x4a8) >> 0x20) * fVar4 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x478) >> 0x20) * fVar2 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x448) >> 0x20) * fVar1 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x510) >> 0x20),
                (float)*(undefined8 *)(in_x0 + 0x4d8) * fVar3 +
                (float)*(undefined8 *)(in_x0 + 0x4a8) * fVar4 +
                (float)*(undefined8 *)(in_x0 + 0x478) * fVar2 +
                (float)*(undefined8 *)(in_x0 + 0x448) * fVar1 +
                (float)*(undefined8 *)(in_x0 + 0x510));
  *(ulong *)(in_x0 + 0x528) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x4f0) >> 0x20) * fVar3 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x4c0) >> 0x20) * fVar4 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x490) >> 0x20) * fVar2 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x460) >> 0x20) * fVar1 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x528) >> 0x20),
                (float)*(undefined8 *)(in_x0 + 0x4f0) * fVar3 +
                (float)*(undefined8 *)(in_x0 + 0x4c0) * fVar4 +
                (float)*(undefined8 *)(in_x0 + 0x490) * fVar2 +
                (float)*(undefined8 *)(in_x0 + 0x460) * fVar1 +
                (float)*(undefined8 *)(in_x0 + 0x528));
  *(ulong *)(in_x0 + 0x520) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x4e8) >> 0x20) * fVar3 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x4b8) >> 0x20) * fVar4 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x488) >> 0x20) * fVar2 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x458) >> 0x20) * fVar1 +
                (float)((ulong)*(undefined8 *)(in_x0 + 0x520) >> 0x20),
                (float)*(undefined8 *)(in_x0 + 0x4e8) * fVar3 +
                (float)*(undefined8 *)(in_x0 + 0x4b8) * fVar4 +
                (float)*(undefined8 *)(in_x0 + 0x488) * fVar2 +
                (float)*(undefined8 *)(in_x0 + 0x458) * fVar1 +
                (float)*(undefined8 *)(in_x0 + 0x520));
  return;
}


