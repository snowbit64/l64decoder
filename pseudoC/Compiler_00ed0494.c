// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Compiler
// Entry Point: 00ed0494
// Size: 472 bytes
// Signature: undefined __thiscall ~Compiler(Compiler * this)


/* Luau::Compiler::~Compiler() */

void __thiscall Luau::Compiler::~Compiler(Compiler *this)

{
  void **ppvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  void **ppvVar6;
  void **ppvVar7;
  void *pvVar8;
  
  ppvVar6 = *(void ***)(this + 0x218);
  if (ppvVar6 != (void **)0x0) {
    ppvVar7 = *(void ***)(this + 0x220);
    ppvVar1 = ppvVar6;
    if (ppvVar7 != ppvVar6) {
      do {
        ppvVar7 = ppvVar7 + -1;
        pvVar2 = *ppvVar7;
        *ppvVar7 = (void *)0x0;
        if (pvVar2 != (void *)0x0) {
          operator_delete__(pvVar2);
        }
      } while (ppvVar7 != ppvVar6);
      ppvVar1 = *(void ***)(this + 0x218);
    }
    *(void ***)(this + 0x220) = ppvVar6;
    operator_delete(ppvVar1);
  }
  pvVar2 = *(void **)(this + 0x200);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x208) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x1e8);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = pvVar2;
    pvVar4 = *(void **)(this + 0x1f0);
    if (*(void **)(this + 0x1f0) != pvVar2) {
      do {
        pvVar3 = *(void **)((long)pvVar4 + -0x18);
        pvVar8 = (void *)((long)pvVar4 + -0x30);
        if (pvVar3 != (void *)0x0) {
          *(void **)((long)pvVar4 + -0x10) = pvVar3;
          operator_delete(pvVar3);
        }
        pvVar4 = pvVar8;
      } while (pvVar8 != pvVar2);
      pvVar3 = *(void **)(this + 0x1e8);
    }
    *(void **)(this + 0x1f0) = pvVar2;
    operator_delete(pvVar3);
  }
  pvVar2 = *(void **)(this + 0x1d0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1d8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x1b8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1c0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x1a0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1a8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x188);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 400) = pvVar2;
    operator_delete(pvVar2);
  }
  if (*(void **)(this + 0x148) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x148));
    *(undefined8 *)(this + 0x148) = 0;
    *(undefined8 *)(this + 0x150) = 0;
  }
  if (*(void **)(this + 0x120) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x120));
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined8 *)(this + 0x128) = 0;
  }
  pvVar2 = *(void **)(this + 0xf8);
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    *(void **)(this + 0xf8) = (void *)0x0;
    *(undefined8 *)(this + 0x100) = 0;
  }
  pvVar2 = *(void **)(this + 0xd0);
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    *(void **)(this + 0xd0) = (void *)0x0;
    *(undefined8 *)(this + 0xd8) = 0;
  }
  pvVar2 = *(void **)(this + 0xa8);
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    *(void **)(this + 0xa8) = (void *)0x0;
    *(undefined8 *)(this + 0xb0) = 0;
  }
  pvVar2 = *(void **)(this + 0x80);
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    *(void **)(this + 0x80) = (void *)0x0;
    *(undefined8 *)(this + 0x88) = 0;
  }
  pvVar2 = *(void **)(this + 0x58);
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    *(void **)(this + 0x58) = (void *)0x0;
    *(undefined8 *)(this + 0x60) = 0;
  }
  ppvVar6 = (void **)(this + 0x30);
  pvVar2 = *ppvVar6;
  if (pvVar2 != (void *)0x0) {
    lVar5 = *(long *)(this + 0x38);
    if (lVar5 != 0) {
      ppvVar1 = (void **)((long)pvVar2 + 0x18);
      do {
        pvVar2 = ppvVar1[-1];
        if (pvVar2 != (void *)0x0) {
          *ppvVar1 = pvVar2;
          operator_delete(pvVar2);
        }
        lVar5 = lVar5 + -1;
        ppvVar1 = ppvVar1 + 7;
      } while (lVar5 != 0);
      pvVar2 = *ppvVar6;
    }
    operator_delete(pvVar2);
    *ppvVar6 = (void *)0x0;
    *(undefined8 *)(this + 0x38) = 0;
  }
  return;
}


