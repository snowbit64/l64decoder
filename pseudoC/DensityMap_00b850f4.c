// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMap
// Entry Point: 00b850f4
// Size: 272 bytes
// Signature: undefined __thiscall ~DensityMap(DensityMap * this)


/* DensityMap::~DensityMap() */

void __thiscall DensityMap::~DensityMap(DensityMap *this)

{
  UpdateManager *this_00;
  void *pvVar1;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  
  pplVar3 = *(long ***)(this + 0x78);
  pplVar4 = *(long ***)(this + 0x80);
  plVar2 = (long *)(this + 0x10);
  *plVar2 = (long)&PTR__DensityMap_00fea620;
  *(undefined ***)(this + 0x48) = &PTR__DensityMap_00fea650;
  *(undefined ***)this = &PTR__DensityMap_00fea598;
  *(undefined ***)(this + 0x58) = &PTR__DensityMap_00fea678;
  for (; pplVar3 != pplVar4; pplVar3 = pplVar3 + 3) {
                    /* try { // try from 00b85164 to 00b8516b has its CatchHandler @ 00b85208 */
    (**(code **)(**pplVar3 + 0x18))(*pplVar3,this);
  }
  if (this[0x104] != (DensityMap)0x0) {
                    /* try { // try from 00b85180 to 00b851ab has its CatchHandler @ 00b85204 */
    this_00 = (UpdateManager *)UpdateManager::getInstance();
    UpdateManager::removeUpdateable(this_00,(Updateable *)(this + 0x48));
  }
  (**(code **)(*plVar2 + 0x18))(plVar2);
  (**(code **)(*(long *)this + 0x20))(this);
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 8))();
  }
  if (((byte)this[0xe0] & 1) != 0) {
    operator_delete(*(void **)(this + 0xf0));
  }
  pvVar1 = *(void **)(this + 0x78);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x80) = pvVar1;
    operator_delete(pvVar1);
  }
  IDensityPixelSource::~IDensityPixelSource((IDensityPixelSource *)(this + 0x58));
  Resource::~Resource((Resource *)this);
  return;
}


