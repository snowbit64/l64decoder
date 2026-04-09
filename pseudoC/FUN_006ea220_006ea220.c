// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ea220
// Entry Point: 006ea220
// Size: 224 bytes
// Signature: undefined FUN_006ea220(void)


void FUN_006ea220(uint *param_1)

{
  uint *puVar1;
  ushort uVar2;
  long lVar3;
  MasterServerManager *this;
  uint uVar4;
  uint local_4c;
  char *local_48;
  char *pcStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  puVar1 = param_1 + 0x43;
  this = (MasterServerManager *)MasterServerManager::getInstance();
  uVar4 = MasterServerManager::getServerUserInfo(this,*param_1,&pcStack_40,&local_48,&local_4c);
  if ((uVar4 & 1) == 0) {
    local_4c = 0;
    param_1[0x42] = 6;
    *(undefined **)(param_1 + 0x40) = &DAT_0050a39f;
    *(ushort *)puVar1 = *(ushort *)puVar1 & 0xfffe;
    uVar2 = *(ushort *)(param_1 + 0x47);
    *(undefined **)(param_1 + 0x44) = &DAT_0050a39f;
  }
  else {
    param_1[0x42] = 6;
    *(char **)(param_1 + 0x44) = local_48;
    *(ushort *)puVar1 = *(ushort *)puVar1 & 0xfffe;
    uVar2 = *(ushort *)(param_1 + 0x47);
    *(char **)(param_1 + 0x40) = pcStack_40;
  }
  *(ushort *)(param_1 + 0x47) = uVar2 & 0xfffe;
  param_1[0x46] = 6;
  param_1[0x48] = local_4c;
  param_1[0x4a] = 1;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


