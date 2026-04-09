// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jinit_memory_mgr
// Entry Point: 00d8d73c
// Size: 400 bytes
// Signature: undefined jinit_memory_mgr(void)


void jinit_memory_mgr(long *param_1)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  code **ppcVar4;
  char *__s;
  byte local_44 [4];
  code *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_1[1] = 0;
  pcVar3 = (code *)jpeg_mem_init();
  local_40 = pcVar3;
  ppcVar4 = (code **)jpeg_get_small(param_1,0xa8);
  if (ppcVar4 == (code **)0x0) {
    jpeg_mem_term(param_1);
    *(undefined8 *)(*param_1 + 0x28) = 0x38;
    (**(code **)*param_1)(param_1);
  }
  *ppcVar4 = FUN_00d8d8cc;
  ppcVar4[1] = FUN_00d8da7c;
  ppcVar4[0xe] = (code *)0x0;
  ppcVar4[0xd] = (code *)0x0;
  ppcVar4[2] = FUN_00d8db80;
  ppcVar4[3] = FUN_00d8dd68;
  ppcVar4[8] = FUN_00d8e62c;
  ppcVar4[9] = FUN_00d8e9b4;
  ppcVar4[0x10] = (code *)0x0;
  ppcVar4[0xf] = (code *)0x0;
  ppcVar4[0x12] = (code *)0x0;
  ppcVar4[0x11] = (code *)0x0;
  ppcVar4[4] = FUN_00d8df68;
  ppcVar4[5] = FUN_00d8e00c;
  ppcVar4[6] = FUN_00d8e0b0;
  ppcVar4[7] = FUN_00d8e2b0;
  ppcVar4[0xb] = pcVar3;
  ppcVar4[0xc] = (code *)0x3b9aca00;
  ppcVar4[10] = FUN_00d8eb08;
  ppcVar4[0x13] = (code *)0xa8;
  param_1[1] = (long)ppcVar4;
  __s = getenv("JPEGMEM");
  if (__s != (char *)0x0) {
    local_44[0] = 0x78;
    iVar2 = sscanf(__s,"%ld%c",&local_40,local_44);
    if (0 < iVar2) {
      if ((local_44[0] & 0xdf) == 0x4d) {
        local_40 = (code *)((long)local_40 * 1000);
      }
      ppcVar4[0xb] = (code *)((long)local_40 * 1000);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


