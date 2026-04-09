// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Soloud
// Entry Point: 00e36c74
// Size: 432 bytes
// Signature: undefined __thiscall ~Soloud(Soloud * this)


/* SoLoud::Soloud::~Soloud() */

void __thiscall SoLoud::Soloud::~Soloud(Soloud *this)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  stopAll();
  if (*(code **)(this + 0x18) != (code *)0x0) {
    (**(code **)(this + 0x18))(this);
  }
  *(undefined8 *)(this + 0x18) = 0;
  if (*(void **)(this + 8) != (void *)0x0) {
    Thread::destroyMutex(*(void **)(this + 8));
  }
  *(undefined8 *)(this + 8) = 0;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    Thread::destroyMutex(*(void **)(this + 0x20));
  }
  if (*(long **)(this + 0x2158) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x2158) + 0x48))();
  }
  if (*(long **)(this + 0x2160) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x2160) + 0x48))();
  }
  if (*(long **)(this + 0x2168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x2168) + 0x48))();
  }
  if (*(long **)(this + 0x2170) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x2170) + 0x48))();
  }
  if (*(long **)(this + 0x2178) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x2178) + 0x48))();
  }
  if (*(long **)(this + 0x2180) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x2180) + 0x48))();
  }
  if (*(long **)(this + 0x2188) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x2188) + 0x48))();
  }
  if (*(long **)(this + 0x2190) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x2190) + 0x48))();
  }
  uVar2 = *(uint *)(this + 0x214e8);
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      pvVar1 = *(void **)((long)*(void **)(this + 0x214e0) + uVar5 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete__(pvVar1);
        uVar2 = *(uint *)(this + 0x214e8);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  pvVar1 = *(void **)(this + 0x214e0);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  lVar3 = *(long *)(this + 0x90);
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + -8);
    if (lVar4 != 0) {
      lVar4 = lVar4 * 0x18;
      do {
        pvVar1 = *(void **)(lVar3 + -0x10 + lVar4);
        if (pvVar1 != (void *)0x0) {
          operator_delete__(pvVar1);
        }
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
    }
    operator_delete__((long *)(lVar3 + -8));
  }
  deleteAllMixMatrices();
  if (*(void **)(this + 0x80) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x80));
  }
  if (*(void **)(this + 0x60) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x60));
    return;
  }
  return;
}


