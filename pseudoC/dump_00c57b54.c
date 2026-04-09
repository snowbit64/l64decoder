// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dump
// Entry Point: 00c57b54
// Size: 160 bytes
// Signature: undefined __thiscall dump(GsTSymbolTableLevel * this, GsTInfoSink * param_1)


/* GsTSymbolTableLevel::dump(GsTInfoSink&) const */

void __thiscall GsTSymbolTableLevel::dump(GsTSymbolTableLevel *this,GsTInfoSink *param_1)

{
  bool bVar1;
  GsTSymbolTableLevel **ppGVar2;
  GsTSymbolTableLevel *pGVar3;
  GsTSymbolTableLevel **ppGVar4;
  
  ppGVar4 = *(GsTSymbolTableLevel ***)this;
  while (ppGVar4 != (GsTSymbolTableLevel **)(this + 8)) {
    (**(code **)(*(long *)ppGVar4[8] + 0x28))(ppGVar4[8],param_1);
    ppGVar2 = (GsTSymbolTableLevel **)ppGVar4[1];
    if ((GsTSymbolTableLevel **)ppGVar4[1] == (GsTSymbolTableLevel **)0x0) {
      ppGVar2 = ppGVar4 + 2;
      bVar1 = (GsTSymbolTableLevel **)*(GsTSymbolTableLevel **)*ppGVar2 != ppGVar4;
      ppGVar4 = (GsTSymbolTableLevel **)*ppGVar2;
      if (bVar1) {
        do {
          pGVar3 = *ppGVar2;
          ppGVar2 = (GsTSymbolTableLevel **)(pGVar3 + 0x10);
          ppGVar4 = (GsTSymbolTableLevel **)*ppGVar2;
        } while (*ppGVar4 != pGVar3);
      }
    }
    else {
      do {
        ppGVar4 = ppGVar2;
        ppGVar2 = (GsTSymbolTableLevel **)*ppGVar4;
      } while ((GsTSymbolTableLevel **)*ppGVar4 != (GsTSymbolTableLevel **)0x0);
    }
  }
  return;
}


