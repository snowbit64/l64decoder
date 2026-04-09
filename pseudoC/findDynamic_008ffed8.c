// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findDynamic
// Entry Point: 008ffed8
// Size: 112 bytes
// Signature: undefined __thiscall findDynamic(I3DLoad * this, char * param_1)


/* I3DLoad::findDynamic(char const*) */

undefined8 __thiscall I3DLoad::findDynamic(I3DLoad *this,char *param_1)

{
  uint uVar1;
  I3DLoad *pIVar2;
  I3DLoad *pIVar3;
  
  if (param_1 != (char *)0x0) {
    uVar1 = atoi(param_1);
    pIVar3 = *(I3DLoad **)(this + 0x108);
    if (pIVar3 != (I3DLoad *)0x0) {
      pIVar2 = this + 0x108;
      do {
        if (*(uint *)(pIVar3 + 0x20) >= uVar1) {
          pIVar2 = pIVar3;
        }
        pIVar3 = *(I3DLoad **)(pIVar3 + (ulong)(*(uint *)(pIVar3 + 0x20) < uVar1) * 8);
      } while (pIVar3 != (I3DLoad *)0x0);
      if ((pIVar2 != this + 0x108) && (*(uint *)(pIVar2 + 0x20) <= uVar1)) {
        return *(undefined8 *)(pIVar2 + 0x28);
      }
    }
  }
  return 0;
}


