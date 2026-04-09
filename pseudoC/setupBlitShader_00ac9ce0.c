// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupBlitShader
// Entry Point: 00ac9ce0
// Size: 604 bytes
// Signature: undefined setupBlitShader(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanCommandBuffer::setupBlitShader() */

void VulkanCommandBuffer::setupBlitShader(void)

{
  long lVar1;
  undefined4 uVar2;
  long in_x0;
  long *plVar3;
  VulkanShaderObject *pVVar4;
  VulkanShaderObject *pVVar5;
  undefined8 uVar6;
  undefined8 local_250;
  undefined4 local_248 [2];
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined8 local_214;
  undefined8 local_20c;
  undefined4 local_204;
  undefined8 local_200;
  undefined local_1f8 [4];
  undefined4 local_1f4;
  VulkanShaderCreator aVStack_1f0 [16];
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined local_1c4;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined *local_148;
  undefined8 uStack_140;
  undefined local_138;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)(**(code **)(**(long **)(in_x0 + 0x98) + 0x88))();
  local_138 = 0;
  local_3c = 0;
  local_1a8 = 0;
  local_148 = s_blitShaderVs;
  local_1a0 = 0;
  uStack_140 = 0x6e69616d00000006;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_148,&local_1a8);
  local_1b8 = 0;
  local_3c = 1;
  local_1b0 = 0;
  local_148 = s_blitShaderFs;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_148,&local_1b8);
  VulkanShaderCreator::VulkanShaderCreator(aVStack_1f0,*(VulkanRenderDevice **)(in_x0 + 0x98));
                    /* try { // try from 00ac9d9c to 00ac9da7 has its CatchHandler @ 00ac9f48 */
  pVVar4 = (VulkanShaderObject *)
           VulkanShaderCreator::createShaderObject
                     (aVStack_1f0,(CompiledShaderObjectDesc *)&local_1a8);
                    /* try { // try from 00ac9dac to 00ac9dc7 has its CatchHandler @ 00ac9f4c */
  pVVar5 = (VulkanShaderObject *)
           VulkanShaderCreator::createShaderObject
                     (aVStack_1f0,(CompiledShaderObjectDesc *)&local_1b8);
  uVar6 = VulkanRenderDevice::createProgramObject
                    (*(VulkanRenderDevice **)(in_x0 + 0x98),pVVar4,pVVar5);
  *(undefined8 *)(in_x0 + 0xb18) = uVar6;
  local_198 = 0;
  uStack_190 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0x100000001;
  uStack_180 = 0x100000001;
  local_168 = 0x100000001;
  uStack_160 = 0x100000001;
  uStack_150 = 0x101010101010101;
  local_158 = 0x101010101010101;
                    /* try { // try from 00ac9df4 to 00ac9dfb has its CatchHandler @ 00ac9f44 */
  uVar6 = (**(code **)(**(long **)(in_x0 + 0x98) + 0xf0))(*(long **)(in_x0 + 0x98),&local_198);
  *(undefined8 *)(in_x0 + 0xb20) = uVar6;
  local_1f8[0] = 0;
  local_1f4 = 1;
                    /* try { // try from 00ac9e18 to 00ac9e1f has its CatchHandler @ 00ac9f40 */
  uVar6 = (**(code **)(**(long **)(in_x0 + 0x98) + 0xe0))(*(long **)(in_x0 + 0x98),local_1f8);
  *(undefined8 *)(in_x0 + 0xb28) = uVar6;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c4 = 0;
  local_1e0 = 1;
  local_1c0 = 0;
  local_1c8 = 0;
                    /* try { // try from 00ac9e48 to 00ac9e8f has its CatchHandler @ 00ac9f50 */
  uVar6 = (**(code **)(**(long **)(in_x0 + 0x98) + 0xe8))(*(long **)(in_x0 + 0x98),&local_1e0);
  *(undefined8 *)(in_x0 + 0xb30) = uVar6;
  uVar2 = (**(code **)(**(long **)(in_x0 + 0xb18) + 0x10))(*(long **)(in_x0 + 0xb18),0,1);
  *(undefined4 *)(in_x0 + 0xb50) = uVar2;
  uVar2 = (**(code **)(**(long **)(in_x0 + 0xb18) + 0x28))(*(long **)(in_x0 + 0xb18),0,1);
  *(undefined4 *)(in_x0 + 0xb54) = uVar2;
  local_21c = 0;
  local_228 = 0x200000002;
  local_20c = 0;
  local_214 = 0;
  local_220 = 2;
  uStack_230 = 1;
  local_238 = 0x100000000;
  local_200 = 0;
  local_204 = 0x447a0000;
  local_248[0] = 0x1f;
  local_240 = 0;
  local_250 = 0;
                    /* try { // try from 00ac9eec to 00ac9efb has its CatchHandler @ 00ac9f3c */
  (*vkCreateSampler)(*(undefined8 *)(*(long *)(in_x0 + 0x98) + 0x18),local_248,0,&local_250);
  *(undefined8 *)(in_x0 + 0xb38) = local_250;
  *(undefined4 *)(in_x0 + 0xb48) = 5;
  VulkanShaderCreator::~VulkanShaderCreator(aVStack_1f0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


