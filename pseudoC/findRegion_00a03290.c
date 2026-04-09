// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findRegion
// Entry Point: 00a03290
// Size: 136 bytes
// Signature: undefined __thiscall findRegion(DividedMap * this, LightSource * param_1, uint param_2)


/* PersistentShadowMap::DividedMap::findRegion(LightSource const*, unsigned int) */

long __thiscall
PersistentShadowMap::DividedMap::findRegion(DividedMap *this,LightSource *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(this + 0xc);
  if (*(uint *)(this + 0xc) != 0) {
    lVar2 = *(long *)(this + 0x10);
    do {
      if (*(DividedMap **)(lVar2 + 0x10) == (DividedMap *)0x0) {
        if ((*(LightSource **)(lVar2 + 0x18) == param_1) && (*(uint *)(lVar2 + 0x20) == param_2)) {
          return lVar2;
        }
      }
      else {
        lVar1 = findRegion(*(DividedMap **)(lVar2 + 0x10),param_1,param_2);
        if (lVar1 != 0) {
          return lVar1;
        }
      }
      lVar2 = lVar2 + 0x88;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}


