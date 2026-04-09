// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isTextureRegistered_any
// Entry Point: 0096790c
// Size: 236 bytes
// Signature: undefined __thiscall isTextureRegistered_any(RegistryPipeline * this, ulonglong param_1)


/* TextureStreamingManager::RegistryPipeline::isTextureRegistered_any(unsigned long long) const */

bool __thiscall
TextureStreamingManager::RegistryPipeline::isTextureRegistered_any
          (RegistryPipeline *this,ulonglong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long **pplVar4;
  ulonglong uVar5;
  long *plVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  Mutex::enterCriticalSection();
  uVar2 = *(ulong *)(this + 0x40);
  if (uVar2 != 0) {
    uVar8 = NEON_cnt(uVar2,1);
    uVar7 = NEON_uaddlv(uVar8,1);
    uVar9 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7);
    if ((uVar9 & 0xffffffff) < 2) {
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
    pplVar4 = *(long ***)(*(long *)(this + 0x38) + uVar3 * 8);
    if (pplVar4 != (long **)0x0) {
      plVar6 = *pplVar4;
      if (plVar6 != (long *)0x0) {
        do {
          uVar5 = plVar6[1];
          if (uVar5 == param_1) {
            if (plVar6[2] == param_1) break;
          }
          else {
            if ((uVar9 & 0xffffffff) < 2) {
              uVar5 = uVar5 & uVar2 - 1;
            }
            else if (uVar2 <= uVar5) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar5 / uVar2;
              }
              uVar5 = uVar5 - uVar1 * uVar2;
            }
            if (uVar5 != uVar3) goto LAB_009679d4;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      goto LAB_009679d8;
    }
  }
LAB_009679d4:
  plVar6 = (long *)0x0;
LAB_009679d8:
                    /* try { // try from 009679d8 to 009679df has its CatchHandler @ 009679f8 */
  Mutex::leaveCriticalSection();
  return plVar6 != (long *)0x0;
}


