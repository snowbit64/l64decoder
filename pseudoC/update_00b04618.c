// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b04618
// Size: 232 bytes
// Signature: undefined __thiscall update(UpdateManager * this, float param_1)


/* UpdateManager::update(float) */

void __thiscall UpdateManager::update(UpdateManager *this,float param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  while( true ) {
    Mutex::enterCriticalSection();
    uVar1 = *(uint *)(this + 0x58);
    if ((ulong)(*(long *)(this + 8) - *(long *)this >> 3) <= (ulong)uVar1) break;
    plVar5 = *(long **)(*(long *)this + (ulong)uVar1 * 8);
    *(uint *)(this + 0x58) = uVar1 + 1;
    Mutex::leaveCriticalSection();
    (**(code **)(*plVar5 + 0x10))(param_1,plVar5);
  }
  lVar2 = *(long *)(this + 0x18);
  *(undefined4 *)(this + 0x58) = 0;
  uVar3 = (ulong)*(uint *)(this + 0x5c);
  lVar4 = *(long *)(this + 0x20) - lVar2;
  if (uVar3 < (ulong)(lVar4 >> 3)) {
    do {
      plVar5 = *(long **)(lVar2 + uVar3 * 8);
      *(int *)(this + 0x5c) = (int)uVar3 + 1;
      Mutex::leaveCriticalSection();
      (**(code **)(*plVar5 + 0x10))(param_1,plVar5);
      Mutex::enterCriticalSection();
      lVar2 = *(long *)(this + 0x18);
      uVar3 = (ulong)*(uint *)(this + 0x5c);
      lVar4 = *(long *)(this + 0x20) - lVar2;
    } while (uVar3 < (ulong)(lVar4 >> 3));
  }
  *(undefined4 *)(this + 0x5c) = 0;
  if (lVar4 != 0) {
    *(long *)(this + 0x20) = lVar2;
  }
  Mutex::leaveCriticalSection();
  return;
}


