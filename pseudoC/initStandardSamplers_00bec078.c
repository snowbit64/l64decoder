// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initStandardSamplers
// Entry Point: 00bec078
// Size: 236 bytes
// Signature: undefined __cdecl initStandardSamplers(IRenderDevice * param_1)


/* AdhocShader::initStandardSamplers(IRenderDevice*) */

void AdhocShader::initStandardSamplers(IRenderDevice *param_1)

{
  long lVar1;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = 1;
  uStack_54 = 2;
  uStack_50 = 2;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_5c = 2;
  uStack_58 = 2;
  DAT_0211f0b8 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,&local_60);
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_54 = 0;
  s_pStandardSamplers = "samplerBilinearClamp";
  DAT_0211f0c8 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,&local_60);
  DAT_0211f0c0 = "samplerBilinearWrap";
  uStack_58 = 2;
  uStack_54 = 2;
  local_60 = 0;
  uStack_5c = 2;
  DAT_0211f0d8 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,&local_60);
  DAT_0211f0d0 = "samplerPointClamp";
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


