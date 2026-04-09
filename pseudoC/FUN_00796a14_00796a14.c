// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796a14
// Entry Point: 00796a14
// Size: 160 bytes
// Signature: undefined FUN_00796a14(void)


void FUN_00796a14(char **param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined uVar4;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (char *)0x0;
  lVar2 = EngineManager::getInstance();
  FontOverlayRenderer::replaceUnrenderableCharacters
            (*(FontOverlayRenderer **)(lVar2 + 0xf8),*param_1,0x20,&local_30);
  pcVar3 = (char *)TextFilterManager::getInstance();
  uVar4 = 3;
  if (*(char *)(param_1 + 2) == '\0') {
    uVar4 = true;
  }
  TextFilterManager::filterText(pcVar3,(uint)local_30,(bool)uVar4);
  param_1[0x20] = local_30;
  *(undefined4 *)(param_1 + 0x21) = 6;
  *(ushort *)((long)param_1 + 0x10c) = *(ushort *)((long)param_1 + 0x10c) | 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


