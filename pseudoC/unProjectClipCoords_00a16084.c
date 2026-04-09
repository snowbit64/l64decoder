// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unProjectClipCoords
// Entry Point: 00a16084
// Size: 156 bytes
// Signature: undefined __thiscall unProjectClipCoords(Renderer * this, Vector3 * param_1, Vector3 * param_2)


/* Renderer::unProjectClipCoords(Vector3 const&, Vector3&) */

void __thiscall Renderer::unProjectClipCoords(Renderer *this,Vector3 *param_1,Vector3 *param_2)

{
  long lVar1;
  float fVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0x3f8000003f800000;
  local_60 = 0;
  fVar2 = (float)TransformArgs::clipNDCZ((TransformArgs *)(this + 0x1a0),*(float *)(param_1 + 8));
  RenderDeviceUtil::unProject
            (*(float *)param_1,*(float *)(param_1 + 4),fVar2,(float *)(this + 0x220),
             (float *)(this + 0x1a0),(float *)&local_60,(float *)param_2,(float *)(param_2 + 4),
             (float *)(param_2 + 8));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


