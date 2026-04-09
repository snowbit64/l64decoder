// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileShaderObject
// Entry Point: 00ac3f84
// Size: 1104 bytes
// Signature: undefined __thiscall compileShaderObject(VulkanShaderCompilerDxc * this, ShaderObjectDesc * param_1, CompiledShaderObjectDesc * param_2)


/* VulkanShaderCompilerDxc::compileShaderObject(ShaderObjectDesc const&, CompiledShaderObjectDesc&)
    */

undefined4 __thiscall
VulkanShaderCompilerDxc::compileShaderObject
          (VulkanShaderCompilerDxc *this,ShaderObjectDesc *param_1,CompiledShaderObjectDesc *param_2
          )

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  uint *puVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined4 uVar11;
  uint uVar12;
  GLOBAL_VAR_TYPE GVar13;
  long *local_5c0;
  long *local_5b8;
  undefined8 local_5b0;
  long *local_5a8;
  long *local_5a0;
  undefined8 local_598;
  VulkanShaderSerializer aVStack_590 [68];
  uint local_54c;
  uint *local_548;
  uint *local_540;
  undefined8 local_538;
  SpirvReflect aSStack_530 [8];
  undefined auStack_528 [1184];
  int local_88;
  byte local_80;
  undefined auStack_7f [15];
  undefined *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(SpirvCompilerDxc *)(this + 0x68) == (SpirvCompilerDxc)0x0) {
    uVar11 = 0;
    goto LAB_00ac407c;
  }
  local_548 = (uint *)0x0;
  local_540 = (uint *)0x0;
  local_538 = 0;
                    /* try { // try from 00ac3fc8 to 00ac3fcf has its CatchHandler @ 00ac443c */
  uVar6 = SpirvCompilerDxc::compileShader
                    ((SpirvCompilerDxc *)(this + 0x68),param_1,(vector *)&local_548);
  puVar4 = local_548;
  if ((uVar6 & 1) == 0) {
    uVar11 = 0;
  }
  else {
    local_54c = (uint)((ulong)((long)local_540 - (long)local_548) >> 2);
                    /* try { // try from 00ac3fe4 to 00ac3fef has its CatchHandler @ 00ac4438 */
    SpirvReflect::SpirvReflect(aSStack_530,local_548,local_54c);
    if (local_88 == 0) {
                    /* try { // try from 00ac40b0 to 00ac40b7 has its CatchHandler @ 00ac441c */
      VulkanShaderSerializer::VulkanShaderSerializer(aVStack_590);
      local_5a8 = (long *)0x0;
      local_5a0 = (long *)0x0;
      local_598 = 0;
                    /* try { // try from 00ac40c0 to 00ac40cb has its CatchHandler @ 00ac4428 */
      uVar6 = SpirvReflect::getDescriptorBindings(aSStack_530,(vector *)&local_5a8);
      plVar3 = local_5a0;
      plVar10 = local_5a8;
      if ((uVar6 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0
           )) {
                    /* try { // try from 00ac4398 to 00ac43a3 has its CatchHandler @ 00ac43d4 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        puVar1 = auStack_7f;
        if ((local_80 & 1) != 0) {
          puVar1 = local_70;
        }
                    /* try { // try from 00ac4198 to 00ac41ab has its CatchHandler @ 00ac4428 */
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "SPIR-V Reflection Error: %s\n",puVar1);
LAB_00ac41ac:
        uVar11 = 0;
      }
      else {
        for (; plVar10 != plVar3; plVar10 = plVar10 + 1) {
          lVar9 = *plVar10;
          GVar13 = 4;
          switch(*(undefined4 *)(lVar9 + 0x1c)) {
          case 0:
            GVar13 = 0;
            break;
          case 2:
            GVar13 = 1;
            break;
          case 3:
            GVar13 = 6;
            break;
          case 4:
            GVar13 = 2;
            break;
          case 5:
            GVar13 = 3;
            break;
          case 7:
            GVar13 = 5;
            if (*(int *)(lVar9 + 0x20) != 4) {
              GVar13 = 7;
            }
          }
                    /* try { // try from 00ac414c to 00ac4153 has its CatchHandler @ 00ac4444 */
          VulkanShaderSerializer::addGlobalVarInfo
                    (aVStack_590,GVar13,*(char **)(lVar9 + 8),*(uint *)(lVar9 + 0x10));
        }
        if (*(int *)(param_1 + 0x10c) == 0) {
          local_5c0 = (long *)0x0;
          local_5b8 = (long *)0x0;
          local_5b0 = 0;
                    /* try { // try from 00ac41dc to 00ac41e7 has its CatchHandler @ 00ac4400 */
          uVar6 = SpirvReflect::getInputVariables(aSStack_530,(vector *)&local_5c0);
          plVar3 = local_5b8;
          plVar10 = local_5c0;
          if ((uVar6 & 1) == 0) {
                    /* try { // try from 00ac4228 to 00ac424f has its CatchHandler @ 00ac4400 */
            pcVar7 = (char *)LogManager::getInstance();
            puVar1 = auStack_7f;
            if ((local_80 & 1) != 0) {
              puVar1 = local_70;
            }
            LogManager::errorf(pcVar7,"SPIR-V Reflection Error: %s\n",puVar1);
LAB_00ac42e4:
            uVar12 = 0;
          }
          else {
            for (; plVar10 != plVar3; plVar10 = plVar10 + 1) {
              if ((*(byte *)(*plVar10 + 0x20) >> 4 & 1) == 0) {
                    /* try { // try from 00ac421c to 00ac4223 has its CatchHandler @ 00ac4404 */
                VulkanShaderSerializer::addAttributeLocation(aVStack_590,*(uint *)(*plVar10 + 0x10))
                ;
              }
            }
                    /* try { // try from 00ac425c to 00ac4267 has its CatchHandler @ 00ac43fc */
            local_5b8 = local_5c0;
            uVar8 = SpirvReflect::getOutputVariables(aSStack_530,(vector *)&local_5c0);
            if (((uVar8 & 1) == 0) || (local_5c0 == local_5b8)) goto LAB_00ac42e4;
            uVar12 = 0;
            plVar10 = local_5c0;
            do {
              switch(*(undefined4 *)(*plVar10 + 0x158)) {
              case 0x62:
              case 99:
              case 100:
                uVar12 = uVar12 + 4;
                break;
              case 0x65:
              case 0x66:
              case 0x67:
              case 0x6e:
              case 0x6f:
              case 0x70:
                uVar12 = uVar12 + 8;
                break;
              case 0x68:
              case 0x69:
              case 0x6a:
                uVar12 = uVar12 + 0xc;
                break;
              case 0x6b:
              case 0x6c:
              case 0x6d:
              case 0x71:
              case 0x72:
              case 0x73:
                uVar12 = uVar12 + 0x10;
                break;
              case 0x74:
              case 0x75:
              case 0x76:
                uVar12 = uVar12 + 0x18;
                break;
              case 0x77:
              case 0x78:
              case 0x79:
                uVar12 = uVar12 + 0x20;
              }
              plVar10 = plVar10 + 1;
            } while (plVar10 != local_5b8);
          }
          if (local_5c0 != (long *)0x0) {
            local_5b8 = local_5c0;
            operator_delete(local_5c0);
          }
          if ((uVar6 & 1) == 0) goto LAB_00ac41ac;
        }
        else {
          uVar12 = 0;
        }
                    /* try { // try from 00ac42fc to 00ac432f has its CatchHandler @ 00ac4424 */
        VulkanShaderSerializer::setVaryingSize(aVStack_590,uVar12);
        SpirvUtil::stripCodeInPlace(puVar4,&local_54c);
        VulkanShaderSerializer::serialize
                  (aVStack_590,(uchar **)param_2,(uint *)(param_2 + 8),(uchar *)puVar4,
                   local_54c << 2);
        uVar11 = 1;
      }
      if (local_5a8 != (long *)0x0) {
        local_5a0 = local_5a8;
        operator_delete(local_5a8);
      }
      VulkanShaderSerializer::~VulkanShaderSerializer(aVStack_590);
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00ac4350 to 00ac435b has its CatchHandler @ 00ac43e8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      puVar1 = auStack_7f;
      if ((local_80 & 1) != 0) {
        puVar1 = local_70;
      }
                    /* try { // try from 00ac4020 to 00ac4033 has its CatchHandler @ 00ac442c */
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "SPIR-V Reflection Failed: %s\n",puVar1);
      uVar11 = 0;
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
                    /* try { // try from 00ac4050 to 00ac4053 has its CatchHandler @ 00ac4434 */
    spvReflectDestroyShaderModule(auStack_528);
  }
  if (local_548 != (uint *)0x0) {
    local_540 = local_548;
    operator_delete(local_548);
  }
LAB_00ac407c:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}


