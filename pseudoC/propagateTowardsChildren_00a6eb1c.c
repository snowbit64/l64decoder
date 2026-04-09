// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: propagateTowardsChildren
// Entry Point: 00a6eb1c
// Size: 112 bytes
// Signature: undefined __thiscall propagateTowardsChildren(LocalGeometryTransformGroup * this, uint param_1, uint param_2)


/* LocalGeometryTransformGroup::propagateTowardsChildren(unsigned int, unsigned int) */

void __thiscall
LocalGeometryTransformGroup::propagateTowardsChildren
          (LocalGeometryTransformGroup *this,uint param_1,uint param_2)

{
  UpdateRenderingManager *pUVar1;
  
  RawTransformGroup::propagateTowardsChildren((RawTransformGroup *)this,param_1,param_2);
  if ((param_1 >> 1 & 1) != 0) {
    if (((byte)this[0x40] >> 1 & 1) == 0) {
      if (this[0x1c0] != (LocalGeometryTransformGroup)0x0) {
        this[0x1c0] = (LocalGeometryTransformGroup)0x0;
        pUVar1 = (UpdateRenderingManager *)UpdateRenderingManager::getInstance();
        UpdateRenderingManager::removeUpdateableRendered
                  (pUVar1,(UpdateableRendered *)(this + 0x158));
        return;
      }
    }
    else if (this[0x1c0] == (LocalGeometryTransformGroup)0x0) {
      this[0x1c0] = (LocalGeometryTransformGroup)0x1;
      pUVar1 = (UpdateRenderingManager *)UpdateRenderingManager::getInstance();
      UpdateRenderingManager::addUpdateableRendered(pUVar1,(UpdateableRendered *)(this + 0x158));
      return;
    }
  }
  return;
}


