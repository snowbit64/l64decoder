// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drawSphere
// Entry Point: 009ace34
// Size: 120 bytes
// Signature: undefined __thiscall drawSphere(Bt2DebugDraw * this, btVector3 * param_1, float param_2, btVector3 * param_3)


/* Bt2DebugDraw::drawSphere(btVector3 const&, float, btVector3 const&) */

void __thiscall
Bt2DebugDraw::drawSphere(Bt2DebugDraw *this,btVector3 *param_1,float param_2,btVector3 *param_3)

{
  long lVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *(undefined8 *)param_3;
  local_30 = *(undefined4 *)(param_3 + 8);
  local_2c = 0x3f800000;
  DeferredDebugRenderer::addSphere
            (*(float **)(this + 0x10),param_2,(float *)param_1,(CATEGORY)&local_38,(Matrix4x4 *)0x40
             ,0,false,(Vector3 *)0x0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


