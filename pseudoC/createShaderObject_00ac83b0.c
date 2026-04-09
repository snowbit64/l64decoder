// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createShaderObject
// Entry Point: 00ac83b0
// Size: 880 bytes
// Signature: undefined __thiscall createShaderObject(VulkanShaderCreator * this, CompiledShaderObjectDesc * param_1)


/* VulkanShaderCreator::createShaderObject(CompiledShaderObjectDesc const&) */

undefined8 * __thiscall
VulkanShaderCreator::createShaderObject(VulkanShaderCreator *this,CompiledShaderObjectDesc *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  void *__dest;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  void *__src;
  size_t __n;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  uchar *apuStack_e8 [8];
  uint local_a4;
  undefined8 local_a0;
  undefined4 local_98 [2];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  undefined8 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  puVar7 = (undefined8 *)operator_new(0x50);
  uVar8 = *(undefined8 *)(this + 8);
  *(undefined4 *)(puVar7 + 9) = 0;
  puVar7[6] = 0;
  puVar7[5] = 0;
  puVar7[8] = 0;
  puVar7[7] = 0;
  puVar7[4] = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR__VulkanShaderObject_00fe6628;
  puVar7[1] = uVar8;
  VulkanShaderSerializer::VulkanShaderSerializer((VulkanShaderSerializer *)apuStack_e8);
                    /* try { // try from 00ac8434 to 00ac8443 has its CatchHandler @ 00ac8738 */
  VulkanShaderSerializer::deserialize
            (apuStack_e8,(uint *)&local_a0,(uchar *)&local_a4,(uint)*(undefined8 *)param_1);
                    /* try { // try from 00ac8444 to 00ac844b has its CatchHandler @ 00ac8734 */
  uVar4 = VulkanShaderSerializer::getNumGlobalVars();
  if (uVar4 != 0) {
    uVar11 = 0;
    do {
      local_90 = 0;
      uStack_88 = 0;
      local_80 = (void *)0x0;
                    /* try { // try from 00ac8478 to 00ac8483 has its CatchHandler @ 00ac8760 */
      local_98[0] = VulkanShaderSerializer::getGlobalVarType
                              ((VulkanShaderSerializer *)apuStack_e8,uVar11);
                    /* try { // try from 00ac8488 to 00ac8497 has its CatchHandler @ 00ac8754 */
      VulkanShaderSerializer::getGlobalVarName((uint)apuStack_e8);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      uStack_88 = uStack_f8;
      local_90 = local_100;
      local_80 = local_f0;
                    /* try { // try from 00ac84b8 to 00ac84c3 has its CatchHandler @ 00ac8760 */
      uVar5 = VulkanShaderSerializer::getGlobalVarBindingIndex
                        ((VulkanShaderSerializer *)apuStack_e8,uVar11);
      puVar2 = (undefined4 *)puVar7[4];
      local_78 = CONCAT44(local_78._4_4_,uVar5);
      if (puVar2 == (undefined4 *)puVar7[5]) {
                    /* try { // try from 00ac84fc to 00ac8507 has its CatchHandler @ 00ac8760 */
        std::__ndk1::
        vector<VulkanShaderObject::GlobalVarInfo,std::__ndk1::allocator<VulkanShaderObject::GlobalVarInfo>>
        ::__push_back_slow_path<VulkanShaderObject::GlobalVarInfo_const&>
                  ((vector<VulkanShaderObject::GlobalVarInfo,std::__ndk1::allocator<VulkanShaderObject::GlobalVarInfo>>
                    *)(puVar7 + 3),(GlobalVarInfo *)local_98);
      }
      else {
        *puVar2 = local_98[0];
                    /* try { // try from 00ac84e0 to 00ac84e7 has its CatchHandler @ 00ac8744 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(puVar2 + 2);
        puVar2[8] = (undefined4)local_78;
        puVar7[4] = puVar2 + 10;
      }
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      uVar11 = uVar11 + 1;
    } while (uVar4 != uVar11);
  }
                    /* try { // try from 00ac851c to 00ac852b has its CatchHandler @ 00ac8740 */
  uVar4 = VulkanShaderSerializer::getNumAttributeLocations();
  if (uVar4 != 0) {
    uVar11 = 0;
    do {
                    /* try { // try from 00ac8554 to 00ac85bb has its CatchHandler @ 00ac8758 */
      uVar5 = VulkanShaderSerializer::getAttributeLocation
                        ((VulkanShaderSerializer *)apuStack_e8,uVar11);
      puVar2 = (undefined4 *)puVar7[7];
      if (puVar2 < (undefined4 *)puVar7[8]) {
        *puVar2 = uVar5;
        puVar7[7] = puVar2 + 1;
      }
      else {
        __src = (void *)puVar7[6];
        __n = (long)puVar2 - (long)__src;
        uVar1 = ((long)__n >> 2) + 1;
        if (uVar1 >> 0x3e != 0) {
                    /* try { // try from 00ac86bc to 00ac86cf has its CatchHandler @ 00ac8750 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        uVar9 = (long)(undefined4 *)puVar7[8] - (long)__src;
        uVar10 = (long)uVar9 >> 1;
        if (uVar1 <= uVar10) {
          uVar1 = uVar10;
        }
        if (0x7ffffffffffffffb < uVar9) {
          uVar1 = 0x3fffffffffffffff;
        }
        if (uVar1 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          __dest = operator_new(uVar1 << 2);
        }
        puVar2 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
        *puVar2 = uVar5;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        puVar7[6] = __dest;
        puVar7[7] = puVar2 + 1;
        puVar7[8] = (void *)((long)__dest + uVar1 * 4);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar4 != uVar11);
  }
                    /* try { // try from 00ac8604 to 00ac860b has its CatchHandler @ 00ac8740 */
  uVar5 = VulkanShaderSerializer::getVaryingSize();
  *(undefined4 *)(puVar7 + 9) = uVar5;
  local_80 = (void *)(ulong)local_a4;
  local_90 = 0;
  local_78 = local_a0;
  local_98[0] = 0x10;
  uStack_88 = uStack_88 & 0xffffffff00000000;
                    /* try { // try from 00ac8644 to 00ac867b has its CatchHandler @ 00ac873c */
  iVar6 = (*vkCreateShaderModule)(*(undefined8 *)(*(long *)(this + 8) + 0x18),local_98,0,puVar7 + 2)
  ;
  if (iVar6 != 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar6 != 0)) {
                    /* try { // try from 00ac86e0 to 00ac86eb has its CatchHandler @ 00ac8720 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: failed to create shader object.\n");
    puVar7 = (undefined8 *)0x0;
  }
  VulkanShaderSerializer::~VulkanShaderSerializer((VulkanShaderSerializer *)apuStack_e8);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


