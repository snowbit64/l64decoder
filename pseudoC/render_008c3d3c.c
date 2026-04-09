// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 008c3d3c
// Size: 136 bytes
// Signature: undefined __thiscall render(GsMaskedOcclusionCulling * this, float * param_1, uint param_2, ushort * param_3, uint param_4, float * param_5)


/* GsMaskedOcclusionCulling::render(float const*, unsigned int, unsigned short const*, unsigned int,
   float const*) */

void __thiscall
GsMaskedOcclusionCulling::render
          (GsMaskedOcclusionCulling *this,float *param_1,uint param_2,ushort *param_3,uint param_4,
          float *param_5)

{
  long lVar1;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0x40000000c;
  local_30 = 8;
  (**(code **)(**(long **)(this + 0x10) + 0x38))
            (*(long **)(this + 0x10),param_1,param_3,(ulong)param_4 / 3,param_5,1,0x1f,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


