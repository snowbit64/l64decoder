// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VulkanShaderCompilerDxc
// Entry Point: 00ac3d9c
// Size: 444 bytes
// Signature: undefined __thiscall VulkanShaderCompilerDxc(VulkanShaderCompilerDxc * this, bool param_1, uint param_2)


/* VulkanShaderCompilerDxc::VulkanShaderCompilerDxc(bool, unsigned int) */

void __thiscall
VulkanShaderCompilerDxc::VulkanShaderCompilerDxc
          (VulkanShaderCompilerDxc *this,bool param_1,uint param_2)

{
  char *pcVar1;
  long lVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  VS_VERSION VVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  byte local_a0;
  undefined uStack_9f;
  undefined6 uStack_9e;
  undefined8 uStack_98;
  void *local_90;
  byte local_88;
  undefined uStack_87;
  undefined6 uStack_86;
  undefined8 uStack_80;
  void *local_78;
  undefined2 local_70;
  undefined6 uStack_6e;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__VulkanShaderCompilerDxc_00fe6520;
  puVar7 = (undefined8 *)(this + 0x38);
  *(undefined2 *)puVar7 = 0;
  puVar6 = (undefined8 *)(this + 0x50);
  *(undefined2 *)puVar6 = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined2 *)(this + 0x20) = 0;
                    /* try { // try from 00ac3e04 to 00ac3e0f has its CatchHandler @ 00ac3f68 */
  SpirvCompilerDxc::SpirvCompilerDxc((SpirvCompilerDxc *)(this + 0x68),param_2);
  VVar5 = 3;
  if (0x400 < param_2 >> 0xc) {
    VVar5 = 4;
  }
  pcVar1 = 
  "#define RENDER_DEVICE_VULKAN_MOBILE\n#define REQUIRE_EXACT_VERTEX_ATTRIBUTES\n#define FLIP_TEXCOORD_Y\n"
  ;
  if (!param_1) {
    pcVar1 = 
    "#define RENDER_DEVICE_VULKAN\n#define REQUIRE_EXACT_VERTEX_ATTRIBUTES\n#define FLIP_TEXCOORD_Y\n"
    ;
  }
                    /* try { // try from 00ac3e38 to 00ac3e5f has its CatchHandler @ 00ac3f58 */
  ShaderCapabilities::ShaderCapabilities
            ((ShaderCapabilities *)&local_b8,6,VVar5,0x4000,VVar5,0x4000,pcVar1,"",0);
  *(undefined8 *)(this + 0x10) = uStack_b0;
  *(undefined8 *)(this + 8) = local_b8;
  *(undefined8 *)(this + 0x18) = local_a8;
  if ((*(byte *)(this + 0x20) & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  uVar3 = CONCAT11(uStack_9f,local_a0);
  local_a0 = 0;
  uStack_9f = 0;
  *(undefined8 *)(this + 0x28) = uStack_98;
  *(ulong *)(this + 0x20) = CONCAT62(uStack_9e,uVar3);
  *(void **)(this + 0x30) = local_90;
  if ((*(byte *)puVar7 & 1) != 0) {
    operator_delete(*(void **)(this + 0x48));
  }
  uVar3 = CONCAT11(uStack_87,local_88);
  local_88 = 0;
  uStack_87 = 0;
  *(undefined8 *)(this + 0x40) = uStack_80;
  *puVar7 = CONCAT62(uStack_86,uVar3);
  *(void **)(this + 0x48) = local_78;
  if ((*(byte *)puVar6 & 1) == 0) {
    uVar4 = CONCAT62(uStack_6e,local_70);
    local_70 = 0;
    *(undefined8 *)(this + 0x58) = uStack_68;
    *puVar6 = uVar4;
    *(undefined8 *)(this + 0x60) = local_60;
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    uVar4 = CONCAT62(uStack_6e,local_70);
    local_70 = 0;
    *(undefined8 *)(this + 0x58) = uStack_68;
    *puVar6 = uVar4;
    *(undefined8 *)(this + 0x60) = local_60;
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


