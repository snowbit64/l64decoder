// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: projectClipCoords
// Entry Point: 00a161bc
// Size: 116 bytes
// Signature: undefined __thiscall projectClipCoords(Renderer * this, Vector3 * param_1, Vector3 * param_2)


/* Renderer::projectClipCoords(Vector3 const&, Vector3&) */

void __thiscall Renderer::projectClipCoords(Renderer *this,Vector3 *param_1,Vector3 *param_2)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = 0x3f8000003f800000;
  local_40 = 0;
  RenderDeviceUtil::project
            (*(float *)param_1,*(float *)(param_1 + 4),*(float *)(param_1 + 8),
             (float *)(this + 0x220),(float *)(this + 0x1a0),(float *)&local_40,(float *)param_2,
             (float *)(param_2 + 4),(float *)(param_2 + 8));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


