// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: interpolateReverbSettings
// Entry Point: 00b09d58
// Size: 300 bytes
// Signature: undefined __cdecl interpolateReverbSettings(float param_1, AudioReverbDesc * param_2, AudioReverbDesc * param_3, AudioReverbDesc * param_4)


/* AudioUtil::interpolateReverbSettings(float, AudioReverbDesc const&, AudioReverbDesc const&,
   AudioReverbDesc&) */

void AudioUtil::interpolateReverbSettings
               (float param_1,AudioReverbDesc *param_2,AudioReverbDesc *param_3,
               AudioReverbDesc *param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(param_3 + 8);
  uVar3 = *(undefined8 *)param_3;
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)param_2;
  fVar1 = 1.0 - param_1;
  *(undefined4 *)(param_4 + 0x68) = 1;
  *(ulong *)(param_4 + 8) =
       CONCAT44((float)((ulong)uVar4 >> 0x20) * param_1 + (float)((ulong)uVar6 >> 0x20) * fVar1,
                (float)uVar4 * param_1 + (float)uVar6 * fVar1);
  *(ulong *)param_4 =
       CONCAT44((float)((ulong)uVar3 >> 0x20) * param_1 + (float)((ulong)uVar5 >> 0x20) * fVar1,
                (float)uVar3 * param_1 + (float)uVar5 * fVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(ulong *)(param_4 + 0x18) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20) * param_1 +
                (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) * fVar1,
                (float)*(undefined8 *)(param_3 + 0x18) * param_1 +
                (float)*(undefined8 *)(param_2 + 0x18) * fVar1);
  *(ulong *)(param_4 + 0x10) =
       CONCAT44((float)((ulong)uVar3 >> 0x20) * param_1 + (float)((ulong)uVar4 >> 0x20) * fVar1,
                (float)uVar3 * param_1 + (float)uVar4 * fVar1);
  *(ulong *)(param_4 + 0x20) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20) * param_1 +
                (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) * fVar1,
                (float)*(undefined8 *)(param_3 + 0x20) * param_1 +
                (float)*(undefined8 *)(param_2 + 0x20) * fVar1);
  uVar2 = NEON_fmadd(*(undefined4 *)(param_2 + 0x28),fVar1,*(float *)(param_3 + 0x28) * param_1);
  *(undefined4 *)(param_4 + 0x28) = uVar2;
  uVar2 = NEON_fmadd(*(undefined4 *)(param_2 + 0x2c),fVar1,*(float *)(param_3 + 0x2c) * param_1);
  *(undefined4 *)(param_4 + 0x2c) = uVar2;
  uVar2 = NEON_fmadd(*(undefined4 *)(param_2 + 0x30),fVar1,*(float *)(param_3 + 0x30) * param_1);
  *(undefined4 *)(param_4 + 0x30) = uVar2;
  *(ulong *)(param_4 + 0x34) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x34) >> 0x20) * param_1 +
                (float)((ulong)*(undefined8 *)(param_2 + 0x34) >> 0x20) * fVar1,
                (float)*(undefined8 *)(param_3 + 0x34) * param_1 +
                (float)*(undefined8 *)(param_2 + 0x34) * fVar1);
  uVar2 = NEON_fmadd(*(undefined4 *)(param_2 + 0x3c),fVar1,*(float *)(param_3 + 0x3c) * param_1);
  *(undefined4 *)(param_4 + 0x3c) = uVar2;
  uVar2 = NEON_fmadd(*(undefined4 *)(param_2 + 0x40),fVar1,*(float *)(param_3 + 0x40) * param_1);
  *(undefined4 *)(param_4 + 0x40) = uVar2;
  uVar2 = NEON_fmadd(*(undefined4 *)(param_2 + 0x44),fVar1,*(float *)(param_3 + 0x44) * param_1);
  *(undefined4 *)(param_4 + 0x44) = uVar2;
  uVar2 = NEON_fmadd(*(undefined4 *)(param_2 + 0x58),fVar1,*(float *)(param_3 + 0x58) * param_1);
  *(undefined4 *)(param_4 + 0x58) = uVar2;
  uVar3 = *(undefined8 *)(param_3 + 0x48);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  *(ulong *)(param_4 + 0x50) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20) * param_1 +
                (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20) * fVar1,
                (float)*(undefined8 *)(param_3 + 0x50) * param_1 +
                (float)*(undefined8 *)(param_2 + 0x50) * fVar1);
  *(ulong *)(param_4 + 0x48) =
       CONCAT44((float)((ulong)uVar3 >> 0x20) * param_1 + (float)((ulong)uVar4 >> 0x20) * fVar1,
                (float)uVar3 * param_1 + (float)uVar4 * fVar1);
  *(ulong *)(param_4 + 0x5c) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x5c) >> 0x20) * param_1 +
                (float)((ulong)*(undefined8 *)(param_2 + 0x5c) >> 0x20) * fVar1,
                (float)*(undefined8 *)(param_3 + 0x5c) * param_1 +
                (float)*(undefined8 *)(param_2 + 0x5c) * fVar1);
  uVar2 = NEON_fmadd(*(undefined4 *)(param_2 + 100),fVar1,*(float *)(param_3 + 100) * param_1);
  *(undefined4 *)(param_4 + 100) = uVar2;
  return;
}


