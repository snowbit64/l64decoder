// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796980
// Entry Point: 00796980
// Size: 148 bytes
// Signature: undefined FUN_00796980(void)


void FUN_00796980(char **param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  TextFilterManager *this;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (char *)0x0;
  lVar3 = EngineManager::getInstance();
  FontOverlayRenderer::replaceUnrenderableCharacters
            (*(FontOverlayRenderer **)(lVar3 + 0xf8),*param_1,0x20,&local_40);
  this = (TextFilterManager *)TextFilterManager::getInstance();
  bVar2 = TextFilterManager::searchText(this,local_40,3);
  *(undefined4 *)(param_1 + 0x21) = 3;
  *(byte *)(param_1 + 0x20) = bVar2 & 1;
  if (local_40 != (char *)0x0) {
    operator_delete__(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


