// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007947dc
// Entry Point: 007947dc
// Size: 156 bytes
// Signature: undefined FUN_007947dc(void)


void FUN_007947dc(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = EngineManager::getInstance();
  local_38 = *param_1;
  uStack_34 = param_1[4];
  local_30 = NEON_fmadd(param_1[8],0xbf000000,0x3f000000);
  Renderer::unProjectClipCoords
            (*(Renderer **)(lVar2 + 0xb8),(Vector3 *)&local_38,(Vector3 *)&local_48);
  param_1[0x40] = local_48;
  param_1[0x42] = 4;
  param_1[0x44] = uStack_44;
  param_1[0x46] = 4;
  param_1[0x48] = local_40;
  param_1[0x4a] = 4;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


