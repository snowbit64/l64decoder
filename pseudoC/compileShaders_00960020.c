// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileShaders
// Entry Point: 00960020
// Size: 404 bytes
// Signature: undefined __thiscall compileShaders(MultiresTextureGpuUpdater * this, IRenderDevice * param_1)


/* MultiresTextureGpuUpdater::compileShaders(IRenderDevice*) */

uint __thiscall
MultiresTextureGpuUpdater::compileShaders(MultiresTextureGpuUpdater *this,IRenderDevice *param_1)

{
  MultiresTextureGpuUpdater *pMVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  ShaderStructLayout local_78 [16];
  void *local_68;
  byte *local_58;
  byte *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  ShaderStructLayout::ShaderStructLayout(local_78,"USER",0);
                    /* try { // try from 0096005c to 00960113 has its CatchHandler @ 009601b4 */
  ShaderStructLayout::addField(local_78,"compressionBlockSize",2,0,2,false,0);
  ShaderStructLayout::addField(local_78,"compressionBufferStride",2,0,0,false,0);
  ShaderStructLayout::endDefinition();
  pMVar1 = this + 0x11;
  if (((byte)this[0x10] & 1) != 0) {
    pMVar1 = *(MultiresTextureGpuUpdater **)(this + 0x20);
  }
  uVar6 = AdhocShader::load((AdhocShader *)(this + 0x150),param_1,(char *)pMVar1,
                            "#define GS_GENERATE_MIPMAP 0",0,local_78,1);
  if ((uVar6 & 1) == 0) {
    uVar5 = 0;
    pbVar3 = local_58;
  }
  else {
    pMVar1 = this + 0x11;
    if (((byte)this[0x10] & 1) != 0) {
      pMVar1 = *(MultiresTextureGpuUpdater **)(this + 0x20);
    }
    uVar5 = AdhocShader::load((AdhocShader *)(this + 0x250),param_1,(char *)pMVar1,
                              "#define GS_GENERATE_MIPMAP 1",1,local_78,1);
    pbVar3 = local_58;
  }
  local_58 = pbVar3;
  if (pbVar3 != (byte *)0x0) {
    while (pbVar4 = local_50, pbVar4 != pbVar3) {
      local_50 = pbVar4 + -0x20;
      if ((*local_50 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -0x10));
      }
    }
    operator_delete(local_58);
  }
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


