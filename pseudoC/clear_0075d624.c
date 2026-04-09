// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clear
// Entry Point: 0075d624
// Size: 208 bytes
// Signature: undefined clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* JSONUtil::Atom::clear() */

void JSONUtil::Atom::clear(void)

{
  void **ppvVar1;
  char cVar2;
  char *in_x0;
  void **this;
  void **ppvVar3;
  void *pvVar4;
  
  cVar2 = *in_x0;
  if (cVar2 == '\x05') {
    this = *(void ***)(in_x0 + 8);
    if (this != (void **)0x0) {
      ppvVar3 = (void **)*this;
      ppvVar1 = (void **)this[1];
      if (ppvVar3 != ppvVar1) {
        do {
          pvVar4 = *ppvVar3;
          if (pvVar4 != (void *)0x0) {
            clear();
            operator_delete(pvVar4);
          }
          ppvVar3 = ppvVar3 + 1;
        } while (ppvVar3 != ppvVar1);
        ppvVar3 = (void **)*this;
      }
      if (ppvVar3 != (void **)0x0) {
        this[1] = ppvVar3;
        operator_delete(ppvVar3);
      }
LAB_0075d6e0:
      operator_delete(this);
      return;
    }
  }
  else if (cVar2 == '\x04') {
    this = *(void ***)(in_x0 + 8);
    if (this != (void **)0x0) {
      Object::~Object((Object *)this);
      goto LAB_0075d6e0;
    }
  }
  else if ((cVar2 == '\x03') && (*(void **)(in_x0 + 8) != (void *)0x0)) {
    operator_delete__(*(void **)(in_x0 + 8));
    return;
  }
  return;
}


