// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d2f238
// Entry Point: 00d2f238
// Size: 392 bytes
// Signature: undefined FUN_00d2f238(void)


void FUN_00d2f238(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined auStack_460 [1024];
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar5 = XmlInitEncoding;
  if (*(char *)(param_1 + 0x1c8) != '\0') {
    pcVar5 = XmlInitEncodingNS;
  }
  iVar2 = (*pcVar5)(param_1 + 0x128,param_1 + 0x120,*(undefined8 *)(param_1 + 0x1c0));
  if (iVar2 != 0) {
    uVar3 = 0;
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
    goto LAB_00d2f3bc;
  }
  pcVar5 = *(code **)(param_1 + 0xf8);
  if (pcVar5 != (code *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x1c0);
    memset(auStack_460,0xff,0x400);
    local_60 = 0;
    local_50 = (code *)0x0;
    local_58 = 0;
    iVar2 = (*pcVar5)(*(undefined8 *)(param_1 + 0x1e0),uVar3,auStack_460);
    if (iVar2 != 0) {
      pcVar5 = *(code **)(param_1 + 0x18);
      iVar2 = XmlSizeOfUnknownEncoding();
      lVar4 = (*pcVar5)((long)iVar2);
      *(long *)(param_1 + 0x1d0) = lVar4;
      if (lVar4 == 0) {
        if (local_50 != (code *)0x0) {
          (*local_50)(local_60);
        }
        uVar3 = 1;
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return;
        }
        goto LAB_00d2f3bc;
      }
      pcVar5 = XmlInitUnknownEncoding;
      if (*(char *)(param_1 + 0x1c8) != '\0') {
        pcVar5 = XmlInitUnknownEncodingNS;
      }
      lVar4 = (*pcVar5)(lVar4,auStack_460,local_58,local_60);
      if (lVar4 != 0) {
        uVar3 = 0;
        *(undefined8 *)(param_1 + 0x1d8) = local_60;
        *(code **)(param_1 + 0x1e8) = local_50;
        *(long *)(param_1 + 0x120) = lVar4;
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return;
        }
        goto LAB_00d2f3bc;
      }
    }
    if (local_50 != (code *)0x0) {
      (*local_50)(local_60);
    }
  }
  uVar3 = 0x12;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00d2f3bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


