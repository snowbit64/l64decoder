// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNewInstance
// Entry Point: 00754bc0
// Size: 76 bytes
// Signature: undefined __thiscall getNewInstance(GenericResourceDescLoader<DensityMap,DensityMapDesc> * this, char * param_1, ResourceDesc * param_2)


/* GenericResourceDescLoader<DensityMap, DensityMapDesc>::getNewInstance(char const*, ResourceDesc*)
    */

DensityMap * __thiscall
GenericResourceDescLoader<DensityMap,DensityMapDesc>::getNewInstance
          (GenericResourceDescLoader<DensityMap,DensityMapDesc> *this,char *param_1,
          ResourceDesc *param_2)

{
  DensityMap *this_00;
  
  this_00 = (DensityMap *)operator_new(0x108);
                    /* try { // try from 00754bec to 00754bf7 has its CatchHandler @ 00754c0c */
  DensityMap::DensityMap(this_00,param_1,*(uint *)(this + 8),(DensityMapDesc *)param_2);
  return this_00;
}


