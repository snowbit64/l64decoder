// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: testY
// Entry Point: 00b502a8
// Size: 108 bytes
// Signature: undefined __cdecl testY(Vector4 * param_1, uint param_2, float param_3, float param_4)


/* ClippingUtil::testY(Vector4 const*, unsigned int, float, float) */

undefined8 ClippingUtil::testY(Vector4 *param_1,uint param_2,float param_3,float param_4)

{
  byte bVar1;
  ulong uVar2;
  float *pfVar3;
  bool bVar4;
  float fVar5;
  
  if (2 < param_2) {
    uVar2 = (ulong)param_2;
    pfVar3 = (float *)(param_1 + 4);
    bVar4 = true;
    bVar1 = 1;
    do {
      fVar5 = *pfVar3;
      if ((fVar5 >= param_3) && (!bVar4)) {
        return 1;
      }
      bVar1 = fVar5 < param_3 & bVar1;
      if (!(bool)(param_4 < fVar5 | bVar1)) {
        return 1;
      }
      pfVar3 = pfVar3 + 4;
      uVar2 = uVar2 - 1;
      bVar4 = (bool)(param_4 < fVar5 & bVar4);
    } while (uVar2 != 0);
  }
  return 0;
}


