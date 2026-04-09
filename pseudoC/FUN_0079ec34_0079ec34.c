// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ec34
// Entry Point: 0079ec34
// Size: 144 bytes
// Signature: undefined FUN_0079ec34(void)


void FUN_0079ec34(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ushort uVar3;
  char *pcVar4;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (char *)0x0;
  uVar2 = DomXMLFile::saveToMemory((DomXMLFile *)(param_1 + 0x20),&local_30);
  if ((uVar2 & 1) == 0) {
    pcVar4 = "";
    uVar3 = *(ushort *)(param_2 + 0x10c) & 0xfffe;
  }
  else {
    uVar3 = *(ushort *)(param_2 + 0x10c) | 1;
    pcVar4 = local_30;
  }
  *(char **)(param_2 + 0x100) = pcVar4;
  *(undefined4 *)(param_2 + 0x108) = 6;
  *(ushort *)(param_2 + 0x10c) = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


