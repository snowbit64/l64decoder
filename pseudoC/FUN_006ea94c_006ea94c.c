// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ea94c
// Entry Point: 006ea94c
// Size: 184 bytes
// Signature: undefined FUN_006ea94c(void)


void FUN_006ea94c(undefined4 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  switch(uVar2) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    break;
  case 0x11:
    uVar2 = 0x13;
    break;
  case 0x12:
    EngineManager::getInstance();
    lVar1 = Renderer::getSharedRenderArgs();
    uVar2 = 0x14;
    *(undefined *)(lVar1 + 0x78) = 1;
    break;
  case 0x13:
    uVar2 = 0x15;
    break;
  case 0x14:
    uVar2 = 0x16;
    break;
  case 0x15:
    uVar2 = 0x17;
    break;
  case 0x16:
    uVar2 = 0x18;
    break;
  case 0x17:
    uVar2 = 0x19;
    break;
  case 0x18:
    uVar2 = 0x1a;
    break;
  case 0x19:
    uVar2 = 0x1b;
    break;
  case 0x1a:
    uVar2 = 0x1c;
    break;
  default:
    uVar2 = 0;
  }
  lVar1 = EngineManager::getInstance();
  *(undefined4 *)(*(long *)(lVar1 + 0xb8) + 0xf00) = uVar2;
  return;
}


