// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTextureStatus_async
// Entry Point: 0096a23c
// Size: 240 bytes
// Signature: undefined __thiscall getTextureStatus_async(CommonPipelineData * this, ulonglong param_1)


/* TextureStreamingManager::CommonPipelineData::getTextureStatus_async(unsigned long long) const */

undefined4 __thiscall
TextureStreamingManager::CommonPipelineData::getTextureStatus_async
          (CommonPipelineData *this,ulonglong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long **pplVar4;
  long *plVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  Mutex::enterCriticalSection();
  uVar2 = *(ulong *)(this + 0x68);
  if (uVar2 != 0) {
    uVar9 = NEON_cnt(uVar2,1);
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
    if ((uVar10 & 0xffffffff) < 2) {
      uVar3 = uVar2 - 1 & param_1;
    }
    else {
      uVar3 = param_1;
      if (uVar2 <= param_1) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = param_1 / uVar2;
        }
        uVar3 = param_1 - uVar3 * uVar2;
      }
    }
    pplVar4 = *(long ***)(*(long *)(this + 0x60) + uVar3 * 8);
    if ((pplVar4 != (long **)0x0) && (plVar5 = *pplVar4, plVar5 != (long *)0x0)) {
      do {
        uVar6 = plVar5[1];
        if (uVar6 == param_1) {
          if (plVar5[2] == param_1) {
            uVar7 = *(undefined4 *)(plVar5 + 3);
            goto LAB_0096a308;
          }
        }
        else {
          if ((uVar10 & 0xffffffff) < 2) {
            uVar6 = uVar6 & uVar2 - 1;
          }
          else if (uVar2 <= uVar6) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar6 / uVar2;
            }
            uVar6 = uVar6 - uVar1 * uVar2;
          }
          if (uVar6 != uVar3) break;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  uVar7 = 5;
LAB_0096a308:
                    /* try { // try from 0096a308 to 0096a30f has its CatchHandler @ 0096a32c */
  Mutex::leaveCriticalSection();
  return uVar7;
}


