// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e9a8c
// Entry Point: 006e9a8c
// Size: 308 bytes
// Signature: undefined FUN_006e9a8c(void)


void FUN_006e9a8c(uint *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  FontOverlayRenderer *this;
  uint local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = GenericStoreUtil::getProductInfo(*param_1);
  if (lVar3 == 0) {
    uVar2 = 0;
    pcVar6 = "";
  }
  else {
    lVar4 = EngineManager::getInstance();
    this = *(FontOverlayRenderer **)(lVar4 + 0xf8);
    local_5c = 0;
    pcVar6 = (char *)(lVar3 + 0x61);
    if ((*(byte *)(lVar3 + 0x60) & 1) != 0) {
      pcVar6 = *(char **)(lVar3 + 0x70);
    }
    uVar2 = StringUtil::utf8ToUnicode(pcVar6,&local_5c);
    while (local_5c != 0) {
      if ((uVar2 == 0) ||
         (uVar5 = FontOverlayRenderer::getCanRenderUnicode(this,local_5c), (uVar5 & 1) == 0)) {
        pcVar6 = (char *)(lVar3 + 0x79);
        if ((*(byte *)(lVar3 + 0x78) & 1) != 0) {
          pcVar6 = *(char **)(lVar3 + 0x88);
        }
        goto LAB_006e9b64;
      }
      pcVar6 = pcVar6 + uVar2;
      uVar2 = StringUtil::utf8ToUnicode(pcVar6,&local_5c);
    }
    pcVar6 = (char *)(lVar3 + 0x61);
    if ((*(byte *)(lVar3 + 0x60) & 1) != 0) {
      pcVar6 = *(char **)(lVar3 + 0x70);
    }
LAB_006e9b64:
    uVar2 = *(uint *)(lVar3 + 0x90);
  }
  *(char **)(param_1 + 0x40) = pcVar6;
  param_1[0x44] = uVar2;
  param_1[0x42] = 6;
  param_1[0x46] = 4;
  *(ushort *)(param_1 + 0x43) = *(ushort *)(param_1 + 0x43) & 0xfffe;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


