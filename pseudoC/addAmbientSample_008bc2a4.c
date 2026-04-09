// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAmbientSample
// Entry Point: 008bc2a4
// Size: 504 bytes
// Signature: undefined __cdecl addAmbientSample(char * param_1, uint param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, uint param_9, uint param_10, float param_11, float param_12, float param_13, float param_14, float param_15, float param_16, float param_17, float param_18, float param_19, float param_20, uint param_21, uint param_22)


/* SoundPlayer::addAmbientSample(char const*, unsigned int, float, float, float, float, float,
   float, unsigned int, unsigned int, float, float, float, float, float, float, float, float, float,
   float, unsigned int, unsigned int) */

ulong SoundPlayer::addAmbientSample
                (char *param_1,uint param_2,float param_3,float param_4,float param_5,float param_6,
                float param_7,float param_8,uint param_9,uint param_10,float param_11,float param_12
                ,float param_13,float param_14,float param_15,float param_16,float param_17,
                float param_18,float param_19,float param_20,uint param_21,uint param_22)

{
  undefined4 in_w6;
  byte *pbVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  
  lVar7 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28) - lVar7;
  lVar3 = lVar2 >> 3;
  uVar6 = lVar3 * -0x71c71c71c71c71c7;
  if (lVar2 == -0x48) {
    lVar7 = lVar7 + lVar3 * 8 + 0x48;
    lVar2 = *(long *)(param_1 + 0x28);
    while (lVar3 = lVar2, lVar3 != lVar7) {
      pbVar4 = *(byte **)(lVar3 + -0x30);
      lVar2 = lVar3 + -0x48;
      if (pbVar4 != (byte *)0x0) {
        pbVar1 = *(byte **)(lVar3 + -0x28);
        pbVar5 = pbVar4;
        if (pbVar1 != pbVar4) {
          do {
            pbVar5 = pbVar1 + -0x68;
            if ((*pbVar5 & 1) != 0) {
              operator_delete(*(void **)(pbVar1 + -0x58));
            }
            pbVar1 = pbVar5;
          } while (pbVar5 != pbVar4);
          pbVar5 = *(byte **)(lVar3 + -0x30);
        }
        *(byte **)(lVar3 + -0x28) = pbVar4;
        operator_delete(pbVar5);
      }
    }
    *(long *)(param_1 + 0x28) = lVar7;
  }
  else {
    std::__ndk1::
    vector<SoundPlayer::AmbientElement,std::__ndk1::allocator<SoundPlayer::AmbientElement>>::
    __append((vector<SoundPlayer::AmbientElement,std::__ndk1::allocator<SoundPlayer::AmbientElement>>
              *)(param_1 + 0x20),1);
    lVar7 = *(long *)(param_1 + 0x28);
  }
  *(uint *)(lVar7 + -0x48) = param_9;
  *(undefined4 *)(lVar7 + -0x38) = in_w6;
  *(undefined4 *)(lVar7 + -0x34) = 0;
  *(uint *)(lVar7 + -0x3c) = param_22;
  *(undefined4 *)(lVar7 + -4) = 0;
  *(undefined8 *)(lVar7 + -0x18) = 0;
  *(undefined8 *)(lVar7 + -0x10) = 0;
  *(float *)(lVar7 + -0x44) = param_11 * 1000.0;
  *(float *)(lVar7 + -0x40) = param_12 * 1000.0;
  uVar8 = MathUtil::getRandomMinMax(param_11 * 1000.0,param_12 * 1000.0);
  *(undefined4 *)(lVar7 + -8) = uVar8;
  addAmbientSampleVariation
            ((uint)param_1,(char *)(uVar6 & 0xffffffff),param_3,param_4,param_16,param_6,param_7,
             param_8,param_2,param_10,param_13,param_14,param_15,param_16,param_17,param_18,param_19
             ,param_20);
  return uVar6 & 0xffffffff;
}


