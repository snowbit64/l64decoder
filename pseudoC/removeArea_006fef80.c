// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeArea
// Entry Point: 006fef80
// Size: 140 bytes
// Signature: undefined __thiscall removeArea(AnimalHusbandry * this, uint param_1)


/* AnimalHusbandry::removeArea(unsigned int) */

void __thiscall AnimalHusbandry::removeArea(AnimalHusbandry *this,uint param_1)

{
  long lVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  uint *__dest;
  
  lVar1 = *(long *)(this + 0x1fc38) - *(long *)(this + 0x1fc30);
  if (lVar1 != 0) {
    uVar2 = 0;
    uVar3 = (lVar1 >> 3) * -0x3333333333333333;
    do {
      __dest = (uint *)(*(long *)(this + 0x1fc30) + uVar2 * 0x28);
      if (*__dest == param_1) {
        __n = *(long *)(this + 0x1fc38) - (long)(__dest + 10);
        if (__n != 0) {
          memmove(__dest,__dest + 10,__n);
        }
        *(size_t *)(this + 0x1fc38) = (long)__dest + __n;
        return;
      }
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 <= uVar3 && uVar3 - uVar2 != 0);
  }
  return;
}


