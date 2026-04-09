// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Object
// Entry Point: 0075adb0
// Size: 160 bytes
// Signature: undefined __thiscall ~Object(Object * this)


/* JSONUtil::Object::~Object() */

void __thiscall JSONUtil::Object::~Object(Object *this)

{
  void **ppvVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x10);
  if (plVar3 != (long *)0x0) {
    do {
      pvVar2 = (void *)plVar3[5];
      if (pvVar2 != (void *)0x0) {
        Atom::clear();
        operator_delete(pvVar2);
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
    ppvVar1 = (void **)*(void **)(this + 0x10);
    while (ppvVar1 != (void **)0x0) {
      pvVar2 = *ppvVar1;
      if ((*(byte *)(ppvVar1 + 2) & 1) != 0) {
        operator_delete(ppvVar1[4]);
      }
      operator_delete(ppvVar1);
      ppvVar1 = (void **)pvVar2;
    }
  }
  pvVar2 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    return;
  }
  return;
}


