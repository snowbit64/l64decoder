// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTexture_main
// Entry Point: 00965468
// Size: 164 bytes
// Signature: undefined __thiscall getTexture_main(TextureStreamingManager * this, ulonglong param_1)


/* TextureStreamingManager::getTexture_main(unsigned long long) const */

undefined8 __thiscall
TextureStreamingManager::getTexture_main(TextureStreamingManager *this,ulonglong param_1)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  
  Mutex::enterCriticalSection();
  uVar1 = *(ulong *)(this + 0x310);
  uVar5 = NEON_cnt(uVar1,1);
  uVar4 = NEON_uaddlv(uVar5,1);
  if ((uint)CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar4) < 2) {
    uVar3 = uVar1 - 1 & param_1;
  }
  else {
    uVar3 = param_1;
    if (uVar1 <= param_1) {
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = param_1 / uVar1;
      }
      uVar3 = param_1 - uVar3 * uVar1;
    }
  }
  plVar2 = *(long **)(*(long *)(this + 0x308) + uVar3 * 8);
  do {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2[1] != param_1);
  } while (plVar2[2] != param_1);
  uVar5 = plVar2[3];
                    /* try { // try from 009654f0 to 009654f7 has its CatchHandler @ 0096550c */
  Mutex::leaveCriticalSection();
  return uVar5;
}


