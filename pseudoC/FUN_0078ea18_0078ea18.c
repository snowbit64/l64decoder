// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078ea18
// Entry Point: 0078ea18
// Size: 124 bytes
// Signature: undefined FUN_0078ea18(void)


void FUN_0078ea18(char **param_1)

{
  long lVar1;
  long lVar2;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = EngineManager::getInstance();
  FontOverlayRenderer::replaceUnrenderableCharacters
            (*(FontOverlayRenderer **)(lVar2 + 0xf8),*param_1,0x25a1,&local_30);
  param_1[0x20] = local_30;
  *(undefined4 *)(param_1 + 0x21) = 6;
  *(ushort *)((long)param_1 + 0x10c) = *(ushort *)((long)param_1 + 0x10c) | 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


