// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addGlobalVarInfo
// Entry Point: 00ac796c
// Size: 236 bytes
// Signature: undefined __thiscall addGlobalVarInfo(VulkanShaderSerializer * this, GLOBAL_VAR_TYPE param_1, char * param_2, uint param_3)


/* VulkanShaderSerializer::addGlobalVarInfo(VulkanShaderSerializer::GLOBAL_VAR_TYPE, char const*,
   unsigned int) */

void __thiscall
VulkanShaderSerializer::addGlobalVarInfo
          (VulkanShaderSerializer *this,GLOBAL_VAR_TYPE param_1,char *param_2,uint param_3)

{
  GLOBAL_VAR_TYPE *pGVar1;
  long lVar2;
  int iVar3;
  GLOBAL_VAR_TYPE local_70 [2];
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  uint local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  local_70[0] = param_1;
                    /* try { // try from 00ac79b0 to 00ac79bb has its CatchHandler @ 00ac7a64 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&local_68);
  pGVar1 = *(GLOBAL_VAR_TYPE **)(this + 0x10);
  local_50 = param_3;
  if (pGVar1 == *(GLOBAL_VAR_TYPE **)(this + 0x18)) {
                    /* try { // try from 00ac79f8 to 00ac7a0b has its CatchHandler @ 00ac7a64 */
    std::__ndk1::
    vector<VulkanShaderSerializer::GlobalVarInfo,std::__ndk1::allocator<VulkanShaderSerializer::GlobalVarInfo>>
    ::__push_back_slow_path<VulkanShaderSerializer::GlobalVarInfo_const&>
              ((vector<VulkanShaderSerializer::GlobalVarInfo,std::__ndk1::allocator<VulkanShaderSerializer::GlobalVarInfo>>
                *)(this + 8),(GlobalVarInfo *)local_70);
  }
  else {
    *pGVar1 = local_70[0];
                    /* try { // try from 00ac79d8 to 00ac79df has its CatchHandler @ 00ac7a58 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(pGVar1 + 2);
    pGVar1[8] = local_50;
    *(GLOBAL_VAR_TYPE **)(this + 0x10) = pGVar1 + 10;
  }
  iVar3 = __strlen_chk(param_2,0xffffffffffffffff);
  *(int *)(this + 0x38) = iVar3 + *(int *)(this + 0x38) + 4;
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


