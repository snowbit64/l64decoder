// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAABB
// Entry Point: 009fada4
// Size: 96 bytes
// Signature: undefined __thiscall addAABB(DeferredDebugRenderer * this, BoundingAxisAlignedBox * param_1, Matrix4x4 * param_2, CATEGORY param_3)


/* DeferredDebugRenderer::addAABB(BoundingAxisAlignedBox const*, Matrix4x4 const*,
   DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addAABB
          (DeferredDebugRenderer *this,BoundingAxisAlignedBox *param_1,Matrix4x4 *param_2,
          CATEGORY param_3)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = 0x3f7333333f800000;
  local_40 = 0x3f8000003f800000;
  addAABB(this,param_1,(Matrix4x4 *)0x0,(float *)&local_40,param_3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


