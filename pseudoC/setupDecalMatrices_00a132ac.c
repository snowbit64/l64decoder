// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupDecalMatrices
// Entry Point: 00a132ac
// Size: 184 bytes
// Signature: undefined __cdecl setupDecalMatrices(TransformArgs * param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7)


/* Renderer::setupDecalMatrices(TransformArgs&, float, float, float, float, float, float) */

void Renderer::setupDecalMatrices
               (TransformArgs *param_1,float param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7)

{
  long lVar1;
  float afStack_c0 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_78 = 0;
  local_80 = 0x3f800000;
  uStack_68 = 0x3f800000;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0x3f80000000000000;
  uStack_48 = 0x3f80000000000000;
  uStack_50 = 0;
  RenderDeviceUtil::makeOrthoProjectionMatrix
            (param_2,param_2 + param_4,param_3 + param_5,param_3,-param_7,-param_6,afStack_c0);
  TransformArgs::setupInv
            (param_1,(Matrix4x4 *)&local_80,(Matrix4x4 *)afStack_c0,-param_7,-param_6,(Vector3 *)0x0
            );
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


