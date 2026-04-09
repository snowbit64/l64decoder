// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00794740
// Entry Point: 00794740
// Size: 156 bytes
// Signature: undefined FUN_00794740(void)


void FUN_00794740(undefined4 *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *param_1;
  uStack_34 = param_1[4];
  local_30 = param_1[8];
  lVar2 = EngineManager::getInstance();
  Renderer::projectClipCoords
            (*(Renderer **)(lVar2 + 0xb8),(Vector3 *)&local_38,(Vector3 *)&local_48);
  uVar3 = NEON_fmadd(uStack_40,0xc0000000,0x3f800000);
  param_1[0x44] = local_44;
  param_1[0x40] = local_48;
  param_1[0x42] = 4;
  param_1[0x46] = 4;
  param_1[0x4a] = 4;
  param_1[0x48] = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


