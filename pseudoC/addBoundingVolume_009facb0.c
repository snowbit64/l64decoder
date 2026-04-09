// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addBoundingVolume
// Entry Point: 009facb0
// Size: 200 bytes
// Signature: undefined __thiscall addBoundingVolume(DeferredDebugRenderer * this, BoundingVolume * param_1, CATEGORY param_2)


/* DeferredDebugRenderer::addBoundingVolume(BoundingVolume const*, DeferredDebugRenderer::CATEGORY)
    */

void __thiscall
DeferredDebugRenderer::addBoundingVolume
          (DeferredDebugRenderer *this,BoundingVolume *param_1,CATEGORY param_2)

{
  long lVar1;
  int iVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = BoundingVolume::getType();
  if (iVar2 == 0) {
    addSphere((float *)this,*(float *)(param_1 + 0x18),(float *)(param_1 + 0xc),0x51b128,
              (Matrix4x4 *)(ulong)param_2,0,false,(Vector3 *)0x0);
  }
  else {
    iVar2 = BoundingVolume::getType();
    if (iVar2 == 1) {
      uStack_48 = 0x3f7333333f800000;
      local_50 = 0x3f8000003f800000;
      addAABB(this,(BoundingAxisAlignedBox *)param_1,(Matrix4x4 *)0x0,(float *)&local_50,param_2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


