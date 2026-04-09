// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeUpdateable
// Entry Point: 00b048c0
// Size: 332 bytes
// Signature: undefined __thiscall removeUpdateable(UpdateManager * this, Updateable * param_1)


/* UpdateManager::removeUpdateable(Updateable*) */

void __thiscall UpdateManager::removeUpdateable(UpdateManager *this,Updateable *param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  Mutex::enterCriticalSection();
  if (param_1[8] == (Updateable)0x0) {
    lVar1 = *(long *)this;
    uVar2 = *(long *)(this + 8) - lVar1;
    if ((int)(uVar2 >> 3) != 0) {
      uVar3 = 0;
      lVar4 = 0;
      do {
        if (*(Updateable **)(lVar1 + lVar4) == param_1) {
          uVar2 = (uVar2 - 8) - lVar4;
          if (uVar2 != 0) {
            memmove((void *)(lVar1 + lVar4),(void *)((long)(void *)(lVar1 + lVar4) + 8),uVar2);
          }
          *(ulong *)(this + 8) = lVar1 + (uVar2 & 0xfffffffffffffff8) + lVar4;
          if (uVar3 < *(uint *)(this + 0x58)) {
            *(uint *)(this + 0x58) = *(uint *)(this + 0x58) - 1;
          }
          break;
        }
        lVar4 = lVar4 + 8;
        uVar3 = uVar3 + 1;
      } while ((uVar2 >> 3 & 0xffffffff) * 8 - lVar4 != 0);
    }
  }
  else {
    lVar1 = *(long *)(this + 0x18);
    uVar2 = *(long *)(this + 0x20) - lVar1;
    if ((int)(uVar2 >> 3) != 0) {
      uVar3 = 0;
      lVar4 = 0;
      do {
        if (*(Updateable **)(lVar1 + lVar4) == param_1) {
          uVar2 = (uVar2 - 8) - lVar4;
          if (uVar2 != 0) {
            memmove((void *)(lVar1 + lVar4),(void *)((long)(void *)(lVar1 + lVar4) + 8),uVar2);
          }
          *(ulong *)(this + 0x20) = lVar1 + (uVar2 & 0xfffffffffffffff8) + lVar4;
          if (uVar3 < *(uint *)(this + 0x5c)) {
            *(uint *)(this + 0x5c) = *(uint *)(this + 0x5c) - 1;
          }
          break;
        }
        lVar4 = lVar4 + 8;
        uVar3 = uVar3 + 1;
      } while ((uVar2 >> 3 & 0xffffffff) * 8 - lVar4 != 0);
    }
  }
  Mutex::leaveCriticalSection();
  return;
}


