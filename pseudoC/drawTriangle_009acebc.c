// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drawTriangle
// Entry Point: 009acebc
// Size: 112 bytes
// Signature: undefined __thiscall drawTriangle(Bt2DebugDraw * this, btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, float param_5)


/* Bt2DebugDraw::drawTriangle(btVector3 const&, btVector3 const&, btVector3 const&, btVector3
   const&, float) */

void __thiscall
Bt2DebugDraw::drawTriangle
          (Bt2DebugDraw *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,
          btVector3 *param_4,float param_5)

{
  long lVar1;
  undefined8 local_38;
  undefined4 local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *(undefined8 *)param_4;
  local_30 = *(undefined4 *)(param_4 + 8);
  fStack_2c = param_5;
  DeferredDebugRenderer::addTriangle
            (*(DeferredDebugRenderer **)(this + 0x10),(float *)param_1,(float *)&local_38,
             (float *)param_2,(float *)&local_38,(float *)param_3,(float *)&local_38,0x40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


