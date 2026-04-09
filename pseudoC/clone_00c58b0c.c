// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00c58b0c
// Size: 208 bytes
// Signature: undefined __thiscall clone(GsTSymbolTableLevel * this, SHC_PoolAllocator * param_1)


/* GsTSymbolTableLevel::clone(SHC_PoolAllocator&) */

undefined8 * __thiscall
GsTSymbolTableLevel::clone(GsTSymbolTableLevel *this,SHC_PoolAllocator *param_1)

{
  bool bVar1;
  undefined8 *this_00;
  GsTSymbol *pGVar2;
  GsTSymbolTableLevel **ppGVar3;
  GsTSymbolTableLevel *pGVar4;
  GsTSymbolTableLevel **ppGVar5;
  
  this_00 = (undefined8 *)SHC_PoolAllocator::allocate(param_1,0x20);
  this_00[2] = param_1;
  this_00[3] = 0;
  this_00[1] = 0;
  *this_00 = this_00 + 1;
  ppGVar5 = *(GsTSymbolTableLevel ***)this;
  while (ppGVar5 != (GsTSymbolTableLevel **)(this + 8)) {
    pGVar2 = (GsTSymbol *)(**(code **)(*(long *)ppGVar5[8] + 0x30))(ppGVar5[8],param_1);
    insert((GsTSymbolTableLevel *)this_00,pGVar2);
    ppGVar3 = (GsTSymbolTableLevel **)ppGVar5[1];
    if ((GsTSymbolTableLevel **)ppGVar5[1] == (GsTSymbolTableLevel **)0x0) {
      ppGVar3 = ppGVar5 + 2;
      bVar1 = (GsTSymbolTableLevel **)*(GsTSymbolTableLevel **)*ppGVar3 != ppGVar5;
      ppGVar5 = (GsTSymbolTableLevel **)*ppGVar3;
      if (bVar1) {
        do {
          pGVar4 = *ppGVar3;
          ppGVar3 = (GsTSymbolTableLevel **)(pGVar4 + 0x10);
          ppGVar5 = (GsTSymbolTableLevel **)*ppGVar3;
        } while (*ppGVar5 != pGVar4);
      }
    }
    else {
      do {
        ppGVar5 = ppGVar3;
        ppGVar3 = (GsTSymbolTableLevel **)*ppGVar5;
      } while ((GsTSymbolTableLevel **)*ppGVar5 != (GsTSymbolTableLevel **)0x0);
    }
  }
  return this_00;
}


