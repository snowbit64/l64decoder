// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: drawLine
// Entry Point: 009acc74
// Size: 136 bytes
// Signature: undefined __thiscall drawLine(Bt2DebugDraw * this, btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4)


/* Bt2DebugDraw::drawLine(btVector3 const&, btVector3 const&, btVector3 const&, btVector3 const&) */

void __thiscall
Bt2DebugDraw::drawLine
          (Bt2DebugDraw *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,
          btVector3 *param_4)

{
  long lVar1;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *(undefined8 *)param_3;
  local_30 = *(undefined4 *)(param_3 + 8);
  local_48 = *(undefined8 *)param_4;
  local_2c = 0x3f800000;
  local_40 = *(undefined4 *)(param_4 + 8);
  local_3c = 0x3f800000;
  DeferredDebugRenderer::addLine
            (*(DeferredDebugRenderer **)(this + 0x10),(float *)param_1,(float *)&local_38,
             (float *)param_2,(float *)&local_48,0x40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


