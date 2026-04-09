// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: markDensityRegionDirty
// Entry Point: 00b872f8
// Size: 272 bytes
// Signature: undefined __thiscall markDensityRegionDirty(DensityMap * this, uint param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, bool param_8, bool param_9, bool param_10)


/* DensityMap::markDensityRegionDirty(unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int, unsigned int, bool, bool, bool) */

void __thiscall
DensityMap::markDensityRegionDirty
          (DensityMap *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          uint param_6,uint param_7,bool param_8,bool param_9,bool param_10)

{
  long **pplVar1;
  uint uVar2;
  long **pplVar3;
  
  uVar2 = *(uint *)(this + 0xcc);
  pplVar3 = *(long ***)(this + 0x78);
  pplVar1 = *(long ***)(this + 0x80);
  if (pplVar3 != pplVar1) {
    do {
      if (((*(char *)(pplVar3 + 1) == '\0') || (param_10)) &&
         (((param_5 < uVar2 || param_8) && *(char *)(pplVar3 + 1) != '\0' ||
          ((param_5 < *(uint *)(pplVar3 + 2) && (*(uint *)((long)pplVar3 + 0xc) < param_6 + param_5)
           ))))) {
        (**(code **)(**pplVar3 + 0x10))
                  (*pplVar3,this,param_1,param_2,param_3,param_4,param_7,param_9);
      }
      pplVar3 = pplVar3 + 3;
    } while (pplVar3 != pplVar1);
  }
  return;
}


