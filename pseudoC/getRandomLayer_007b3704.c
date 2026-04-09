// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRandomLayer
// Entry Point: 007b3704
// Size: 284 bytes
// Signature: undefined __cdecl getRandomLayer(uint param_1, uint * param_2, uint param_3, uint param_4, float param_5, uint param_6)


/* TerrainUtil::getRandomLayer(unsigned int, unsigned int const*, unsigned int, unsigned int, float,
   unsigned int) */

void TerrainUtil::getRandomLayer
               (uint param_1,uint *param_2,uint param_3,uint param_4,float param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar2 = param_1 - 1;
  if (param_1 == 0 || uVar2 == 0) {
    uVar2 = *param_2;
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    fVar6 = (float)(ulong)param_3 * param_5;
    fVar7 = (float)(ulong)param_4 * param_5;
    IndexPerlinNoiseUtil::addRandomIndexWeights((float *)&local_68,fVar6,fVar7,uVar2,1.0,param_6);
    IndexPerlinNoiseUtil::addRandomIndexWeights
              ((float *)&local_68,fVar6 + fVar6,fVar7 + fVar7,uVar2,0.6,param_6);
    IndexPerlinNoiseUtil::addRandomIndexWeights
              ((float *)&local_68,fVar6 * 4.0,fVar7 * 4.0,uVar2,0.3,param_6);
    uVar5 = 0;
    fVar6 = -1.0;
    uVar4 = 0;
    do {
      fVar7 = *(float *)((long)&local_68 + (ulong)uVar5 * 4);
      uVar1 = uVar5;
      if (fVar7 <= fVar6) {
        uVar1 = uVar4;
        fVar7 = fVar6;
      }
      fVar6 = fVar7;
      uVar5 = uVar5 + 1;
      uVar4 = uVar1;
    } while (uVar5 <= uVar2);
    uVar2 = param_2[uVar1];
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


