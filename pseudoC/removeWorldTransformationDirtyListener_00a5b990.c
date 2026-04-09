// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeWorldTransformationDirtyListener
// Entry Point: 00a5b990
// Size: 156 bytes
// Signature: undefined __thiscall removeWorldTransformationDirtyListener(ScenegraphNode * this, WorldTransformationDirtyListener * param_1)


/* ScenegraphNode::removeWorldTransformationDirtyListener(ScenegraphNode::WorldTransformationDirtyListener*)
    */

void __thiscall
ScenegraphNode::removeWorldTransformationDirtyListener
          (ScenegraphNode *this,WorldTransformationDirtyListener *param_1)

{
  WorldTransformationDirtyListener **ppWVar1;
  size_t __n;
  WorldTransformationDirtyListener **__dest;
  
  __dest = *(WorldTransformationDirtyListener ***)(this + 0x48);
  ppWVar1 = *(WorldTransformationDirtyListener ***)(this + 0x50);
  if (__dest == ppWVar1) {
LAB_00a5b9cc:
    if (__dest != ppWVar1) {
      __n = (long)ppWVar1 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(size_t *)(this + 0x50) = (long)__dest + __n;
      if (((byte)this[0x40] >> 4 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a5ba28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this + 0x20))(this,1);
        return;
      }
    }
  }
  else {
    do {
      if (*__dest == param_1) goto LAB_00a5b9cc;
      __dest = __dest + 1;
    } while (__dest != ppWVar1);
  }
  return;
}


