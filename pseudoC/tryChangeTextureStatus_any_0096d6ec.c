// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tryChangeTextureStatus_any
// Entry Point: 0096d6ec
// Size: 344 bytes
// Signature: undefined __thiscall tryChangeTextureStatus_any(CommonPipelineData * this, ulonglong param_1, Status param_2, Status param_3)


/* TextureStreamingManager::CommonPipelineData::tryChangeTextureStatus_any(unsigned long long,
   TextureStreamingManager::Status, TextureStreamingManager::Status) */

undefined4 __thiscall
TextureStreamingManager::CommonPipelineData::tryChangeTextureStatus_any
          (CommonPipelineData *this,ulonglong param_1,Status param_2,Status param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long **pplVar5;
  long *plVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  Mutex::enterCriticalSection();
  uVar2 = *(ulong *)(this + 0x68);
  if (uVar2 != 0) {
    uVar10 = NEON_cnt(uVar2,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar3 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar3 < 2) {
      uVar4 = uVar2 - 1 & param_1;
    }
    else {
      uVar4 = param_1;
      if (uVar2 <= param_1) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = param_1 / uVar2;
        }
        uVar4 = param_1 - uVar4 * uVar2;
      }
    }
    pplVar5 = *(long ***)(*(long *)(this + 0x60) + uVar4 * 8);
    if ((pplVar5 != (long **)0x0) && (plVar6 = *pplVar5, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == param_1) {
          if (plVar6[2] == param_1) {
            if (*(Status *)(plVar6 + 3) == param_2) {
              *(Status *)(plVar6 + 3) = param_3;
              if (param_3 == 3) {
                uVar8 = 1;
                DAT_0210ee54 = DAT_0210ee54 + 1;
              }
              else if (param_3 == 1) {
                DAT_0210ee40 = DAT_0210ee40 + 1;
                uVar8 = 1;
              }
              else {
                uVar8 = 1;
              }
              goto LAB_0096d800;
            }
            break;
          }
        }
        else {
          if (uVar3 < 2) {
            uVar7 = uVar7 & uVar2 - 1;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar4) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  uVar8 = 0;
LAB_0096d800:
                    /* try { // try from 0096d800 to 0096d807 has its CatchHandler @ 0096d844 */
  Mutex::leaveCriticalSection();
  return uVar8;
}


