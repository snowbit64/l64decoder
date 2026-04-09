// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTAAShader
// Entry Point: 00a3d3a0
// Size: 204 bytes
// Signature: undefined __thiscall createTAAShader(ScreenSpaceProcessor * this, IRenderDevice * param_1, bool param_2, bool param_3, AdhocShader * param_4)


/* ScreenSpaceProcessor::createTAAShader(IRenderDevice*, bool, bool, AdhocShader&) */

uint __thiscall
ScreenSpaceProcessor::createTAAShader
          (ScreenSpaceProcessor *this,IRenderDevice *param_1,bool param_2,bool param_3,
          AdhocShader *param_4)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  char acStack_c8 [128];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pcVar1 = "#define MSAA";
  if (!param_2) {
    pcVar1 = "";
  }
  uVar3 = 2;
  if (!param_2) {
    uVar3 = 0;
  }
  FUN_00a3b120(acStack_c8,0x80,0x80,"#define TAA_QUALITY %u\n%s\n",~(uint)param_3 & 1,pcVar1);
  uVar3 = AdhocShader::load(param_4,param_1,"postfx/taa_cs.cg",acStack_c8,uVar3 | ~(uint)param_3 & 1
                            ,*(ShaderStructLayout **)(this + 0x40),
                            (uint)((ulong)(*(long *)(this + 0x48) -
                                          (long)*(ShaderStructLayout **)(this + 0x40)) >> 6));
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


