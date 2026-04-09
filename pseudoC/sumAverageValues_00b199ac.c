// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sumAverageValues
// Entry Point: 00b199ac
// Size: 328 bytes
// Signature: undefined __thiscall sumAverageValues(VoiceActivityDetector * this, float param_1, float * param_2, float * param_3)


/* VoiceActivityDetector::sumAverageValues(float, float&, float&) */

void __thiscall
VoiceActivityDetector::sumAverageValues
          (VoiceActivityDetector *this,float param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  iVar2 = *(int *)(this + 200);
  iVar6 = 0;
  *(float *)(this + (long)iVar2 * 4) = param_1;
  fVar8 = *param_3;
  iVar2 = (iVar2 + 1) % 0x32;
  cVar5 = (char)iVar2;
  *(int *)(this + 200) = iVar2;
  uVar3 = (char)(cVar5 + '0') * 0x29;
  fVar7 = *(float *)(this + ((ulong)(iVar2 + 0x31U + ((iVar2 + 0x31U & 0xff) * 0x29 >> 0xb) * -0x32)
                            & 0xff) * 4);
  uVar4 = (char)(cVar5 + '/') * 0x29;
  *param_3 = fVar7 + fVar8;
  fVar7 = *(float *)(this + (long)(char)(cVar5 + '0' +
                                        (((byte)(uVar3 >> 0xf) & 1) +
                                        (char)((uint)((int)uVar3 >> 8) >> 3)) * -0x32) * 4) +
          fVar7 + fVar8;
  uVar3 = (char)(cVar5 + '.') * 0x29;
  *param_3 = fVar7;
  fVar7 = *(float *)(this + (long)(char)(cVar5 + '/' +
                                        (((byte)(uVar4 >> 0xf) & 1) +
                                        (char)((uint)((int)uVar4 >> 8) >> 3)) * -0x32) * 4) + fVar7;
  uVar4 = (char)(cVar5 + '-') * 0x29;
  *param_3 = fVar7;
  fVar7 = *(float *)(this + (long)(char)(cVar5 + '.' +
                                        (((byte)(uVar3 >> 0xf) & 1) +
                                        (char)((uint)((int)uVar3 >> 8) >> 3)) * -0x32) * 4) + fVar7;
  *param_3 = fVar7;
  *param_3 = *(float *)(this + (long)(char)(cVar5 + '-' +
                                           (((byte)(uVar4 >> 0xf) & 1) +
                                           (char)((uint)((int)uVar4 >> 8) >> 3)) * -0x32) * 4) +
             fVar7;
  fVar7 = *param_2;
  do {
    iVar1 = iVar2 + iVar6;
    iVar6 = iVar6 + 1;
    fVar7 = *(float *)(this + (long)(iVar1 % 0x32) * 4) + fVar7;
    *param_2 = fVar7;
  } while (iVar6 != 0x2d);
  return;
}


