// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStreamingDesc_async
// Entry Point: 0096aef4
// Size: 176 bytes
// Signature: undefined __thiscall getStreamingDesc_async(CommonPipelineData * this, ulonglong param_1)


/* TextureStreamingManager::CommonPipelineData::getStreamingDesc_async(unsigned long long) const */

long ** __thiscall
TextureStreamingManager::CommonPipelineData::getStreamingDesc_async
          (CommonPipelineData *this,ulonglong param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long **pplVar4;
  long *plVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  plVar2 = *(long **)(this + 0x18);
  if (plVar2 == (long *)0x0) {
LAB_0096af98:
    pplVar4 = (long **)0x0;
  }
  else {
    uVar7 = NEON_cnt(plVar2,1);
    uVar6 = NEON_uaddlv(uVar7,1);
    uVar8 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6);
    if ((uVar8 & 0xffffffff) < 2) {
      plVar3 = (long *)((long)plVar2 - 1U & param_1);
    }
    else {
      plVar3 = (long *)param_1;
      if (plVar2 <= param_1) {
        uVar1 = 0;
        if (plVar2 != (long *)0x0) {
          uVar1 = param_1 / (ulong)plVar2;
        }
        plVar3 = (long *)(param_1 - uVar1 * (long)plVar2);
      }
    }
    pplVar4 = *(long ***)(*(long *)(this + 0x10) + (long)plVar3 * 8);
    if ((pplVar4 != (long **)0x0) && (pplVar4 = (long **)*pplVar4, pplVar4 != (long **)0x0)) {
      do {
        plVar5 = pplVar4[1];
        if (plVar5 == (long *)param_1) {
          if (pplVar4[2] == (long *)param_1) break;
        }
        else {
          if ((uVar8 & 0xffffffff) < 2) {
            plVar5 = (long *)((ulong)plVar5 & (long)plVar2 - 1U);
          }
          else if (plVar2 <= plVar5) {
            uVar1 = 0;
            if (plVar2 != (long *)0x0) {
              uVar1 = (ulong)plVar5 / (ulong)plVar2;
            }
            plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar2);
          }
          if (plVar5 != plVar3) goto LAB_0096af98;
        }
        pplVar4 = (long **)*pplVar4;
      } while (pplVar4 != (long **)0x0);
    }
  }
  return pplVar4 + 3;
}


