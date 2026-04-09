// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setReverbPreset
// Entry Point: 00b0be9c
// Size: 200 bytes
// Signature: undefined __cdecl setReverbPreset(REVERB_PRESET_TYPES param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float * param_12, float param_13, float param_14, float * param_15, float param_16, float param_17, float param_18, float param_19, float param_20, float param_21, float param_22, float param_23, float param_24)


/* SoftAudioDevice::setReverbPreset(AudioReverbDesc::REVERB_PRESET_TYPES, float, float, float,
   float, float, float, float, float, float, float, float*, float, float, float*, float, float,
   float, float, float, float, float, float, float) */

void SoftAudioDevice::setReverbPreset
               (REVERB_PRESET_TYPES param_1,float param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,float param_8,float param_9,float param_10,float param_11
               ,float *param_12,float param_13,float param_14,float *param_15,float param_16,
               float param_17,float param_18,float param_19,float param_20,float param_21,
               float param_22,float param_23,float param_24)

{
  undefined4 *in_x3;
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  
  lVar1 = (ulong)param_1 + ((ulong)param_12 & 0xffffffff) * 0x6c;
  *(float *)(lVar1 + 0x1ca4) = param_2;
  *(float *)(lVar1 + 0x1ca8) = param_3;
  *(float *)(lVar1 + 0x1cac) = param_4;
  *(float *)(lVar1 + 0x1cb0) = param_5;
  *(float *)(lVar1 + 0x1cb4) = param_6;
  *(float *)(lVar1 + 0x1cb8) = param_7;
  *(float *)(lVar1 + 0x1cbc) = param_8;
  *(float *)(lVar1 + 0x1cc0) = param_9;
  *(float *)(lVar1 + 0x1cc4) = param_10;
  *(float *)(lVar1 + 0x1cc8) = param_11;
  *(float *)(lVar1 + 0x1ccc) = *param_15;
  *(float *)(lVar1 + 0x1cd0) = param_15[1];
  fVar2 = param_15[2];
  *(float *)(lVar1 + 0x1cd8) = param_13;
  *(float *)(lVar1 + 0x1cdc) = param_14;
  *(float *)(lVar1 + 0x1cd4) = fVar2;
  *(undefined4 *)(lVar1 + 0x1ce0) = *in_x3;
  uVar3 = in_x3[1];
  *(int *)(lVar1 + 0x1d0c) = (int)param_24;
  *(undefined4 *)(lVar1 + 0x1ce4) = uVar3;
  uVar3 = in_x3[2];
  *(float *)(lVar1 + 0x1cec) = param_16;
  *(float *)(lVar1 + 0x1cf0) = param_17;
  *(float *)(lVar1 + 0x1cf4) = param_18;
  *(float *)(lVar1 + 0x1cf8) = param_19;
  *(float *)(lVar1 + 0x1cfc) = param_20;
  *(float *)(lVar1 + 0x1d00) = param_21;
  *(float *)(lVar1 + 0x1d04) = param_22;
  *(float *)(lVar1 + 0x1d08) = param_23;
  *(undefined4 *)(lVar1 + 0x1ce8) = uVar3;
  return;
}


